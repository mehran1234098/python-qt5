/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:05 2014
 *
 * Copyright (c) 2014 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtPrintSupport.h"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtPrintSupport/qprinterinfo.sip"
#include <qprinterinfo.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtPrintSupport/qprinter.sip"
#include <qprinter.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 34 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 629 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 34 "sip/QtGui/qpagesize.sip"
#include <qpagesize.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 252 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#include <qpair.h>
#line 55 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 101 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 58 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtPrintSupport/qpyprintsupport_qlist.sip"
#include <qprinterinfo.h>
#line 61 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"
#line 26 "sip/QtGui/qpagedpaintdevice.sip"
#include <qpagedpaintdevice.h>
#line 64 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtPrintSupport/sipQtPrintSupportQPrinterInfo.cpp"


PyDoc_STRVAR(doc_QPrinterInfo_printerName, "QPrinterInfo.printerName() -> str");

extern "C" {static PyObject *meth_QPrinterInfo_printerName(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_printerName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->printerName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_printerName, doc_QPrinterInfo_printerName);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_isNull, "QPrinterInfo.isNull() -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_isNull(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_isNull, doc_QPrinterInfo_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_isDefault, "QPrinterInfo.isDefault() -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_isDefault(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_isDefault(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isDefault();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_isDefault, doc_QPrinterInfo_isDefault);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedPaperSizes, "QPrinterInfo.supportedPaperSizes() -> list-of-QPagedPaintDevice.PageSize");

extern "C" {static PyObject *meth_QPrinterInfo_supportedPaperSizes(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedPaperSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QList<QPagedPaintDevice::PageSize>*sipRes;

            sipRes = new QList<QPagedPaintDevice::PageSize>(sipCpp->supportedPaperSizes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPagedPaintDevice_PageSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedPaperSizes, doc_QPrinterInfo_supportedPaperSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedSizesWithNames, "QPrinterInfo.supportedSizesWithNames() -> list-of-tuple-of-QString-QSizeF");

extern "C" {static PyObject *meth_QPrinterInfo_supportedSizesWithNames(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedSizesWithNames(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QList<QPair<QString,QSizeF> >*sipRes;

            sipRes = new QList<QPair<QString,QSizeF> >(sipCpp->supportedSizesWithNames());

            return sipConvertFromNewType(sipRes,sipType_QList_0600QPair_0100QString_0100QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedSizesWithNames, doc_QPrinterInfo_supportedSizesWithNames);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_availablePrinters, "QPrinterInfo.availablePrinters() -> list-of-QPrinterInfo");

extern "C" {static PyObject *meth_QPrinterInfo_availablePrinters(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_availablePrinters(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QList<QPrinterInfo>*sipRes;

            sipRes = new QList<QPrinterInfo>(QPrinterInfo::availablePrinters());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPrinterInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_availablePrinters, doc_QPrinterInfo_availablePrinters);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_defaultPrinter, "QPrinterInfo.defaultPrinter() -> QPrinterInfo");

extern "C" {static PyObject *meth_QPrinterInfo_defaultPrinter(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_defaultPrinter(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QPrinterInfo*sipRes;

            sipRes = new QPrinterInfo(QPrinterInfo::defaultPrinter());

            return sipConvertFromNewType(sipRes,sipType_QPrinterInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_defaultPrinter, doc_QPrinterInfo_defaultPrinter);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_description, "QPrinterInfo.description() -> str");

extern "C" {static PyObject *meth_QPrinterInfo_description(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->description());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_description, doc_QPrinterInfo_description);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_location, "QPrinterInfo.location() -> str");

extern "C" {static PyObject *meth_QPrinterInfo_location(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_location(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->location());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_location, doc_QPrinterInfo_location);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_makeAndModel, "QPrinterInfo.makeAndModel() -> str");

extern "C" {static PyObject *meth_QPrinterInfo_makeAndModel(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_makeAndModel(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->makeAndModel());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_makeAndModel, doc_QPrinterInfo_makeAndModel);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_printerInfo, "QPrinterInfo.printerInfo(str) -> QPrinterInfo");

extern "C" {static PyObject *meth_QPrinterInfo_printerInfo(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_printerInfo(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            QPrinterInfo*sipRes;

            sipRes = new QPrinterInfo(QPrinterInfo::printerInfo(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QPrinterInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_printerInfo, doc_QPrinterInfo_printerInfo);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_isRemote, "QPrinterInfo.isRemote() -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_isRemote(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_isRemote(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isRemote();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_isRemote, doc_QPrinterInfo_isRemote);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_state, "QPrinterInfo.state() -> QPrinter.PrinterState");

extern "C" {static PyObject *meth_QPrinterInfo_state(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_state(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QPrinter::PrinterState sipRes;

            sipRes = sipCpp->state();

            return sipConvertFromEnum(sipRes,sipType_QPrinter_PrinterState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_state, doc_QPrinterInfo_state);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedPageSizes, "QPrinterInfo.supportedPageSizes() -> list-of-QPageSize");

extern "C" {static PyObject *meth_QPrinterInfo_supportedPageSizes(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedPageSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QList<QPageSize>*sipRes;

            sipRes = new QList<QPageSize>(sipCpp->supportedPageSizes());

            return sipConvertFromNewType(sipRes,sipType_QList_0100QPageSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedPageSizes, doc_QPrinterInfo_supportedPageSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_defaultPageSize, "QPrinterInfo.defaultPageSize() -> QPageSize");

extern "C" {static PyObject *meth_QPrinterInfo_defaultPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_defaultPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QPageSize*sipRes;

            sipRes = new QPageSize(sipCpp->defaultPageSize());

            return sipConvertFromNewType(sipRes,sipType_QPageSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_defaultPageSize, doc_QPrinterInfo_defaultPageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportsCustomPageSizes, "QPrinterInfo.supportsCustomPageSizes() -> bool");

extern "C" {static PyObject *meth_QPrinterInfo_supportsCustomPageSizes(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportsCustomPageSizes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->supportsCustomPageSizes();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportsCustomPageSizes, doc_QPrinterInfo_supportsCustomPageSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_minimumPhysicalPageSize, "QPrinterInfo.minimumPhysicalPageSize() -> QPageSize");

extern "C" {static PyObject *meth_QPrinterInfo_minimumPhysicalPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_minimumPhysicalPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QPageSize*sipRes;

            sipRes = new QPageSize(sipCpp->minimumPhysicalPageSize());

            return sipConvertFromNewType(sipRes,sipType_QPageSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_minimumPhysicalPageSize, doc_QPrinterInfo_minimumPhysicalPageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_maximumPhysicalPageSize, "QPrinterInfo.maximumPhysicalPageSize() -> QPageSize");

extern "C" {static PyObject *meth_QPrinterInfo_maximumPhysicalPageSize(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_maximumPhysicalPageSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QPageSize*sipRes;

            sipRes = new QPageSize(sipCpp->maximumPhysicalPageSize());

            return sipConvertFromNewType(sipRes,sipType_QPageSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_maximumPhysicalPageSize, doc_QPrinterInfo_maximumPhysicalPageSize);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_supportedResolutions, "QPrinterInfo.supportedResolutions() -> list-of-int");

extern "C" {static PyObject *meth_QPrinterInfo_supportedResolutions(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_supportedResolutions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPrinterInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPrinterInfo, &sipCpp))
        {
            QList<int>*sipRes;

            sipRes = new QList<int>(sipCpp->supportedResolutions());

            return sipConvertFromNewType(sipRes,sipType_QList_1800,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_supportedResolutions, doc_QPrinterInfo_supportedResolutions);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_availablePrinterNames, "QPrinterInfo.availablePrinterNames() -> list-of-str");

extern "C" {static PyObject *meth_QPrinterInfo_availablePrinterNames(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_availablePrinterNames(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QStringList*sipRes;

            sipRes = new QStringList(QPrinterInfo::availablePrinterNames());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_availablePrinterNames, doc_QPrinterInfo_availablePrinterNames);

    return NULL;
}


PyDoc_STRVAR(doc_QPrinterInfo_defaultPrinterName, "QPrinterInfo.defaultPrinterName() -> str");

extern "C" {static PyObject *meth_QPrinterInfo_defaultPrinterName(PyObject *, PyObject *);}
static PyObject *meth_QPrinterInfo_defaultPrinterName(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QString*sipRes;

            sipRes = new QString(QPrinterInfo::defaultPrinterName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPrinterInfo, sipName_defaultPrinterName, doc_QPrinterInfo_defaultPrinterName);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPrinterInfo(void *, const sipTypeDef *);}
static void *cast_QPrinterInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QPrinterInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPrinterInfo(void *, int);}
static void release_QPrinterInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QPrinterInfo *>(sipCppV);
}


extern "C" {static void assign_QPrinterInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QPrinterInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPrinterInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPrinterInfo *>(sipSrc);
}


extern "C" {static void *array_QPrinterInfo(SIP_SSIZE_T);}
static void *array_QPrinterInfo(SIP_SSIZE_T sipNrElem)
{
    return new QPrinterInfo[sipNrElem];
}


extern "C" {static void *copy_QPrinterInfo(const void *, SIP_SSIZE_T);}
static void *copy_QPrinterInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPrinterInfo(reinterpret_cast<const QPrinterInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QPrinterInfo(sipSimpleWrapper *);}
static void dealloc_QPrinterInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QPrinterInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QPrinterInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPrinterInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QPrinterInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QPrinterInfo();

            return sipCpp;
        }
    }

    {
        const QPrinterInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPrinterInfo, &a0))
        {
            sipCpp = new QPrinterInfo(*a0);

            return sipCpp;
        }
    }

    {
        const QPrinter* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QPrinter, &a0))
        {
            sipCpp = new QPrinterInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QPrinterInfo[] = {
    {SIP_MLNAME_CAST(sipName_availablePrinterNames), meth_QPrinterInfo_availablePrinterNames, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_availablePrinterNames)},
    {SIP_MLNAME_CAST(sipName_availablePrinters), meth_QPrinterInfo_availablePrinters, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_availablePrinters)},
    {SIP_MLNAME_CAST(sipName_defaultPageSize), meth_QPrinterInfo_defaultPageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_defaultPageSize)},
    {SIP_MLNAME_CAST(sipName_defaultPrinter), meth_QPrinterInfo_defaultPrinter, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_defaultPrinter)},
    {SIP_MLNAME_CAST(sipName_defaultPrinterName), meth_QPrinterInfo_defaultPrinterName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_defaultPrinterName)},
    {SIP_MLNAME_CAST(sipName_description), meth_QPrinterInfo_description, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_description)},
    {SIP_MLNAME_CAST(sipName_isDefault), meth_QPrinterInfo_isDefault, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_isDefault)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QPrinterInfo_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_isNull)},
    {SIP_MLNAME_CAST(sipName_isRemote), meth_QPrinterInfo_isRemote, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_isRemote)},
    {SIP_MLNAME_CAST(sipName_location), meth_QPrinterInfo_location, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_location)},
    {SIP_MLNAME_CAST(sipName_makeAndModel), meth_QPrinterInfo_makeAndModel, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_makeAndModel)},
    {SIP_MLNAME_CAST(sipName_maximumPhysicalPageSize), meth_QPrinterInfo_maximumPhysicalPageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_maximumPhysicalPageSize)},
    {SIP_MLNAME_CAST(sipName_minimumPhysicalPageSize), meth_QPrinterInfo_minimumPhysicalPageSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_minimumPhysicalPageSize)},
    {SIP_MLNAME_CAST(sipName_printerInfo), meth_QPrinterInfo_printerInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_printerInfo)},
    {SIP_MLNAME_CAST(sipName_printerName), meth_QPrinterInfo_printerName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_printerName)},
    {SIP_MLNAME_CAST(sipName_state), meth_QPrinterInfo_state, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_state)},
    {SIP_MLNAME_CAST(sipName_supportedPageSizes), meth_QPrinterInfo_supportedPageSizes, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_supportedPageSizes)},
    {SIP_MLNAME_CAST(sipName_supportedPaperSizes), meth_QPrinterInfo_supportedPaperSizes, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_supportedPaperSizes)},
    {SIP_MLNAME_CAST(sipName_supportedResolutions), meth_QPrinterInfo_supportedResolutions, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_supportedResolutions)},
    {SIP_MLNAME_CAST(sipName_supportedSizesWithNames), meth_QPrinterInfo_supportedSizesWithNames, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_supportedSizesWithNames)},
    {SIP_MLNAME_CAST(sipName_supportsCustomPageSizes), meth_QPrinterInfo_supportsCustomPageSizes, METH_VARARGS, SIP_MLDOC_CAST(doc_QPrinterInfo_supportsCustomPageSizes)}
};

PyDoc_STRVAR(doc_QPrinterInfo, "\1QPrinterInfo()\n"
    "QPrinterInfo(QPrinterInfo)\n"
    "QPrinterInfo(QPrinter)");


pyqt5ClassTypeDef sipTypeDef_QtPrintSupport_QPrinterInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPrinterInfo,
        {0}
    },
    {
        sipNameNr_QPrinterInfo,
        {0, 0, 1},
        21, methods_QPrinterInfo,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPrinterInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QPrinterInfo,
    0,
    0,
#if PY_MAJOR_VERSION >= 3
    0,
    0,
#else
    0,
    0,
    0,
    0,
#endif
    dealloc_QPrinterInfo,
    assign_QPrinterInfo,
    array_QPrinterInfo,
    copy_QPrinterInfo,
    release_QPrinterInfo,
    cast_QPrinterInfo,
    0,
    0,
    0,
    0,
    0,
    0
},
    0,
    0,
    0,
    0
};
