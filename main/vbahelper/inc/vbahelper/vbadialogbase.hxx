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


#ifndef VBA_DIALOG_BASE_HXX
#define VBA_DIALOG_BASE_HXX

#include <cppuhelper/implbase1.hxx>
#include <ooo/vba/XDialogBase.hpp>
#include <vbahelper/vbahelperinterface.hxx>
#include <com/sun/star/frame/XModel.hpp>

typedef InheritedHelperInterfaceImpl1< ov::XDialogBase > VbaDialogBase_BASE;

class VBAHELPER_DLLPUBLIC VbaDialogBase : public VbaDialogBase_BASE
{
protected:
	sal_Int32 mnIndex;
        css::uno::Reference< css::frame::XModel > m_xModel;
public:
	VbaDialogBase( const css::uno::Reference< ov::XHelperInterface >& xParent, const css::uno::Reference< css::uno::XComponentContext >& xContext, const css::uno::Reference< css::frame::XModel >& xModel, sal_Int32 nIndex ):VbaDialogBase_BASE( xParent, xContext ), mnIndex( nIndex ), m_xModel( xModel ) {}
	virtual ~VbaDialogBase() {}

	// Methods
	virtual void SAL_CALL Show() throw (css::uno::RuntimeException);
	virtual rtl::OUString mapIndexToName( sal_Int32 nIndex ) = 0;
};

#endif /* VBA_DIALOG_BASE_HXX */
