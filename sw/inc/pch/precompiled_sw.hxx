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



// MARKER(update_precomp.py): Generated on 2006-09-01 17:50:13.279643

#ifdef PRECOMPILED_HEADERS

//---MARKER---

#include "sal/config.h"
#include "sal/types.h"

#include "avmedia/mediaitem.hxx"
#include "avmedia/mediaplayer.hxx"
#include "avmedia/mediatoolbox.hxx"
#include "avmedia/mediawindow.hxx"

#include "basegfx/numeric/ftools.hxx"

#include "basic/basmgr.hxx"
#include "basic/sbmeth.hxx"
#include "basic/sbmod.hxx"
#include "basic/sbstar.hxx"
#include "basic/sbx.hxx"
#include "basic/sbxobj.hxx"
#include "basic/sbxvar.hxx"

#include "boost/shared_ptr.hpp"

#include "com/sun/star/accessibility/AccessibleEventId.hpp"
#include "com/sun/star/accessibility/AccessibleRelation.hpp"
#include "com/sun/star/accessibility/AccessibleRelationType.hpp"
#include "com/sun/star/accessibility/AccessibleRole.hpp"
#include "com/sun/star/accessibility/AccessibleStateType.hpp"
#include "com/sun/star/accessibility/AccessibleTableModelChange.hpp"
#include "com/sun/star/accessibility/AccessibleTableModelChangeType.hpp"
#include "com/sun/star/accessibility/AccessibleTextType.hpp"
#include "com/sun/star/accessibility/XAccessible.hpp"
#include "com/sun/star/accessibility/XAccessibleEditableText.hpp"
#include "com/sun/star/accessibility/XAccessibleEventBroadcaster.hpp"
#include "com/sun/star/accessibility/XAccessibleHyperlink.hpp"
#include "com/sun/star/accessibility/XAccessibleHypertext.hpp"
#include "com/sun/star/accessibility/XAccessibleImage.hpp"
#include "com/sun/star/accessibility/XAccessibleRelationSet.hpp"
#include "com/sun/star/accessibility/XAccessibleSelection.hpp"
#include "com/sun/star/accessibility/XAccessibleStateSet.hpp"
#include "com/sun/star/accessibility/XAccessibleTable.hpp"
#include "com/sun/star/accessibility/XAccessibleTextAttributes.hpp"
#include "com/sun/star/accessibility/XAccessibleValue.hpp"
#include "com/sun/star/awt/PosSize.hpp"
#include "com/sun/star/awt/ScrollBarOrientation.hpp"
#include "com/sun/star/awt/Size.hpp"
#include "com/sun/star/awt/Style.hpp"
#include "com/sun/star/awt/TextAlign.hpp"
#include "com/sun/star/awt/VclWindowPeerAttribute.hpp"
#include "com/sun/star/awt/XBitmap.hpp"
#include "com/sun/star/awt/XButton.hpp"
#include "com/sun/star/awt/XCheckBox.hpp"
#include "com/sun/star/awt/XComboBox.hpp"
#include "com/sun/star/awt/XControlModel.hpp"
#include "com/sun/star/awt/XCurrencyField.hpp"
#include "com/sun/star/awt/XDateField.hpp"
#include "com/sun/star/awt/XDialog.hpp"
#include "com/sun/star/awt/XFileDialog.hpp"
#include "com/sun/star/awt/XFixedText.hpp"
#include "com/sun/star/awt/XImageButton.hpp"
#include "com/sun/star/awt/XLayoutConstrains.hpp"
#include "com/sun/star/awt/XListBox.hpp"
#include "com/sun/star/awt/XMessageBox.hpp"
#include "com/sun/star/awt/XNumericField.hpp"
#include "com/sun/star/awt/XPatternField.hpp"
#include "com/sun/star/awt/XRadioButton.hpp"
#include "com/sun/star/awt/XScrollBar.hpp"
#include "com/sun/star/awt/XSpinField.hpp"
#include "com/sun/star/awt/XTabControllerModel.hpp"
#include "com/sun/star/awt/XTextArea.hpp"
#include "com/sun/star/awt/XTextComponent.hpp"
#include "com/sun/star/awt/XTextEditField.hpp"
#include "com/sun/star/awt/XTextLayoutConstrains.hpp"
#include "com/sun/star/awt/XTimeField.hpp"
#include "com/sun/star/awt/XVclContainer.hpp"
#include "com/sun/star/awt/XVclContainerPeer.hpp"
#include "com/sun/star/beans/NamedValue.hpp"
#include "com/sun/star/beans/PropertyAttribute.hpp"
#include "com/sun/star/beans/PropertyChangeEvent.hpp"
#include "com/sun/star/beans/PropertyState.hpp"
#include "com/sun/star/beans/PropertyValue.hpp"
#include "com/sun/star/beans/PropertyValues.hpp"
#include "com/sun/star/beans/UnknownPropertyException.hpp"
#include "com/sun/star/beans/XFastPropertySet.hpp"
#include "com/sun/star/beans/XMultiPropertySet.hpp"
#include "com/sun/star/beans/XMultiPropertyStates.hpp"
#include "com/sun/star/beans/XPropertyAccess.hpp"
#include "com/sun/star/beans/XPropertyChangeListener.hpp"
#include "com/sun/star/beans/XPropertyContainer.hpp"
#include "com/sun/star/beans/XPropertySet.hpp"
#include "com/sun/star/beans/XPropertySetInfo.hpp"
#include "com/sun/star/beans/XPropertyState.hpp"
#include "com/sun/star/beans/XPropertyStateChangeListener.hpp"
#include "com/sun/star/chart/XChartData.hpp"
#include "com/sun/star/chart/XChartDataArray.hpp"
#include "com/sun/star/container/XChild.hpp"
#include "com/sun/star/container/XContainer.hpp"
#include "com/sun/star/container/XContainerListener.hpp"
#include "com/sun/star/container/XContentEnumerationAccess.hpp"
#include "com/sun/star/container/XElementAccess.hpp"
#include "com/sun/star/container/XEnumeration.hpp"
#include "com/sun/star/container/XEnumerationAccess.hpp"
#include "com/sun/star/container/XHierarchicalNameAccess.hpp"
#include "com/sun/star/container/XIndexAccess.hpp"
#include "com/sun/star/container/XIndexContainer.hpp"
#include "com/sun/star/container/XIndexReplace.hpp"
#include "com/sun/star/container/XNameAccess.hpp"
#include "com/sun/star/container/XNameContainer.hpp"
#include "com/sun/star/container/XNamed.hpp"
#include "com/sun/star/container/XSet.hpp"
#include "com/sun/star/datatransfer/XTransferable.hpp"
#include "com/sun/star/datatransfer/XTransferableSupplier.hpp"
#include "com/sun/star/datatransfer/clipboard/XClipboard.hpp"
#include "com/sun/star/datatransfer/clipboard/XClipboardListener.hpp"
#include "com/sun/star/datatransfer/clipboard/XClipboardNotifier.hpp"
#include "com/sun/star/document/PrinterIndependentLayout.hpp"
#include "com/sun/star/document/RedlineDisplayType.hpp"
#include "com/sun/star/document/UpdateDocMode.hpp"
#include "com/sun/star/document/XDocumentInfoSupplier.hpp"
#include "com/sun/star/document/XDocumentInsertable.hpp"
#include "com/sun/star/document/XEmbeddedObjectSupplier.hpp"
#include "com/sun/star/document/XEmbeddedObjectSupplier2.hpp"
#include "com/sun/star/document/XEventBroadcaster.hpp"
#include "com/sun/star/document/XEventsSupplier.hpp"
#include "com/sun/star/document/XExporter.hpp"
#include "com/sun/star/document/XExtendedFilterDetection.hpp"
#include "com/sun/star/document/XFilter.hpp"
#include "com/sun/star/document/XImporter.hpp"
#include "com/sun/star/document/XLinkTargetSupplier.hpp"
#include "com/sun/star/document/XRedlinesSupplier.hpp"
#include "com/sun/star/drawing/ColorMode.hpp"
#include "com/sun/star/drawing/HomogenMatrix3.hpp"
#include "com/sun/star/drawing/PointSequence.hpp"
#include "com/sun/star/drawing/PointSequenceSequence.hpp"
#include "com/sun/star/drawing/XConnectableShape.hpp"
#include "com/sun/star/drawing/XConnectorShape.hpp"
#include "com/sun/star/drawing/XControlShape.hpp"
#include "com/sun/star/drawing/XDrawPage.hpp"
#include "com/sun/star/drawing/XDrawPageSupplier.hpp"
#include "com/sun/star/drawing/XShape.hpp"
#include "com/sun/star/drawing/XShapeAligner.hpp"
#include "com/sun/star/drawing/XShapeArranger.hpp"
#include "com/sun/star/drawing/XShapeGroup.hpp"
#include "com/sun/star/drawing/XShapeMirror.hpp"
#include "com/sun/star/drawing/XShapes.hpp"
#include "com/sun/star/drawing/XUniversalShapeDescriptor.hpp"
#include "com/sun/star/embed/Aspects.hpp"
#include "com/sun/star/embed/ElementModes.hpp"
#include "com/sun/star/embed/EmbedMisc.hpp"
#include "com/sun/star/embed/EmbedStates.hpp"
#include "com/sun/star/embed/NoVisualAreaSizeException.hpp"
#include "com/sun/star/embed/XClassifiedObject.hpp"
#include "com/sun/star/embed/XComponentSupplier.hpp"
#include "com/sun/star/embed/XEmbedObjectClipboardCreator.hpp"
#include "com/sun/star/embed/XEmbedObjectCreator.hpp"
#include "com/sun/star/embed/XEmbedPersist.hpp"
#include "com/sun/star/embed/XEmbeddedObject.hpp"
#include "com/sun/star/embed/XLinkCreator.hpp"
#include "com/sun/star/embed/XLinkageSupport.hpp"
#include "com/sun/star/embed/XStorage.hpp"
#include "com/sun/star/embed/XTransactedObject.hpp"
#include "com/sun/star/embed/XVisualObject.hpp"
#include "com/sun/star/form/FormButtonType.hpp"
#include "com/sun/star/form/FormComponentType.hpp"
#include "com/sun/star/form/FormSubmitEncoding.hpp"
#include "com/sun/star/form/FormSubmitMethod.hpp"
#include "com/sun/star/form/ListSourceType.hpp"
#include "com/sun/star/form/XForm.hpp"
#include "com/sun/star/form/XFormComponent.hpp"
#include "com/sun/star/form/XFormsSupplier.hpp"
#include "com/sun/star/form/XImageProducerSupplier.hpp"
#include "com/sun/star/frame/DispatchDescriptor.hpp"
#include "com/sun/star/frame/DispatchResultState.hpp"
#include "com/sun/star/frame/FrameSearchFlag.hpp"
#include "com/sun/star/frame/XComponentLoader.hpp"
#include "com/sun/star/frame/XController.hpp"
#include "com/sun/star/frame/XDesktop.hpp"
#include "com/sun/star/frame/XDispatch.hpp"
#include "com/sun/star/frame/XDispatchHelper.hpp"
#include "com/sun/star/frame/XDispatchProvider.hpp"
#include "com/sun/star/frame/XDispatchProviderInterception.hpp"
#include "com/sun/star/frame/XDispatchProviderInterceptor.hpp"
#include "com/sun/star/frame/XFrame.hpp"
#include "com/sun/star/frame/XLayoutManager.hpp"
#include "com/sun/star/frame/XModel.hpp"
#include "com/sun/star/frame/XNotifyingDispatch.hpp"
#include "com/sun/star/frame/XStorable.hpp"
#include "com/sun/star/frame/XTerminateListener.hpp"
#include "com/sun/star/i18n/Boundary.hpp"
#include "com/sun/star/i18n/BreakType.hpp"
#include "com/sun/star/i18n/CharacterIteratorMode.hpp"
#include "com/sun/star/i18n/CollatorOptions.hpp"
#include "com/sun/star/i18n/ForbiddenCharacters.hpp"
#include "com/sun/star/i18n/InputSequenceCheckMode.hpp"
#include "com/sun/star/i18n/ScriptType.hpp"
#include "com/sun/star/i18n/TextConversionOption.hpp"
#include "com/sun/star/i18n/TransliterationModules.hpp"
#include "com/sun/star/i18n/WordType.hpp"
#include "com/sun/star/i18n/XBreakIterator.hpp"
#include "com/sun/star/i18n/XExtendedIndexEntrySupplier.hpp"
#include "com/sun/star/i18n/XExtendedInputSequenceChecker.hpp"
#include "com/sun/star/i18n/XForbiddenCharacters.hpp"
#include "com/sun/star/io/XActiveDataControl.hpp"
#include "com/sun/star/io/XActiveDataSource.hpp"
#include "com/sun/star/io/XInputStream.hpp"
#include "com/sun/star/io/XOutputStream.hpp"
#include "com/sun/star/io/XSeekable.hpp"
#include "com/sun/star/lang/DisposedException.hpp"
#include "com/sun/star/lang/EventObject.hpp"
#include "com/sun/star/lang/Locale.hpp"
#include "com/sun/star/lang/ServiceNotRegisteredException.hpp"
#include "com/sun/star/lang/WrappedTargetRuntimeException.hpp"
#include "com/sun/star/lang/XComponent.hpp"
#include "com/sun/star/lang/XEventListener.hpp"
#include "com/sun/star/lang/XInitialization.hpp"
#include "com/sun/star/lang/XMultiServiceFactory.hpp"
#include "com/sun/star/lang/XServiceInfo.hpp"
#include "com/sun/star/lang/XSingleServiceFactory.hpp"
#include "com/sun/star/lang/XUnoTunnel.hpp"
#include "com/sun/star/linguistic2/DictionaryListEventFlags.hpp"
#include "com/sun/star/linguistic2/LinguServiceEventFlags.hpp"
#include "com/sun/star/linguistic2/XDictionary.hpp"
#include "com/sun/star/linguistic2/XDictionaryList.hpp"
#include "com/sun/star/linguistic2/XDictionaryListEventListener.hpp"
#include "com/sun/star/linguistic2/XHyphenatedWord.hpp"
#include "com/sun/star/linguistic2/XHyphenator.hpp"
#include "com/sun/star/linguistic2/XLinguServiceEventListener.hpp"
#include "com/sun/star/linguistic2/XLinguServiceManager.hpp"
#include "com/sun/star/linguistic2/XSpellAlternatives.hpp"
#include "com/sun/star/linguistic2/XSpellChecker1.hpp"
#include "com/sun/star/linguistic2/XThesaurus.hpp"
#include "com/sun/star/mail/MailAttachment.hpp"
#include "com/sun/star/mail/MailServiceType.hpp"
#include "com/sun/star/mail/XAuthenticator.hpp"
#include "com/sun/star/mail/XConnectionListener.hpp"
#include "com/sun/star/mail/XMailMessage.hpp"
#include "com/sun/star/mail/XMailService.hpp"
#include "com/sun/star/mail/XSmtpService.hpp"
#include "com/sun/star/packages/WrongPasswordException.hpp"
#include "com/sun/star/packages/zip/ZipIOException.hpp"
#include "com/sun/star/scanner/ScannerContext.hpp"
#include "com/sun/star/scanner/XScannerManager.hpp"
#include "com/sun/star/script/XEventAttacher.hpp"
#include "com/sun/star/script/XEventAttacherManager.hpp"
#include "com/sun/star/script/XLibraryContainer.hpp"
#include "com/sun/star/sdb/CommandType.hpp"
#include "com/sun/star/sdb/SQLContext.hpp"
#include "com/sun/star/sdb/XColumn.hpp"
#include "com/sun/star/sdb/XCompletedConnection.hpp"
#include "com/sun/star/sdb/XCompletedExecution.hpp"
#include "com/sun/star/sdb/XDatabaseAccess.hpp"
#include "com/sun/star/sdb/XDocumentDataSource.hpp"
#include "com/sun/star/sdb/XQueriesSupplier.hpp"
#include "com/sun/star/sdb/XResultSetAccess.hpp"
#include "com/sun/star/sdb/XSingleSelectQueryComposer.hpp"
#include "com/sun/star/sdbc/DataType.hpp"
#include "com/sun/star/sdbc/ResultSetType.hpp"
#include "com/sun/star/sdbc/XCloseable.hpp"
#include "com/sun/star/sdbc/XConnection.hpp"
#include "com/sun/star/sdbc/XDataSource.hpp"
#include "com/sun/star/sdbc/XResultSet.hpp"
#include "com/sun/star/sdbc/XRow.hpp"
#include "com/sun/star/sdbc/XRowSet.hpp"
#include "com/sun/star/sdbcx/XColumnsSupplier.hpp"
#include "com/sun/star/sdbcx/XRowLocate.hpp"
#include "com/sun/star/sdbcx/XTablesSupplier.hpp"
#include "com/sun/star/sheet/XCellRangeData.hpp"
#include "com/sun/star/style/BreakType.hpp"
#include "com/sun/star/style/DropCapFormat.hpp"
#include "com/sun/star/style/GraphicLocation.hpp"
#include "com/sun/star/style/LineNumberPosition.hpp"
#include "com/sun/star/style/LineSpacing.hpp"
#include "com/sun/star/style/LineSpacingMode.hpp"
#include "com/sun/star/style/NumberingType.hpp"
#include "com/sun/star/style/PageStyleLayout.hpp"
#include "com/sun/star/style/ParagraphAdjust.hpp"
#include "com/sun/star/style/ParagraphStyleCategory.hpp"
#include "com/sun/star/style/VerticalAlignment.hpp"
#include "com/sun/star/style/XStyle.hpp"
#include "com/sun/star/style/XStyleFamiliesSupplier.hpp"
#include "com/sun/star/style/XStyleLoader.hpp"
#include "com/sun/star/table/CellContentType.hpp"
#include "com/sun/star/table/TableSortField.hpp"
#include "com/sun/star/table/XAutoFormattable.hpp"
#include "com/sun/star/table/XCellRange.hpp"
#include "com/sun/star/task/XInteractionHandler.hpp"
#include "com/sun/star/task/XJob.hpp"
#include "com/sun/star/task/XStatusIndicatorFactory.hpp"
#include "com/sun/star/text/BibliographyDataField.hpp"
#include "com/sun/star/text/ChapterFormat.hpp"
#include "com/sun/star/text/ControlCharacter.hpp"
#include "com/sun/star/text/DocumentStatistic.hpp"
#include "com/sun/star/text/FilenameDisplayFormat.hpp"
#include "com/sun/star/text/FootnoteNumbering.hpp"
#include "com/sun/star/text/GraphicCrop.hpp"
#include "com/sun/star/text/HoriOrientation.hpp"
#include "com/sun/star/text/HoriOrientationFormat.hpp"
#include "com/sun/star/text/HorizontalAdjust.hpp"
#include "com/sun/star/text/InvalidTextContentException.hpp"
#include "com/sun/star/text/MailMergeEvent.hpp"
#include "com/sun/star/text/MailMergeType.hpp"
#include "com/sun/star/text/NotePrintMode.hpp"
#include "com/sun/star/text/PageNumberType.hpp"
#include "com/sun/star/text/PlaceholderType.hpp"
#include "com/sun/star/text/PositionLayoutDir.hpp"
#include "com/sun/star/text/ReferenceFieldPart.hpp"
#include "com/sun/star/text/ReferenceFieldSource.hpp"
#include "com/sun/star/text/RelOrientation.hpp"
#include "com/sun/star/text/RubyAdjust.hpp"
#include "com/sun/star/text/SectionFileLink.hpp"
#include "com/sun/star/text/SetVariableType.hpp"
#include "com/sun/star/text/SizeType.hpp"
#include "com/sun/star/text/TableColumnSeparator.hpp"
#include "com/sun/star/text/TemplateDisplayFormat.hpp"
#include "com/sun/star/text/TextContentAnchorType.hpp"
#include "com/sun/star/text/TextGridMode.hpp"
#include "com/sun/star/text/UserDataPart.hpp"
#include "com/sun/star/text/UserFieldFormat.hpp"
#include "com/sun/star/text/VertOrientation.hpp"
#include "com/sun/star/text/VertOrientationFormat.hpp"
#include "com/sun/star/text/WrapInfluenceOnPosition.hpp"
#include "com/sun/star/text/WrapTextMode.hpp"
#include "com/sun/star/text/XAutoTextContainer.hpp"
#include "com/sun/star/text/XAutoTextEntry.hpp"
#include "com/sun/star/text/XAutoTextGroup.hpp"
#include "com/sun/star/text/XBookmarksSupplier.hpp"
#include "com/sun/star/text/XChapterNumberingSupplier.hpp"
#include "com/sun/star/text/XDefaultNumberingProvider.hpp"
#include "com/sun/star/text/XDependentTextField.hpp"
#include "com/sun/star/text/XDocumentIndex.hpp"
#include "com/sun/star/text/XDocumentIndexMark.hpp"
#include "com/sun/star/text/XDocumentIndexesSupplier.hpp"
#include "com/sun/star/text/XEndnotesSettingsSupplier.hpp"
#include "com/sun/star/text/XEndnotesSupplier.hpp"
#include "com/sun/star/text/XFootnote.hpp"
#include "com/sun/star/text/XFootnotesSettingsSupplier.hpp"
#include "com/sun/star/text/XFootnotesSupplier.hpp"
#include "com/sun/star/text/XLineNumberingProperties.hpp"
#include "com/sun/star/text/XMailMergeBroadcaster.hpp"
#include "com/sun/star/text/XMailMergeListener.hpp"
#include "com/sun/star/text/XModule.hpp"
#include "com/sun/star/text/XNumberingTypeInfo.hpp"
#include "com/sun/star/text/XPageCursor.hpp"
#include "com/sun/star/text/XPagePrintable.hpp"
#include "com/sun/star/text/XParagraphCursor.hpp"
#include "com/sun/star/text/XReferenceMarksSupplier.hpp"
#include "com/sun/star/text/XRelativeTextContentInsert.hpp"
#include "com/sun/star/text/XRelativeTextContentRemove.hpp"
#include "com/sun/star/text/XRubySelection.hpp"
#include "com/sun/star/text/XSentenceCursor.hpp"
#include "com/sun/star/text/XText.hpp"
#include "com/sun/star/text/XTextColumns.hpp"
#include "com/sun/star/text/XTextContent.hpp"
#include "com/sun/star/text/XTextCursor.hpp"
#include "com/sun/star/text/XTextDocument.hpp"
#include "com/sun/star/text/XTextEmbeddedObject.hpp"
#include "com/sun/star/text/XTextEmbeddedObjectsSupplier.hpp"
#include "com/sun/star/text/XTextField.hpp"
#include "com/sun/star/text/XTextFieldsSupplier.hpp"
#include "com/sun/star/text/XTextFrame.hpp"
#include "com/sun/star/text/XTextFramesSupplier.hpp"
#include "com/sun/star/text/XTextGraphicObjectsSupplier.hpp"
#include "com/sun/star/text/XTextRange.hpp"
#include "com/sun/star/text/XTextRangeCompare.hpp"
#include "com/sun/star/text/XTextSection.hpp"
#include "com/sun/star/text/XTextSectionsSupplier.hpp"
#include "com/sun/star/text/XTextTable.hpp"
#include "com/sun/star/text/XTextTableCursor.hpp"
#include "com/sun/star/text/XTextTablesSupplier.hpp"
#include "com/sun/star/text/XTextViewCursor.hpp"
#include "com/sun/star/text/XTextViewCursorSupplier.hpp"
#include "com/sun/star/text/XWordCursor.hpp"
#include "com/sun/star/ucb/CommandAbortedException.hpp"
#include "com/sun/star/ucb/InteractiveAppException.hpp"
#include "com/sun/star/ucb/TransferInfo.hpp"
#include "com/sun/star/ucb/XCommandEnvironment.hpp"
#include "com/sun/star/ucb/XContent.hpp"
#include "com/sun/star/ucb/XContentIdentifier.hpp"
#include "com/sun/star/ucb/XContentProvider.hpp"
#include "com/sun/star/ui/dialogs/CommonFilePickerElementIds.hpp"
#include "com/sun/star/ui/dialogs/ExecutableDialogResults.hpp"
#include "com/sun/star/ui/dialogs/ExtendedFilePickerElementIds.hpp"
#include "com/sun/star/ui/dialogs/ListboxControlActions.hpp"
#include "com/sun/star/ui/dialogs/TemplateDescription.hpp"
#include "com/sun/star/ui/dialogs/XExecutableDialog.hpp"
#include "com/sun/star/ui/dialogs/XFilePicker.hpp"
#include "com/sun/star/ui/dialogs/XFilePickerControlAccess.hpp"
#include "com/sun/star/ui/dialogs/XFilterManager.hpp"
#include "com/sun/star/ui/dialogs/XFolderPicker.hpp"
#include "com/sun/star/uno/Any.h"
#include "com/sun/star/uno/Any.hxx"
#include "com/sun/star/uno/Exception.hpp"
#include "com/sun/star/uno/Reference.h"
#include "com/sun/star/uno/Reference.hxx"
#include "com/sun/star/uno/RuntimeException.hpp"
#include "com/sun/star/uno/Sequence.h"
#include "com/sun/star/uno/Sequence.hxx"
#include "com/sun/star/uno/XCurrentContext.hpp"
#include "com/sun/star/uno/XNamingService.hpp"
#include "com/sun/star/uri/XUriReferenceFactory.hpp"
#include "com/sun/star/uri/XVndSunStarScriptUrl.hpp"
#include "com/sun/star/util/CloseVetoException.hpp"
#include "com/sun/star/util/Date.hpp"
#include "com/sun/star/util/DateTime.hpp"
#include "com/sun/star/util/DateTimeRange.hpp"
#include "com/sun/star/util/SearchFlags.hpp"
#include "com/sun/star/util/SearchOptions.hpp"
#include "com/sun/star/util/Time.hpp"
#include "com/sun/star/util/XArchiver.hpp"
#include "com/sun/star/util/XCloseable.hpp"
#include "com/sun/star/util/XLinkUpdate.hpp"
#include "com/sun/star/util/XModifiable.hpp"
#include "com/sun/star/util/XModifyBroadcaster.hpp"
#include "com/sun/star/util/XModifyListener.hpp"
#include "com/sun/star/util/XNumberFormatTypes.hpp"
#include "com/sun/star/util/XNumberFormatsSupplier.hpp"
#include "com/sun/star/util/XPropertyReplace.hpp"
#include "com/sun/star/util/XRefreshListener.hpp"
#include "com/sun/star/util/XRefreshable.hpp"
#include "com/sun/star/util/XReplaceDescriptor.hpp"
#include "com/sun/star/util/XReplaceable.hpp"
#include "com/sun/star/util/XSortable.hpp"
#include "com/sun/star/util/XURLTransformer.hpp"
#include "com/sun/star/util/XUpdatable.hpp"
#include "com/sun/star/view/DocumentZoomType.hpp"
#include "com/sun/star/view/XLineCursor.hpp"
#include "com/sun/star/view/XPrintSettingsSupplier.hpp"
#include "com/sun/star/view/XRenderable.hpp"
#include "com/sun/star/view/XScreenCursor.hpp"
#include "com/sun/star/view/XSelectionChangeListener.hpp"
#include "com/sun/star/view/XSelectionSupplier.hpp"
#include "com/sun/star/view/XViewCursor.hpp"
#include "com/sun/star/view/XViewSettingsSupplier.hpp"
#include "com/sun/star/xforms/XFormsSupplier.hpp"
#include "com/sun/star/xforms/XFormsUIHelper1.hpp"
#include "com/sun/star/xforms/XModel.hpp"
#include "com/sun/star/xml/sax/InputSource.hpp"
#include "com/sun/star/xml/sax/XAttributeList.hpp"
#include "com/sun/star/xml/sax/XDocumentHandler.hpp"
#include "com/sun/star/xml/sax/XParser.hpp"

#include "comphelper/ChainablePropertySet.hxx"
#include "comphelper/ChainablePropertySetInfo.hxx"
#include "comphelper/MasterPropertySet.hxx"
#include "comphelper/MasterPropertySetInfo.hxx"
#include "comphelper/SettingsHelper.hxx"
#include "comphelper/TypeGeneration.hxx"
#include "comphelper/accessibleeventnotifier.hxx"
#include "comphelper/accessiblekeybindinghelper.hxx"
#include "comphelper/classids.hxx"
#include "comphelper/embeddedobjectcontainer.hxx"
#include "comphelper/mediadescriptor.hxx"
#include "comphelper/processfactory.hxx"
#include "comphelper/seqstream.hxx"
#include "comphelper/storagehelper.hxx"
#include "comphelper/types.hxx"
#include "comphelper/uno3.hxx"


#include "cppuhelper/bootstrap.hxx"
#include "cppuhelper/compbase1.hxx"
#include "cppuhelper/factory.hxx"
#include "cppuhelper/implbase1.hxx"
#include "cppuhelper/implbase10.hxx"
#include "cppuhelper/implbase11.hxx"
#include "cppuhelper/implbase2.hxx"
#include "cppuhelper/implbase3.hxx"
#include "cppuhelper/implbase4.hxx"
#include "cppuhelper/implbase5.hxx"
#include "cppuhelper/implbase6.hxx"
#include "cppuhelper/implbase7.hxx"
#include "cppuhelper/implbase8.hxx"
#include "cppuhelper/implbase9.hxx"
#include "cppuhelper/implbase_ex.hxx"
#include "cppuhelper/implbase_ex_post.hxx"
#include "cppuhelper/implbase_ex_pre.hxx"
#include "cppuhelper/interfacecontainer.hxx"
#include "cppuhelper/weak.hxx"
#include "cppuhelper/weakref.hxx"

#include "framework/interaction.hxx"

#include "svtools/grfmgr.hxx"
#include "svl/mailenum.hxx"

#include "i18npool/lang.h"
#include "i18npool/mslangid.hxx"

#include "linguistic/lngprops.hxx"

#include "osl/conditn.hxx"
#include "osl/diagnose.h"
#include "osl/endian.h"
#include "osl/file.hxx"
#include "osl/interlck.h"
#include "osl/module.h"
#include "osl/module.hxx"
#include "osl/mutex.hxx"
#include "osl/thread.hxx"

#include "rsc/rscsfx.hxx"

#include "rtl/logfile.hxx"
#include "rtl/math.hxx"
#include "rtl/memory.h"
#include "rtl/string.h"
#include "rtl/string.hxx"
#include "rtl/tencinfo.h"
#include "rtl/textenc.h"
#include "rtl/ustrbuf.hxx"
#include "rtl/ustring.h"
#include "rtl/ustring.hxx"
#include "rtl/uuid.h"

#include "salhelper/condition.hxx"

#include "sfx2/app.hxx"
#include "sfx2/appuno.hxx"
#include "sfx2/basedlgs.hxx"
#include "sfx2/bindings.hxx"
#include "sfx2/childwin.hxx"
#include "sfx2/ctrlitem.hxx"
#include "sfx2/dinfdlg.hxx"
#include "sfx2/dispatch.hxx"
#include "sfx2/docfilt.hxx"
#include "sfx2/docinf.hxx"
#include "sfx2/dockwin.hxx"
#include "sfx2/doctempl.hxx"
#include "sfx2/event.hxx"
#include "sfx2/fcontnr.hxx"
#include "sfx2/filedlghelper.hxx"
#include "sfx2/frame.hxx"
#include "sfx2/frmdescr.hxx"
#include "sfx2/imagemgr.hxx"
#include "sfx2/imgmgr.hxx"
#include "sfx2/linkmgr.hxx"
#include "sfx2/linksrc.hxx"
#include "sfx2/lnkbase.hxx"
#include "sfx2/mieclip.hxx"
#include "sfx2/mnumgr.hxx"
#include "sfx2/module.hxx"
#include "sfx2/msg.hxx"
#include "sfx2/msgpool.hxx"
#include "sfx2/new.hxx"
#include "sfx2/newstyle.hxx"
#include "sfx2/objface.hxx"
#include "sfx2/objitem.hxx"
#include "sfx2/passwd.hxx"
#include "sfx2/printer.hxx"
#include "sfx2/prnmon.hxx"
#include "sfx2/progress.hxx"
#include "sfx2/request.hxx"
#include "sfx2/sfx.hrc"
#include "sfx2/sfxdefs.hxx"
#include "sfx2/sfxdlg.hxx"
#include "sfx2/sfxhelp.hxx"
#include "sfx2/sfxsids.hrc"
#include "sfx2/sfxuno.hxx"
#include "sfx2/shell.hxx"
#include "sfx2/styfitem.hxx"
#include "sfx2/styledlg.hxx"
#include "sfx2/tabdlg.hxx"
#include "sfx2/tbxctrl.hxx"
#include "sfx2/templdlg.hxx"
#include "sfx2/tplpitem.hxx"
#include "sfx2/viewfac.hxx"
#include "sfx2/viewfrm.hxx"
#include "sfx2/viewsh.hxx"

#include "sot/clsids.hxx"
#include "sot/exchange.hxx"
#include "sot/factory.hxx"
#include "sot/filelist.hxx"
#include "sot/formats.hxx"
#include "sot/stg.hxx"
#include "sot/storage.hxx"
#include "sot/storinfo.hxx"

#include "svtools/FilterConfigItem.hxx"
#include "svl/PasswordHelper.hxx"
#include "svtools/accessibilityoptions.hxx"
#include "svl/aeitem.hxx"
#include "svl/cjkoptions.hxx"
#include "unotools/cmdoptions.hxx"
#include "svl/cntnrsrt.hxx"
#include "svtools/collatorres.hxx"
#include "svtools/colorcfg.hxx"
#include "unotools/compatibility.hxx"
#include "svtools/controldims.hrc"
#include "svl/ctloptions.hxx"
#include "svtools/ctrlbox.hxx"
#include "svtools/ctrltool.hxx"
#include "svtools/editbrowsebox.hxx"
#include "svtools/ehdl.hxx"
#include "svl/eitem.hxx"
#include "svtools/embedhlp.hxx"
#include "svtools/embedtransfer.hxx"
#include "svtools/filter.hxx"
#include "svl/flagitem.hxx"
#include "unotools/fltrcfg.hxx"
#include "svl/fstathelper.hxx"
#include "svl/globalnameitem.hxx"
#include "svtools/headbar.hxx"
#include "svtools/htmlkywd.hxx"
#include "svtools/htmltokn.h"
#include "svl/imageitm.hxx"
#include "svtools/imap.hxx"
#include "svtools/indexentryres.hxx"
#include "svl/inethist.hxx"
#include "svtools/inetimg.hxx"
#include "svtools/insdlg.hxx"
#include "svl/intitem.hxx"
#include "svl/isethint.hxx"
#include "svl/itemiter.hxx"
#include "svl/itempool.hxx"
#include "svl/itemprop.hxx"
#include "svl/itemset.hxx"
#include "svl/languageoptions.hxx"
#include "svl/lckbitem.hxx"
#include "unotools/lingucfg.hxx"
#include "unotools/linguprops.hxx"
#include "svl/lstner.hxx"
#include "unotools/misccfg.hxx"
#include "unotools/moduleoptions.hxx"
#include "svl/numuno.hxx"
#include "svl/ownlist.hxx"
#include "svtools/parhtml.hxx"
#include "unotools/pathoptions.hxx"
#include "svl/poolitem.hxx"
#include "svtools/prgsbar.hxx"
#include "svtools/prnsetup.hxx"
#include "svl/ptitem.hxx"
#include "svl/rectitem.hxx"
#include "svtools/rtfkeywd.hxx"
#include "svtools/rtfout.hxx"
#include "svtools/rtftoken.h"
#include "svtools/ruler.hxx"
#include "unotools/saveopt.hxx"
#include "svtools/scriptedtext.hxx"
#include "svtools/sfxecode.hxx"
#include "svl/slstitm.hxx"
#include "svl/smplhint.hxx"
#include "svtools/soerr.hxx"
#include "svl/solar.hrc"
#include "unotools/sourceviewconfig.hxx"
#include "svtools/stdctrl.hxx"
#include "svl/stritem.hxx"
#include "svl/style.hrc"
#include "svl/style.hxx"
#include "svl/svarray.hxx"
#include "svtools/svmedit.hxx"
#include "svtools/svparser.hxx"
#include "svl/svstdarr.hxx"
#include "svtools/svtabbx.hxx"
#include "svtools/svtreebx.hxx"
#include "unotools/syslocale.hxx"
#include "svtools/templdlg.hxx"
#include "svtools/textview.hxx"
#include "svtools/transfer.hxx"
#include "svtools/txtattr.hxx"
#include "svtools/txtcmp.hxx"
#include "svl/undo.hxx"
#include "unotools/undoopt.hxx"
#include "svtools/unoevent.hxx"
#include "svtools/unoimap.hxx"
#include "svl/urihelper.hxx"
#include "svl/urlbmk.hxx"
#include "unotools/useroptions.hxx"
#include "svtools/valueset.hxx"
#include "svl/visitem.hxx"
#include "svl/whiter.hxx"
#include "svtools/xtextedt.hxx"

#include "svx/IAccessibleParent.hxx"
#include "svx/IAccessibleViewForwarder.hxx"
#include "svx/SpellDialogChildWindow.hxx"
#include "editeng/SpellPortions.hxx"
#include "editeng/UnoForbiddenCharsTable.hxx"
#include "editeng/acorrcfg.hxx"
#include "svx/anchorid.hxx"
#include "svl/asiancfg.hxx"
#include "svx/checklbx.hxx"
#include "svx/clipboardctl.hxx"
#include "svx/clipfmtitem.hxx"
#include "svx/contdlg.hxx"
#include "svx/ctredlin.hxx"
#include "svx/dataaccessdescriptor.hxx"
#include "svx/dialmgr.hxx"
#include "svx/dialogs.hrc"
#include "svx/dlgutil.hxx"
#include "editeng/editdata.hxx"
#include "editeng/editeng.hxx"
#include "editeng/editobj.hxx"
#include "editeng/editstat.hxx"
#include "editeng/editview.hxx"
#include "editeng/eeitem.hxx"
#include "filter/msfilter/escherex.hxx"
#include "svx/extrusionbar.hxx"
#include "svx/extrusioncolorcontrol.hxx"
#include "svx/fillctrl.hxx"
#include "svx/flagsdef.hxx"
#include "editeng/flstitem.hxx"
#include "svx/fmdmod.hxx"
#include "svx/fmglob.hxx"
#include "svx/fmobjfac.hxx"
#include "svx/fmpage.hxx"
#include "svx/fntctrl.hxx"
#include "svx/fontwork.hxx"
#include "svx/fontworkbar.hxx"
#include "svx/fontworkgallery.hxx"
#include "editeng/forbiddencharacterstable.hxx"
#include "svx/formatpaintbrushctrl.hxx"
#include "editeng/frmdir.hxx"
#include "svx/galbrws.hxx"
#include "svx/gallery.hxx"
#include "svx/globlmn.hrc"
#include "svx/grafctrl.hxx"
#include "editeng/hangulhanja.hxx"
#include "svx/hdft.hxx"
#include "svtools/htmlcfg.hxx"
#include "svx/htmlmode.hxx"
#include "svx/hyperdlg.hxx"
#include "svx/hyprlink.hxx"
#include "svx/imapdlg.hxx"
#include "editeng/itemtype.hxx"
#include "svx/langbox.hxx"
#include "svx/layctrl.hxx"
#include "svx/lboxctrl.hxx"
#include "svx/linectrl.hxx"
#include "sfx2/linkmgr.hxx"
#include "filter/msfilter/mscodec.hxx"
#include "filter/msfilter/msdffimp.hxx"
#include "filter/msfilter/msfiltertracer.hxx"
#include "filter/msfilter/msocximex.hxx"
#include "filter/msfilter/msoleexp.hxx"
#include "editeng/numitem.hxx"
#include "svx/numvset.hxx"
#include "svx/objfac3d.hxx"
#include "svx/ofaitem.hxx"
#include "svx/optgenrl.hxx"
#include "svx/optgrid.hxx"
#include "editeng/outliner.hxx"
#include "editeng/outlobj.hxx"
#include "svx/pagectrl.hxx"
#include "editeng/paperinf.hxx"
#include "svx/paraprev.hxx"
#include "svx/pfiledlg.hxx"
#include "svx/prtqry.hxx"
#include "svx/rectenum.hxx"
#include "svx/rotmodit.hxx"
#include "svx/rubydialog.hxx"
#include "svx/ruler.hxx"
#include "svx/rulritem.hxx"
#include "editeng/scripttypeitem.hxx"
#include "svx/sdgcoitm.hxx"
#include "svx/sdggaitm.hxx"
#include "svx/sdginitm.hxx"
#include "svx/sdgluitm.hxx"
#include "svx/sdgmoitm.hxx"
#include "svx/sdgtritm.hxx"
#include "svx/sdr/contact/displayinfo.hxx"
#include "svx/sdr/contact/objectcontactofobjlistpainter.hxx"
#include "svx/sdr/contact/viewcontactofsdrmediaobj.hxx"
#include "svx/sdr/properties/defaultproperties.hxx"
#include "svx/sdtaaitm.hxx"
#include "svx/sdtacitm.hxx"
#include "svx/sdtaditm.hxx"
#include "svx/sdtagitm.hxx"
#include "svx/sdtaitm.hxx"
#include "svx/sdtakitm.hxx"
#include "svx/simptabl.hxx"
#include "editeng/splwrap.hxx"
#include "svx/srchdlg.hxx"
#include "svx/stddlg.hxx"
#include "svx/strarray.hxx"
#include "svx/xflasit.hxx"
#include "svx/xflclit.hxx"
#include "svx/xflgrit.hxx"
#include "svx/xflhtit.hxx"
#include "svx/xfltrit.hxx"
#include "svx/xftadit.hxx"
#include "svx/xftdiit.hxx"
#include "svx/xftmrit.hxx"
#include "svx/xftouit.hxx"
#include "svx/xftsfit.hxx"
#include "svx/xftshcit.hxx"
#include "svx/xftshit.hxx"
#include "svx/xftshxy.hxx"
#include "svx/xftstit.hxx"
#include "svx/xgrad.hxx"
#include "svx/xlineit.hxx"
#include "svx/xlineit0.hxx"
#include "svx/xlnclit.hxx"
#include "svx/xlndsit.hxx"
#include "svx/xlnedit.hxx"
#include "svx/xlnstit.hxx"
#include "svx/xlnwtit.hxx"
#include "svx/xmleohlp.hxx"
#include "svx/xmlexchg.hxx"
#include "svx/xmlgrhlp.hxx"
#include "svx/xoutbmp.hxx"
#include "svx/xpoly.hxx"
#include "svx/xtable.hxx"
#include "svx/xtextit0.hxx"
#include "svx/zoomitem.hxx"

#include "sys/stat.h"
#include "sys/types.h"

#include "toolkit/helper/vclunohelper.hxx"
#include "toolkit/unohlp.hxx"

#include "tools/bigint.hxx"
#include "tools/cachestr.hxx"
#include "tools/color.hxx"
#include "tools/date.hxx"
#include "tools/datetime.hxx"
#include "tools/debug.hxx"
#include "tools/errcode.hxx"
#include "tools/errinf.hxx"
#include "tools/fract.hxx"
#include "tools/gen.hxx"
#include "tools/globname.hxx"
#include "tools/link.hxx"
#include "tools/list.hxx"
#include "tools/mempool.hxx"
#include "tools/multisel.hxx"
#include "tools/poly.hxx"
#include "tools/pstm.hxx"
#include "tools/rc.hxx"
#include "tools/ref.hxx"
#include "tools/resary.hxx"
#include "tools/resid.hxx"
#include "tools/resmgr.hxx"
#include "tools/rtti.hxx"
#include "tools/shl.hxx"
#include "tools/solar.h"
#include "tools/stream.hxx"
#include "tools/string.hxx"
#include "tools/table.hxx"
#include "tools/tempfile.hxx"
#include "tools/time.hxx"
#include "tools/urlobj.hxx"

#include "ucbhelper/commandenvironment.hxx"
#include "ucbhelper/content.hxx"
#include "ucbhelper/contentbroker.hxx"
#include "ucbhelper/contentidentifier.hxx"

#include "unicode/ubidi.h"

#include "uno/lbnames.h"

#include "unotools/accessiblerelationsethelper.hxx"
#include "unotools/accessiblestatesethelper.hxx"
#include "unotools/calendarwrapper.hxx"
#include "unotools/charclass.hxx"
#include "unotools/collatorwrapper.hxx"
#include "unotools/configitem.hxx"
#include "unotools/configmgr.hxx"
#include "unotools/confignode.hxx"
#include "unotools/configpathes.hxx"
#include "unotools/intlwrapper.hxx"
#include "unotools/localedatawrapper.hxx"
#include "unotools/localfilehelper.hxx"
#include "unotools/processfactory.hxx"
#include "unotools/streamwrap.hxx"
#include "unotools/tempfile.hxx"
#include "unotools/transliterationwrapper.hxx"
#include "unotools/ucbstreamhelper.hxx"

#include "vcl/bitmap.hxx"
#include "vcl/button.hxx"
#include "vcl/cmdevt.h"
#include "vcl/cmdevt.hxx"
#include "vcl/combobox.hxx"
#include "vcl/cursor.hxx"
#include "vcl/cvtgrf.hxx"
#include "vcl/dialog.hxx"
#include "vcl/edit.hxx"
#include "vcl/event.hxx"
#include "vcl/field.hxx"
#include "vcl/fixed.hxx"
#include "tools/fldunit.hxx"
#include "vcl/font.hxx"
#include "unotools/fontcvt.hxx"
#include "vcl/graph.hxx"
#include "vcl/group.hxx"
#include "vcl/help.hxx"
#include "vcl/image.hxx"
#include "vcl/button.hxx"
#include "vcl/inputctx.hxx"
#include "vcl/jobset.hxx"
#include "vcl/keycod.hxx"
#include "vcl/keycodes.hxx"
#include "vcl/lstbox.hxx"
#include "vcl/mapmod.hxx"
#include "vcl/menu.hxx"
#include "vcl/menubtn.hxx"
#include "vcl/metric.hxx"
#include "vcl/mnemonic.hxx"
#include "vcl/morebtn.hxx"
#include "vcl/msgbox.hxx"
#include "vcl/outdev.hxx"
#include "vcl/pdfextoutdevdata.hxx"
#include "vcl/print.hxx"
#include "vcl/region.hxx"
#include "vcl/salbtype.hxx"
#include "vcl/scrbar.hxx"
#include "vcl/settings.hxx"
#include "vcl/sound.hxx"
#include "vcl/status.hxx"
#include "vcl/svapp.hxx"
#include "vcl/syswin.hxx"
#include "vcl/timer.hxx"
#include "vcl/toolbox.hxx"
#include "vcl/vclenum.hxx"
#include "vcl/virdev.hxx"
#include "vcl/waitobj.hxx"
#include "vcl/window.hxx"
#include "tools/wintypes.hxx"
#include "vcl/wrkwin.hxx"

#include "vos/mutex.hxx"
#include "vos/ref.hxx"

#include "xmloff/DocumentSettingsContext.hxx"
#include "xmloff/ProgressBarHelper.hxx"
#include "xmloff/XMLBase64ImportContext.hxx"
#include "xmloff/XMLFilterServiceNames.h"
#include "xmloff/XMLFontAutoStylePool.hxx"
#include "xmloff/XMLFontStylesContext.hxx"
#include "xmloff/XMLGraphicsDefaultStyle.hxx"
#include "xmloff/XMLTextListAutoStylePool.hxx"
#include "xmloff/XMLTextMasterPageExport.hxx"
#include "xmloff/XMLTextMasterStylesContext.hxx"
#include "xmloff/XMLTextShapeImportHelper.hxx"
#include "xmloff/XMLTextShapeStyleContext.hxx"
#include "xmloff/XMLTextTableContext.hxx"
#include "xmloff/attrlist.hxx"
#include "xmloff/families.hxx"
#include "xmloff/functional.hxx"
#include "xmloff/i18nmap.hxx"
#include "xmloff/maptype.hxx"
#include "xmloff/nmspmap.hxx"
#include "xmloff/numehelp.hxx"
#include "xmloff/prhdlfac.hxx"
#include "xmloff/prstylei.hxx"
#include "xmloff/txtparae.hxx"
#include "xmloff/txtprmap.hxx"
#include "xmloff/txtstyli.hxx"
#include "xmloff/uniref.hxx"
#include "xmloff/xformsimport.hxx"
#include "xmloff/xmlaustp.hxx"
#include "xmloff/xmlement.hxx"
#include "xmloff/xmlexp.hxx"
#include "xmloff/xmlictxt.hxx"
#include "xmloff/xmlmetae.hxx"
#include "xmloff/xmlmetai.hxx"
#include "xmloff/xmlnmspe.hxx"
#include "xmloff/xmlprmap.hxx"
#include "xmloff/xmlscripti.hxx"
#include "xmloff/xmlstyle.hxx"
#include "xmloff/xmltabe.hxx"
#include "xmloff/xmltkmap.hxx"
#include "xmloff/xmltoken.hxx"
#include "xmloff/xmltypes.hxx"
#include "xmloff/xmluconv.hxx"
//---MARKER---

#endif
