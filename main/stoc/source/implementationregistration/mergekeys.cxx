/**************************************************************
 * 
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 * 
 *   http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 * 
 *************************************************************/



// MARKER(update_precomp.py): autogen include statement, do not remove
#include "precompiled_stoc.hxx"

#include <vector>

#include <com/sun/star/registry/XRegistryKey.hpp>
#include <com/sun/star/registry/MergeConflictException.hpp>

#include "mergekeys.hxx"

#define OUSTR(x) ::rtl::OUString( RTL_CONSTASCII_USTRINGPARAM(x) )

using namespace ::rtl;
using namespace ::osl;
using namespace ::com::sun::star::uno;
using namespace ::com::sun::star;

namespace stoc_impreg
{

struct Link
{
    OUString m_name;
    OUString m_target;
    
    inline Link( OUString const & name, OUString const & target )
        : m_name( name )
        , m_target( target )
        {}
};
typedef ::std::vector< Link > t_links;

//==================================================================================================
static void mergeKeys(
    Reference< registry::XRegistryKey > const & xDest,
    Reference< registry::XRegistryKey > const & xSource,
    t_links & links )
    // throw( registry::InvalidRegistryException, registry::MergeConflictException, RuntimeException )
{
    if (!xSource.is() || !xSource->isValid()) {
        throw registry::InvalidRegistryException(
            OUSTR("source key is null or invalid!"),
            Reference<XInterface>() );
    }
    if (!xDest.is() || !xDest->isValid()) {
        throw registry::InvalidRegistryException(
            OUSTR("destination key is null or invalid!"),
            Reference<XInterface>() );
    }
    
    // write value
    switch (xSource->getValueType())
    {
    case registry::RegistryValueType_NOT_DEFINED:
        break;
    case registry::RegistryValueType_LONG:
        xDest->setLongValue( xSource->getLongValue() );
        break;
    case registry::RegistryValueType_ASCII:
        xDest->setAsciiValue( xSource->getAsciiValue() );
        break;
    case registry::RegistryValueType_STRING:
        xDest->setStringValue( xSource->getStringValue() );
        break;
    case registry::RegistryValueType_BINARY:
        xDest->setBinaryValue( xSource->getBinaryValue() );
        break;
    case registry::RegistryValueType_LONGLIST:
        xDest->setLongListValue( xSource->getLongListValue() );
        break;
    case registry::RegistryValueType_ASCIILIST:
        xDest->setAsciiListValue( xSource->getAsciiListValue() );
        break;
    case registry::RegistryValueType_STRINGLIST:
        xDest->setStringListValue( xSource->getStringListValue() );
        break;
    default:
        OSL_ASSERT(false);
        break;
    }
    
    // sub keys
    Sequence< OUString > sourceKeys( xSource->getKeyNames() );
    OUString const * pSourceKeys = sourceKeys.getConstArray();
    for ( sal_Int32 nPos = sourceKeys.getLength(); nPos--; )
    {
        // key name
        OUString name( pSourceKeys[ nPos ] );
        sal_Int32 nSlash = name.lastIndexOf( '/' );
        if (nSlash >= 0)
        {
            name = name.copy( nSlash +1 );
        }
        
        if (xSource->getKeyType( name ) == registry::RegistryKeyType_KEY)
        {
            // try to open exisiting dest key or create new one
            Reference< registry::XRegistryKey > xDestKey( xDest->createKey( name ) );
            Reference< registry::XRegistryKey > xSourceKey( xSource->openKey( name ) );
            mergeKeys( xDestKey, xSourceKey, links );
            xSourceKey->closeKey();
            xDestKey->closeKey();
        }
        else // link
        {
            // remove existing key
            Reference< registry::XRegistryKey > xDestKey( xDest->openKey( name ) );
            if (xDestKey.is() && xDestKey->isValid()) // something to remove
            {
                xDestKey->closeKey();
                if (xDest->getKeyType( name ) == registry::RegistryKeyType_LINK)
                {
                    xDest->deleteLink( name );
                }
                else
                {
                    xDest->deleteKey( name );
                }
            }
            
            links.push_back( Link(
                pSourceKeys[ nPos ], // abs path
                xSource->getResolvedName( name ) // abs resolved name
                ) );
        }
    }
}

//==================================================================================================
void mergeKeys(
    Reference< registry::XRegistryKey > const & xDest,
    Reference< registry::XRegistryKey > const & xSource )
    // throw( registry::InvalidRegistryException, registry::MergeConflictException, RuntimeException )
{
    if (!xDest.is() || !xDest->isValid()) {
        throw registry::InvalidRegistryException(
            OUSTR("destination key is null or invalid!"),
            Reference<XInterface>() );
    }
    if (xDest->isReadOnly())
    {
        throw registry::InvalidRegistryException(
            OUString( RTL_CONSTASCII_USTRINGPARAM(
                          "destination registry is read-only!  cannot merge!") ),
            Reference< XInterface >() );
    }
    
    t_links links;
    links.reserve( 16 );
    mergeKeys( xDest, xSource, links );
    
    for ( size_t nPos = links.size(); nPos--; )
    {
        Link const & r = links[ nPos ];
        OSL_VERIFY( xDest->createLink( r.m_name, r.m_target ) );
    }
}

}