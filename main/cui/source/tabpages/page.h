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


#ifndef _SVX_PAGE_H
#define _SVX_PAGE_H

// define ----------------------------------------------------------------

//!! the values of the following defines must correspond to the array position
//!! of the respective paper size in the file i18npool/source/paper/paper.cxx
//!! There are enums for them in i18npool/inc/i18npool/paper.hxx but unfortunately
//!! the resource compiler does not understand enums, thus the enum values need
//!! to be duplicated here for use in the src file.
#define PAPERSIZE_A0			0
#define PAPERSIZE_A1			1
#define PAPERSIZE_A2			2
#define PAPERSIZE_A3			3
#define PAPERSIZE_A4			4
#define PAPERSIZE_A5			5
#define PAPERSIZE_B4_ISO		6
#define PAPERSIZE_B5_ISO		7
#define PAPERSIZE_LETTER		8
#define PAPERSIZE_LEGAL 		9
#define PAPERSIZE_TABLOID   	10
#define PAPERSIZE_USER  		11
#define PAPERSIZE_B6_ISO		12
#define PAPERSIZE_C4			13
#define PAPERSIZE_C5			14
#define PAPERSIZE_C6			15
#define PAPERSIZE_C65   		16
#define PAPERSIZE_DL			17
#define PAPERSIZE_DIA   		18
#define PAPERSIZE_SCREEN		19
#define PAPERSIZE_C 			20
#define PAPERSIZE_D 			21
#define PAPERSIZE_E 			22
#define PAPERSIZE_EXECUTIVE 	23
#define PAPERSIZE_LEGAL2		24
#define PAPERSIZE_MONARCH   	25
#define PAPERSIZE_COM675  		26
#define PAPERSIZE_COM9  		27
#define PAPERSIZE_COM10 		28
#define PAPERSIZE_COM11 		29
#define PAPERSIZE_COM12 		30
#define PAPERSIZE_KAI16 		31
#define PAPERSIZE_KAI32 		32
#define PAPERSIZE_KAI32BIG 		33
#define PAPERSIZE_B4_JIS		34
#define PAPERSIZE_B5_JIS		35
#define PAPERSIZE_B6_JIS		36
#define PAPERSIZE_A6            56

#endif

