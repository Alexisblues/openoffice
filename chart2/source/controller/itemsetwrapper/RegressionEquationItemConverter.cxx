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
#include "precompiled_chart2.hxx"

#include "RegressionEquationItemConverter.hxx"
#include "SchWhichPairs.hxx"
#include "macros.hxx"
#include "ItemPropertyMap.hxx"
#include "GraphicPropertyItemConverter.hxx"
#include "CharacterPropertyItemConverter.hxx"
#include "MultipleItemConverter.hxx"

#include <svl/intitem.hxx>
#include <rtl/math.hxx>

#include <functional>
#include <algorithm>

using namespace ::com::sun::star;

namespace
{
::comphelper::ItemPropertyMapType & lcl_GetEquationPropertyMap()
{
    static ::comphelper::ItemPropertyMapType aEquationPropertyMap;

    return aEquationPropertyMap;
};
} // anonymous namespace

namespace chart
{
namespace wrapper
{

RegressionEquationItemConverter::RegressionEquationItemConverter(
    const ::com::sun::star::uno::Reference<
    ::com::sun::star::beans::XPropertySet > & rPropertySet,
    SfxItemPool& rItemPool,
    SdrModel& rDrawModel,
    const uno::Reference< lang::XMultiServiceFactory > & xNamedPropertyContainerFactory,
    ::std::auto_ptr< ::com::sun::star::awt::Size > pRefSize ) :
        ItemConverter( rPropertySet, rItemPool )
{
    m_aConverters.push_back( new GraphicPropertyItemConverter(
                                 rPropertySet, rItemPool, rDrawModel,
                                 xNamedPropertyContainerFactory,
                                 GraphicPropertyItemConverter::LINE_AND_FILL_PROPERTIES ));

    m_aConverters.push_back( new CharacterPropertyItemConverter(
                                 rPropertySet, rItemPool, pRefSize, C2U("ReferencePageSize")));

//     // CharacterProperties are not at the title but at its contained XFormattedString objects
//     // take the first formatted string in the sequence
//     uno::Reference< chart2::XTitle > xTitle( rPropertySet, uno::UNO_QUERY );
//     if( xTitle.is())
//     {
//         uno::Sequence< uno::Reference< chart2::XFormattedString > > aStringSeq( xTitle->getText());
//         if( aStringSeq.getLength() > 0 )
//         {
//             m_aConverters.push_back(
//                 new FormattedStringsConverter( aStringSeq, rItemPool, pRefSize, rPropertySet ));
//         }
//     }
}

RegressionEquationItemConverter::~RegressionEquationItemConverter()
{
    ::std::for_each( m_aConverters.begin(), m_aConverters.end(),
                     ::comphelper::DeleteItemConverterPtr() );
}

void RegressionEquationItemConverter::FillItemSet( SfxItemSet & rOutItemSet ) const
{
    ::std::for_each( m_aConverters.begin(), m_aConverters.end(),
                     ::comphelper::FillItemSetFunc( rOutItemSet ));

    // own items
    ItemConverter::FillItemSet( rOutItemSet );
}

bool RegressionEquationItemConverter::ApplyItemSet( const SfxItemSet & rItemSet )
{
    bool bResult = false;

    ::std::for_each( m_aConverters.begin(), m_aConverters.end(),
                     ::comphelper::ApplyItemSetFunc( rItemSet, bResult ));

    // own items
    return ItemConverter::ApplyItemSet( rItemSet ) || bResult;
}

const sal_uInt16 * RegressionEquationItemConverter::GetWhichPairs() const
{
    // must span all used items!
    return nRegEquationWhichPairs;
}

bool RegressionEquationItemConverter::GetItemProperty( tWhichIdType nWhichId, tPropertyNameWithMemberId & rOutProperty ) const
{
    ::comphelper::ItemPropertyMapType & rMap( lcl_GetEquationPropertyMap());
    ::comphelper::ItemPropertyMapType::const_iterator aIt( rMap.find( nWhichId ));

    if( aIt == rMap.end())
        return false;

    rOutProperty =(*aIt).second;
    return true;
}

bool RegressionEquationItemConverter::ApplySpecialItem(
    sal_uInt16 nWhichId, const SfxItemSet & rItemSet )
    throw( uno::Exception )
{
    bool bChanged = false;

    switch( nWhichId )
    {
        case SID_ATTR_NUMBERFORMAT_VALUE:
        {
//             bool bUseSourceFormat =
//                 (static_cast< const SfxBoolItem & >(
//                     rItemSet.Get( SID_ATTR_NUMBERFORMAT_SOURCE )).GetValue() );

//             if( ! bUseSourceFormat )
//             {
            uno::Any aValue( static_cast< sal_Int32 >(
                static_cast< const SfxUInt32Item & >(
                    rItemSet.Get( nWhichId )).GetValue()));
            if( GetPropertySet()->getPropertyValue( C2U( "NumberFormat" )) != aValue )
            {
                GetPropertySet()->setPropertyValue( C2U( "NumberFormat" ), aValue );
                bChanged = true;
            }
        }
        break;
    }

    return bChanged;
}

void RegressionEquationItemConverter::FillSpecialItem(
    sal_uInt16 nWhichId, SfxItemSet & rOutItemSet ) const
    throw( uno::Exception )
{
    switch( nWhichId )
    {
        case SID_ATTR_NUMBERFORMAT_VALUE:
        {
            sal_Int32 nFormatKey = 0;
            if( GetPropertySet()->getPropertyValue( C2U( "NumberFormat" )) >>= nFormatKey )
            {
                rOutItemSet.Put( SfxUInt32Item( nWhichId, nFormatKey ));
            }
        }
        break;
   }
}

} //  namespace wrapper
} //  namespace chart
