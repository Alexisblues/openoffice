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


#ifndef _CHART2_VTITLE_HXX
#define _CHART2_VTITLE_HXX

#include <com/sun/star/chart2/XTitle.hpp>
#include <com/sun/star/drawing/XShapes.hpp>
#include <com/sun/star/lang/XMultiServiceFactory.hpp>

//.............................................................................
namespace chart
{
//.............................................................................

//-----------------------------------------------------------------------------
/**
*/

class VTitle
{
public:
    VTitle( const ::com::sun::star::uno::Reference<
                  ::com::sun::star::chart2::XTitle > & xTitle );
    virtual ~VTitle();

    void    init( const ::com::sun::star::uno::Reference<
                     ::com::sun::star::drawing::XShapes >& xTargetPage
             , const ::com::sun::star::uno::Reference< ::com::sun::star::lang::XMultiServiceFactory >& xFactory
             , const rtl::OUString& rCID );

    void    createShapes( const ::com::sun::star::awt::Point& rPos
                          , const ::com::sun::star::awt::Size& rReferenceSize );

    double getRotationAnglePi() const;
    ::com::sun::star::awt::Size getUnrotatedSize() const;
    ::com::sun::star::awt::Size getFinalSize() const;
    void    changePosition( const ::com::sun::star::awt::Point& rPos );

private:
    ::com::sun::star::uno::Reference<
                    ::com::sun::star::drawing::XShapes >            m_xTarget;
    ::com::sun::star::uno::Reference<
                    ::com::sun::star::lang::XMultiServiceFactory>	m_xShapeFactory;
    ::com::sun::star::uno::Reference<
        ::com::sun::star::chart2::XTitle >                  m_xTitle;
    ::com::sun::star::uno::Reference<
                    ::com::sun::star::drawing::XShape >             m_xShape;
    rtl::OUString   m_aCID;

    double      m_fRotationAngleDegree;
    sal_Int32   m_nXPos;
    sal_Int32   m_nYPos;
};

//.............................................................................
} //namespace chart
//.............................................................................
#endif

