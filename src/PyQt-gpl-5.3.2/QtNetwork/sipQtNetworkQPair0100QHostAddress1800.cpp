/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:58 2014
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

#include "sipAPIQtNetwork.h"

#line 26 "sip/QtCore/qpycore_qpair.sip"
#include <qpair.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtNetwork/qhostaddress.sip"
#include <qhostaddress.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"


extern "C" {static void assign_QPair_0100QHostAddress_1800(void *, SIP_SSIZE_T, const void *);}
static void assign_QPair_0100QHostAddress_1800(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QPair<QHostAddress,int> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QPair<QHostAddress,int> *>(sipSrc);
}


extern "C" {static void *array_QPair_0100QHostAddress_1800(SIP_SSIZE_T);}
static void *array_QPair_0100QHostAddress_1800(SIP_SSIZE_T sipNrElem)
{
    return new QPair<QHostAddress,int>[sipNrElem];
}


extern "C" {static void *copy_QPair_0100QHostAddress_1800(const void *, SIP_SSIZE_T);}
static void *copy_QPair_0100QHostAddress_1800(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QPair<QHostAddress,int>(reinterpret_cast<const QPair<QHostAddress,int> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QPair_0100QHostAddress_1800(void *, int);}
static void release_QPair_0100QHostAddress_1800(void *ptr, int)
{
    delete reinterpret_cast<QPair<QHostAddress,int> *>(ptr);
}



extern "C" {static int convertTo_QPair_0100QHostAddress_1800(PyObject *, void **, int *, PyObject *);}
static int convertTo_QPair_0100QHostAddress_1800(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QPair<QHostAddress,int> **sipCppPtr = reinterpret_cast<QPair<QHostAddress,int> **>(sipCppPtrV);

#line 45 "sip/QtCore/qpycore_qpair.sip"
    if (!sipIsErr)
        return (PySequence_Check(sipPy)
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));

    SIP_SSIZE_T len = PySequence_Size(sipPy);

    if (len != 2)
    {
        // A negative length should only be an internal error so let the
        // original exception stand.
        if (len >= 0)
            PyErr_Format(PyExc_TypeError,
                    "sequence has " SIP_SSIZE_T_FORMAT " elements but 2 elements are expected",
                    len);

        *sipIsErr = 1;

        return 0;
    }

    PyObject *firstobj = PySequence_ITEM(sipPy, 0);

    if (!firstobj)
    {
        *sipIsErr = 1;

        return 0;
    }

    int firststate;
    QHostAddress *first = reinterpret_cast<QHostAddress *>(
            sipForceConvertToType(firstobj, sipType_QHostAddress, sipTransferObj,
                    SIP_NOT_NONE, &firststate, sipIsErr));
 
    if (*sipIsErr)
    {
        PyErr_Format(PyExc_TypeError,
                "the first element has type '%s' but 'QHostAddress' is expected",
                Py_TYPE(firstobj)->tp_name);

        return 0;
    }

    PyObject *secondobj = PySequence_ITEM(sipPy, 1);

    if (!secondobj)
    {
        sipReleaseType(first, sipType_QHostAddress, firststate);
        Py_DECREF(firstobj);
        *sipIsErr = 1;

        return 0;
    }

    PyErr_Clear();
    int second = SIPLong_AsLong(secondobj);

    if (PyErr_Occurred())
    {
        PyErr_Format(PyExc_TypeError,
                "the second element has type '%s' but 'int' is expected",
                Py_TYPE(secondobj)->tp_name);

        Py_DECREF(secondobj);
        sipReleaseType(first, sipType_QHostAddress, firststate);
        Py_DECREF(firstobj);
        *sipIsErr = 1;

        return 0;
    }

    *sipCppPtr = new QPair<QHostAddress, int>(*first, second);;

    Py_DECREF(secondobj);
    sipReleaseType(first, sipType_QHostAddress, firststate);
    Py_DECREF(firstobj);
 
    return sipGetState(sipTransferObj);
#line 153 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"
}


extern "C" {static PyObject *convertFrom_QPair_0100QHostAddress_1800(void *, PyObject *);}
static PyObject *convertFrom_QPair_0100QHostAddress_1800(void *sipCppV, PyObject *sipTransferObj)
{
   QPair<QHostAddress,int> *sipCpp = reinterpret_cast<QPair<QHostAddress,int> *>(sipCppV);

#line 30 "sip/QtCore/qpycore_qpair.sip"
    QHostAddress *first = new QHostAddress(sipCpp->first);
    PyObject *t = sipBuildResult(NULL, "(Ni)", first, sipType_QHostAddress,
            sipTransferObj, sipCpp->second);

    if (!t)
    {
        delete first;

        return 0;
    }

    return t;
#line 175 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtNetwork/sipQtNetworkQPair0100QHostAddress1800.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QPair_0100QHostAddress_1800 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_3868,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QPair_0100QHostAddress_1800,
    array_QPair_0100QHostAddress_1800,
    copy_QPair_0100QHostAddress_1800,
    release_QPair_0100QHostAddress_1800,
    convertTo_QPair_0100QHostAddress_1800,
    convertFrom_QPair_0100QHostAddress_1800
};
