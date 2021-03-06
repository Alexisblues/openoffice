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


package com.sun.star.report.pentaho.parser;

import com.sun.star.report.pentaho.OfficeNamespaces;
import com.sun.star.report.pentaho.parser.office.DocumentContentReadHandler;

import org.pentaho.reporting.libraries.xmlns.parser.XmlDocumentInfo;
import org.pentaho.reporting.libraries.xmlns.parser.XmlFactoryModule;
import org.pentaho.reporting.libraries.xmlns.parser.XmlReadHandler;

public class StarXmlFactoryModule implements XmlFactoryModule
{

    public StarXmlFactoryModule()
    {
    }

    public XmlReadHandler createReadHandler(final XmlDocumentInfo documentInfo)
    {
        return new DocumentContentReadHandler();
    }

    public int getDocumentSupport(final XmlDocumentInfo documentInfo)
    {
        final String rootNamespace = documentInfo.getRootElementNameSpace();
        if (OfficeNamespaces.OFFICE_NS.equals(rootNamespace) && ("document-content".equals(documentInfo.getRootElement()) || "document".equals(documentInfo.getRootElement())))
        {
            return XmlFactoryModule.RECOGNIZED_BY_NAMESPACE;
        }
        return XmlFactoryModule.NOT_RECOGNIZED;
    }

    public String getDefaultNamespace(final XmlDocumentInfo documentInfo)
    {
        return null;
    }
}
