/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:49 2014
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

#include "sipAPIQtBluetooth.h"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtBluetooth/qbluetoothdeviceinfo.sip"
#include <qbluetoothdeviceinfo.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtBluetooth/sipQtBluetoothQBluetoothDeviceInfo.cpp"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtBluetooth/qbluetoothaddress.sip"
#include <qbluetoothaddress.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtBluetooth/sipQtBluetoothQBluetoothDeviceInfo.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtBluetooth/sipQtBluetoothQBluetoothDeviceInfo.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtBluetooth/sipQtBluetoothQBluetoothDeviceInfo.cpp"
#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtBluetooth/qbluetoothuuid.sip"
#include <qbluetoothuuid.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtBluetooth/sipQtBluetoothQBluetoothDeviceInfo.cpp"
#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtBluetooth/qbluetoothdeviceinfo.sip"
#include <qbluetoothdeviceinfo.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtBluetooth/sipQtBluetoothQBluetoothDeviceInfo.cpp"


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_isValid, "QBluetoothDeviceInfo.isValid() -> bool");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_isValid(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_isValid, doc_QBluetoothDeviceInfo_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_isCached, "QBluetoothDeviceInfo.isCached() -> bool");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_isCached(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_isCached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isCached();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_isCached, doc_QBluetoothDeviceInfo_isCached);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_setCached, "QBluetoothDeviceInfo.setCached(bool)");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_setCached(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_setCached(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp, &a0))
        {
            sipCpp->setCached(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_setCached, doc_QBluetoothDeviceInfo_setCached);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_address, "QBluetoothDeviceInfo.address() -> QBluetoothAddress");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_address(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_address(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            QBluetoothAddress*sipRes;

            sipRes = new QBluetoothAddress(sipCpp->address());

            return sipConvertFromNewType(sipRes,sipType_QBluetoothAddress,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_address, doc_QBluetoothDeviceInfo_address);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_name, "QBluetoothDeviceInfo.name() -> str");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_name(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_name(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->name());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_name, doc_QBluetoothDeviceInfo_name);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_serviceClasses, "QBluetoothDeviceInfo.serviceClasses() -> QBluetoothDeviceInfo.ServiceClasses");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_serviceClasses(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_serviceClasses(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            QBluetoothDeviceInfo::ServiceClasses*sipRes;

            sipRes = new QBluetoothDeviceInfo::ServiceClasses(sipCpp->serviceClasses());

            return sipConvertFromNewType(sipRes,sipType_QBluetoothDeviceInfo_ServiceClasses,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_serviceClasses, doc_QBluetoothDeviceInfo_serviceClasses);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_majorDeviceClass, "QBluetoothDeviceInfo.majorDeviceClass() -> QBluetoothDeviceInfo.MajorDeviceClass");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_majorDeviceClass(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_majorDeviceClass(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            QBluetoothDeviceInfo::MajorDeviceClass sipRes;

            sipRes = sipCpp->majorDeviceClass();

            return sipConvertFromEnum(sipRes,sipType_QBluetoothDeviceInfo_MajorDeviceClass);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_majorDeviceClass, doc_QBluetoothDeviceInfo_majorDeviceClass);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_minorDeviceClass, "QBluetoothDeviceInfo.minorDeviceClass() -> int");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_minorDeviceClass(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_minorDeviceClass(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            quint8 sipRes;

            sipRes = sipCpp->minorDeviceClass();

#if PY_MAJOR_VERSION >= 3
            return PyLong_FromUnsignedLong(sipRes);
#else
            return PyInt_FromLong(sipRes);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_minorDeviceClass, doc_QBluetoothDeviceInfo_minorDeviceClass);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_rssi, "QBluetoothDeviceInfo.rssi() -> int");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_rssi(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_rssi(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            qint16 sipRes;

            sipRes = sipCpp->rssi();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_rssi, doc_QBluetoothDeviceInfo_rssi);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_setRssi, "QBluetoothDeviceInfo.setRssi(int)");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_setRssi(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_setRssi(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint16 a0;
        QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bh", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp, &a0))
        {
            sipCpp->setRssi(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_setRssi, doc_QBluetoothDeviceInfo_setRssi);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_setServiceUuids, "QBluetoothDeviceInfo.setServiceUuids(list-of-QBluetoothUuid, QBluetoothDeviceInfo.DataCompleteness)");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_setServiceUuids(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_setServiceUuids(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QList<QBluetoothUuid>* a0;
        int a0State = 0;
        QBluetoothDeviceInfo::DataCompleteness a1;
        QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1E", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp, sipType_QList_0100QBluetoothUuid,&a0, &a0State, sipType_QBluetoothDeviceInfo_DataCompleteness, &a1))
        {
            sipCpp->setServiceUuids(*a0,a1);
            sipReleaseType(const_cast<QList<QBluetoothUuid> *>(a0),sipType_QList_0100QBluetoothUuid,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_setServiceUuids, doc_QBluetoothDeviceInfo_setServiceUuids);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_serviceUuids, "QBluetoothDeviceInfo.serviceUuids() -> (list-of-QBluetoothUuid, QBluetoothDeviceInfo.DataCompleteness)");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_serviceUuids(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_serviceUuids(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QBluetoothDeviceInfo::DataCompleteness a0;
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            QList<QBluetoothUuid>*sipRes;

            sipRes = new QList<QBluetoothUuid>(sipCpp->serviceUuids(&a0));

            PyObject *sipResObj = sipConvertFromNewType(sipRes,sipType_QList_0100QBluetoothUuid,NULL);
            return sipBuildResult(0,"(RF)",sipResObj,a0,sipType_QBluetoothDeviceInfo_DataCompleteness);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_serviceUuids, doc_QBluetoothDeviceInfo_serviceUuids);

    return NULL;
}


PyDoc_STRVAR(doc_QBluetoothDeviceInfo_serviceUuidsCompleteness, "QBluetoothDeviceInfo.serviceUuidsCompleteness() -> QBluetoothDeviceInfo.DataCompleteness");

extern "C" {static PyObject *meth_QBluetoothDeviceInfo_serviceUuidsCompleteness(PyObject *, PyObject *);}
static PyObject *meth_QBluetoothDeviceInfo_serviceUuidsCompleteness(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBluetoothDeviceInfo, &sipCpp))
        {
            QBluetoothDeviceInfo::DataCompleteness sipRes;

            sipRes = sipCpp->serviceUuidsCompleteness();

            return sipConvertFromEnum(sipRes,sipType_QBluetoothDeviceInfo_DataCompleteness);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBluetoothDeviceInfo, sipName_serviceUuidsCompleteness, doc_QBluetoothDeviceInfo_serviceUuidsCompleteness);

    return NULL;
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo___ne__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothDeviceInfo *sipCpp = reinterpret_cast<QBluetoothDeviceInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBluetoothDeviceInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QBluetoothDeviceInfo::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,ne_slot,sipType_QBluetoothDeviceInfo,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QBluetoothDeviceInfo___eq__(PyObject *,PyObject *);}
static PyObject *slot_QBluetoothDeviceInfo___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QBluetoothDeviceInfo *sipCpp = reinterpret_cast<QBluetoothDeviceInfo *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QBluetoothDeviceInfo));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QBluetoothDeviceInfo* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QBluetoothDeviceInfo, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QBluetoothDeviceInfo::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtBluetooth,eq_slot,sipType_QBluetoothDeviceInfo,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBluetoothDeviceInfo(void *, const sipTypeDef *);}
static void *cast_QBluetoothDeviceInfo(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QBluetoothDeviceInfo)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBluetoothDeviceInfo(void *, int);}
static void release_QBluetoothDeviceInfo(void *sipCppV,int)
{
    delete reinterpret_cast<QBluetoothDeviceInfo *>(sipCppV);
}


extern "C" {static void assign_QBluetoothDeviceInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QBluetoothDeviceInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBluetoothDeviceInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBluetoothDeviceInfo *>(sipSrc);
}


extern "C" {static void *array_QBluetoothDeviceInfo(SIP_SSIZE_T);}
static void *array_QBluetoothDeviceInfo(SIP_SSIZE_T sipNrElem)
{
    return new QBluetoothDeviceInfo[sipNrElem];
}


extern "C" {static void *copy_QBluetoothDeviceInfo(const void *, SIP_SSIZE_T);}
static void *copy_QBluetoothDeviceInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBluetoothDeviceInfo(reinterpret_cast<const QBluetoothDeviceInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBluetoothDeviceInfo(sipSimpleWrapper *);}
static void dealloc_QBluetoothDeviceInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBluetoothDeviceInfo(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QBluetoothDeviceInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBluetoothDeviceInfo(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBluetoothDeviceInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QBluetoothDeviceInfo();

            return sipCpp;
        }
    }

    {
        const QBluetoothAddress* a0;
        const QString* a1;
        int a1State = 0;
        quint32 a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9J1u", sipType_QBluetoothAddress, &a0, sipType_QString,&a1, &a1State, &a2))
        {
            sipCpp = new QBluetoothDeviceInfo(*a0,*a1,a2);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);

            return sipCpp;
        }
    }

    {
        const QBluetoothDeviceInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QBluetoothDeviceInfo, &a0))
        {
            sipCpp = new QBluetoothDeviceInfo(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QBluetoothDeviceInfo[] = {
    {(void *)slot_QBluetoothDeviceInfo___ne__, ne_slot},
    {(void *)slot_QBluetoothDeviceInfo___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QBluetoothDeviceInfo[] = {
    {SIP_MLNAME_CAST(sipName_address), meth_QBluetoothDeviceInfo_address, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_address)},
    {SIP_MLNAME_CAST(sipName_isCached), meth_QBluetoothDeviceInfo_isCached, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_isCached)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QBluetoothDeviceInfo_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_isValid)},
    {SIP_MLNAME_CAST(sipName_majorDeviceClass), meth_QBluetoothDeviceInfo_majorDeviceClass, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_majorDeviceClass)},
    {SIP_MLNAME_CAST(sipName_minorDeviceClass), meth_QBluetoothDeviceInfo_minorDeviceClass, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_minorDeviceClass)},
    {SIP_MLNAME_CAST(sipName_name), meth_QBluetoothDeviceInfo_name, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_name)},
    {SIP_MLNAME_CAST(sipName_rssi), meth_QBluetoothDeviceInfo_rssi, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_rssi)},
    {SIP_MLNAME_CAST(sipName_serviceClasses), meth_QBluetoothDeviceInfo_serviceClasses, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_serviceClasses)},
    {SIP_MLNAME_CAST(sipName_serviceUuids), (PyCFunction)meth_QBluetoothDeviceInfo_serviceUuids, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_serviceUuids)},
    {SIP_MLNAME_CAST(sipName_serviceUuidsCompleteness), meth_QBluetoothDeviceInfo_serviceUuidsCompleteness, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_serviceUuidsCompleteness)},
    {SIP_MLNAME_CAST(sipName_setCached), meth_QBluetoothDeviceInfo_setCached, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_setCached)},
    {SIP_MLNAME_CAST(sipName_setRssi), meth_QBluetoothDeviceInfo_setRssi, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_setRssi)},
    {SIP_MLNAME_CAST(sipName_setServiceUuids), meth_QBluetoothDeviceInfo_setServiceUuids, METH_VARARGS, SIP_MLDOC_CAST(doc_QBluetoothDeviceInfo_setServiceUuids)}
};

static sipEnumMemberDef enummembers_QBluetoothDeviceInfo[] = {
    {sipName_AllServices, static_cast<int>(QBluetoothDeviceInfo::AllServices), 20},
    {sipName_AudioService, static_cast<int>(QBluetoothDeviceInfo::AudioService), 20},
    {sipName_AudioVideoDevice, static_cast<int>(QBluetoothDeviceInfo::AudioVideoDevice), 9},
    {sipName_Camcorder, static_cast<int>(QBluetoothDeviceInfo::Camcorder), 10},
    {sipName_CapturingService, static_cast<int>(QBluetoothDeviceInfo::CapturingService), 20},
    {sipName_CarAudio, static_cast<int>(QBluetoothDeviceInfo::CarAudio), 10},
    {sipName_CardReaderPeripheral, static_cast<int>(QBluetoothDeviceInfo::CardReaderPeripheral), 16},
    {sipName_CellularPhone, static_cast<int>(QBluetoothDeviceInfo::CellularPhone), 17},
    {sipName_CommonIsdnAccessPhone, static_cast<int>(QBluetoothDeviceInfo::CommonIsdnAccessPhone), 17},
    {sipName_ComputerDevice, static_cast<int>(QBluetoothDeviceInfo::ComputerDevice), 9},
    {sipName_CordlessPhone, static_cast<int>(QBluetoothDeviceInfo::CordlessPhone), 17},
    {sipName_DataComplete, static_cast<int>(QBluetoothDeviceInfo::DataComplete), 8},
    {sipName_DataIncomplete, static_cast<int>(QBluetoothDeviceInfo::DataIncomplete), 8},
    {sipName_DataUnavailable, static_cast<int>(QBluetoothDeviceInfo::DataUnavailable), 8},
    {sipName_DesktopComputer, static_cast<int>(QBluetoothDeviceInfo::DesktopComputer), 11},
    {sipName_DigitizerTabletPeripheral, static_cast<int>(QBluetoothDeviceInfo::DigitizerTabletPeripheral), 16},
    {sipName_GamepadPeripheral, static_cast<int>(QBluetoothDeviceInfo::GamepadPeripheral), 16},
    {sipName_GamingDevice, static_cast<int>(QBluetoothDeviceInfo::GamingDevice), 10},
    {sipName_HandheldClamShellComputer, static_cast<int>(QBluetoothDeviceInfo::HandheldClamShellComputer), 11},
    {sipName_HandheldComputer, static_cast<int>(QBluetoothDeviceInfo::HandheldComputer), 11},
    {sipName_HandsFreeDevice, static_cast<int>(QBluetoothDeviceInfo::HandsFreeDevice), 10},
    {sipName_Headphones, static_cast<int>(QBluetoothDeviceInfo::Headphones), 10},
    {sipName_HealthBloodPressureMonitor, static_cast<int>(QBluetoothDeviceInfo::HealthBloodPressureMonitor), 12},
    {sipName_HealthDataDisplay, static_cast<int>(QBluetoothDeviceInfo::HealthDataDisplay), 12},
    {sipName_HealthDevice, static_cast<int>(QBluetoothDeviceInfo::HealthDevice), 9},
    {sipName_HealthGlucoseMeter, static_cast<int>(QBluetoothDeviceInfo::HealthGlucoseMeter), 12},
    {sipName_HealthPulseOximeter, static_cast<int>(QBluetoothDeviceInfo::HealthPulseOximeter), 12},
    {sipName_HealthStepCounter, static_cast<int>(QBluetoothDeviceInfo::HealthStepCounter), 12},
    {sipName_HealthThermometer, static_cast<int>(QBluetoothDeviceInfo::HealthThermometer), 12},
    {sipName_HealthWeightScale, static_cast<int>(QBluetoothDeviceInfo::HealthWeightScale), 12},
    {sipName_HiFiAudioDevice, static_cast<int>(QBluetoothDeviceInfo::HiFiAudioDevice), 10},
    {sipName_ImageCamera, static_cast<int>(QBluetoothDeviceInfo::ImageCamera), 13},
    {sipName_ImageDisplay, static_cast<int>(QBluetoothDeviceInfo::ImageDisplay), 13},
    {sipName_ImagePrinter, static_cast<int>(QBluetoothDeviceInfo::ImagePrinter), 13},
    {sipName_ImageScanner, static_cast<int>(QBluetoothDeviceInfo::ImageScanner), 13},
    {sipName_ImagingDevice, static_cast<int>(QBluetoothDeviceInfo::ImagingDevice), 9},
    {sipName_InformationService, static_cast<int>(QBluetoothDeviceInfo::InformationService), 20},
    {sipName_JoystickPeripheral, static_cast<int>(QBluetoothDeviceInfo::JoystickPeripheral), 16},
    {sipName_KeyboardPeripheral, static_cast<int>(QBluetoothDeviceInfo::KeyboardPeripheral), 16},
    {sipName_KeyboardWithPointingDevicePeripheral, static_cast<int>(QBluetoothDeviceInfo::KeyboardWithPointingDevicePeripheral), 16},
    {sipName_LANAccessDevice, static_cast<int>(QBluetoothDeviceInfo::LANAccessDevice), 9},
    {sipName_LaptopComputer, static_cast<int>(QBluetoothDeviceInfo::LaptopComputer), 11},
    {sipName_Loudspeaker, static_cast<int>(QBluetoothDeviceInfo::Loudspeaker), 10},
    {sipName_Microphone, static_cast<int>(QBluetoothDeviceInfo::Microphone), 10},
    {sipName_MiscellaneousDevice, static_cast<int>(QBluetoothDeviceInfo::MiscellaneousDevice), 9},
    {sipName_NetworkFullService, static_cast<int>(QBluetoothDeviceInfo::NetworkFullService), 15},
    {sipName_NetworkLoadFactorFive, static_cast<int>(QBluetoothDeviceInfo::NetworkLoadFactorFive), 15},
    {sipName_NetworkLoadFactorFour, static_cast<int>(QBluetoothDeviceInfo::NetworkLoadFactorFour), 15},
    {sipName_NetworkLoadFactorOne, static_cast<int>(QBluetoothDeviceInfo::NetworkLoadFactorOne), 15},
    {sipName_NetworkLoadFactorSix, static_cast<int>(QBluetoothDeviceInfo::NetworkLoadFactorSix), 15},
    {sipName_NetworkLoadFactorThree, static_cast<int>(QBluetoothDeviceInfo::NetworkLoadFactorThree), 15},
    {sipName_NetworkLoadFactorTwo, static_cast<int>(QBluetoothDeviceInfo::NetworkLoadFactorTwo), 15},
    {sipName_NetworkNoService, static_cast<int>(QBluetoothDeviceInfo::NetworkNoService), 15},
    {sipName_NetworkingService, static_cast<int>(QBluetoothDeviceInfo::NetworkingService), 20},
    {sipName_NoService, static_cast<int>(QBluetoothDeviceInfo::NoService), 20},
    {sipName_ObjectTransferService, static_cast<int>(QBluetoothDeviceInfo::ObjectTransferService), 20},
    {sipName_PeripheralDevice, static_cast<int>(QBluetoothDeviceInfo::PeripheralDevice), 9},
    {sipName_PhoneDevice, static_cast<int>(QBluetoothDeviceInfo::PhoneDevice), 9},
    {sipName_PointingDevicePeripheral, static_cast<int>(QBluetoothDeviceInfo::PointingDevicePeripheral), 16},
    {sipName_PortableAudioDevice, static_cast<int>(QBluetoothDeviceInfo::PortableAudioDevice), 10},
    {sipName_PositioningService, static_cast<int>(QBluetoothDeviceInfo::PositioningService), 20},
    {sipName_RemoteControlPeripheral, static_cast<int>(QBluetoothDeviceInfo::RemoteControlPeripheral), 16},
    {sipName_RenderingService, static_cast<int>(QBluetoothDeviceInfo::RenderingService), 20},
    {sipName_SensingDevicePeripheral, static_cast<int>(QBluetoothDeviceInfo::SensingDevicePeripheral), 16},
    {sipName_ServerComputer, static_cast<int>(QBluetoothDeviceInfo::ServerComputer), 11},
    {sipName_SetTopBox, static_cast<int>(QBluetoothDeviceInfo::SetTopBox), 10},
    {sipName_SmartPhone, static_cast<int>(QBluetoothDeviceInfo::SmartPhone), 17},
    {sipName_TelephonyService, static_cast<int>(QBluetoothDeviceInfo::TelephonyService), 20},
    {sipName_ToyController, static_cast<int>(QBluetoothDeviceInfo::ToyController), 18},
    {sipName_ToyDevice, static_cast<int>(QBluetoothDeviceInfo::ToyDevice), 9},
    {sipName_ToyDoll, static_cast<int>(QBluetoothDeviceInfo::ToyDoll), 18},
    {sipName_ToyGame, static_cast<int>(QBluetoothDeviceInfo::ToyGame), 18},
    {sipName_ToyRobot, static_cast<int>(QBluetoothDeviceInfo::ToyRobot), 18},
    {sipName_ToyVehicle, static_cast<int>(QBluetoothDeviceInfo::ToyVehicle), 18},
    {sipName_UncategorizedAudioVideoDevice, static_cast<int>(QBluetoothDeviceInfo::UncategorizedAudioVideoDevice), 10},
    {sipName_UncategorizedComputer, static_cast<int>(QBluetoothDeviceInfo::UncategorizedComputer), 11},
    {sipName_UncategorizedDevice, static_cast<int>(QBluetoothDeviceInfo::UncategorizedDevice), 9},
    {sipName_UncategorizedHealthDevice, static_cast<int>(QBluetoothDeviceInfo::UncategorizedHealthDevice), 12},
    {sipName_UncategorizedImagingDevice, static_cast<int>(QBluetoothDeviceInfo::UncategorizedImagingDevice), 13},
    {sipName_UncategorizedMiscellaneous, static_cast<int>(QBluetoothDeviceInfo::UncategorizedMiscellaneous), 14},
    {sipName_UncategorizedPeripheral, static_cast<int>(QBluetoothDeviceInfo::UncategorizedPeripheral), 16},
    {sipName_UncategorizedPhone, static_cast<int>(QBluetoothDeviceInfo::UncategorizedPhone), 17},
    {sipName_UncategorizedToy, static_cast<int>(QBluetoothDeviceInfo::UncategorizedToy), 18},
    {sipName_UncategorizedWearableDevice, static_cast<int>(QBluetoothDeviceInfo::UncategorizedWearableDevice), 19},
    {sipName_Vcr, static_cast<int>(QBluetoothDeviceInfo::Vcr), 10},
    {sipName_VideoCamera, static_cast<int>(QBluetoothDeviceInfo::VideoCamera), 10},
    {sipName_VideoConferencing, static_cast<int>(QBluetoothDeviceInfo::VideoConferencing), 10},
    {sipName_VideoDisplayAndLoudspeaker, static_cast<int>(QBluetoothDeviceInfo::VideoDisplayAndLoudspeaker), 10},
    {sipName_VideoMonitor, static_cast<int>(QBluetoothDeviceInfo::VideoMonitor), 10},
    {sipName_WearableComputer, static_cast<int>(QBluetoothDeviceInfo::WearableComputer), 11},
    {sipName_WearableDevice, static_cast<int>(QBluetoothDeviceInfo::WearableDevice), 9},
    {sipName_WearableGlasses, static_cast<int>(QBluetoothDeviceInfo::WearableGlasses), 19},
    {sipName_WearableHeadsetDevice, static_cast<int>(QBluetoothDeviceInfo::WearableHeadsetDevice), 10},
    {sipName_WearableHelmet, static_cast<int>(QBluetoothDeviceInfo::WearableHelmet), 19},
    {sipName_WearableJacket, static_cast<int>(QBluetoothDeviceInfo::WearableJacket), 19},
    {sipName_WearablePager, static_cast<int>(QBluetoothDeviceInfo::WearablePager), 19},
    {sipName_WearableWristWatch, static_cast<int>(QBluetoothDeviceInfo::WearableWristWatch), 19},
    {sipName_WiredModemOrVoiceGatewayPhone, static_cast<int>(QBluetoothDeviceInfo::WiredModemOrVoiceGatewayPhone), 17},
};

PyDoc_STRVAR(doc_QBluetoothDeviceInfo, "\1QBluetoothDeviceInfo()\n"
    "QBluetoothDeviceInfo(QBluetoothAddress, str, int)\n"
    "QBluetoothDeviceInfo(QBluetoothDeviceInfo)");


pyqt5ClassTypeDef sipTypeDef_QtBluetooth_QBluetoothDeviceInfo = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBluetoothDeviceInfo,
        {0}
    },
    {
        sipNameNr_QBluetoothDeviceInfo,
        {0, 0, 1},
        13, methods_QBluetoothDeviceInfo,
        98, enummembers_QBluetoothDeviceInfo,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBluetoothDeviceInfo,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    slots_QBluetoothDeviceInfo,
    init_type_QBluetoothDeviceInfo,
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
    dealloc_QBluetoothDeviceInfo,
    assign_QBluetoothDeviceInfo,
    array_QBluetoothDeviceInfo,
    copy_QBluetoothDeviceInfo,
    release_QBluetoothDeviceInfo,
    cast_QBluetoothDeviceInfo,
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
