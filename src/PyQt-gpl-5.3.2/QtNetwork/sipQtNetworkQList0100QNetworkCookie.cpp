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

#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtNetwork/sipQtNetworkQList0100QNetworkCookie.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtNetwork/qnetworkcookie.sip"
#include <qnetworkcookie.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtNetwork/sipQtNetworkQList0100QNetworkCookie.cpp"


extern "C" {static void assign_QList_0100QNetworkCookie(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QNetworkCookie(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QNetworkCookie> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QNetworkCookie> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QNetworkCookie(SIP_SSIZE_T);}
static void *array_QList_0100QNetworkCookie(SIP_SSIZE_T sipNrElem)
{
    return new QList<QNetworkCookie>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QNetworkCookie(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QNetworkCookie(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QNetworkCookie>(reinterpret_cast<const QList<QNetworkCookie> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QNetworkCookie(void *, int);}
static void release_QList_0100QNetworkCookie(void *ptr, int)
{
    delete reinterpret_cast<QList<QNetworkCookie> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QNetworkCookie(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QNetworkCookie(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QNetworkCookie> **sipCppPtr = reinterpret_cast<QList<QNetworkCookie> **>(sipCppPtrV);

#line 66 "sip/QtCore/qpycore_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QNetworkCookie> *ql = new QList<QNetworkCookie>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        int state;
        QNetworkCookie *t = reinterpret_cast<QNetworkCookie *>(
                sipForceConvertToType(itm, sipType_QNetworkCookie, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QNetworkCookie' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QNetworkCookie, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 142 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtNetwork/sipQtNetworkQList0100QNetworkCookie.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QNetworkCookie(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QNetworkCookie(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QNetworkCookie> *sipCpp = reinterpret_cast<QList<QNetworkCookie> *>(sipCppV);

#line 40 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QNetworkCookie *t = new QNetworkCookie(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QNetworkCookie,
                sipTransferObj);

        if (!tobj)
        {
            delete t;
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 175 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtNetwork/sipQtNetworkQList0100QNetworkCookie.cpp"
}


sipMappedTypeDef sipTypeDef_QtNetwork_QList_0100QNetworkCookie = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_4599,
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
    assign_QList_0100QNetworkCookie,
    array_QList_0100QNetworkCookie,
    copy_QList_0100QNetworkCookie,
    release_QList_0100QNetworkCookie,
    convertTo_QList_0100QNetworkCookie,
    convertFrom_QList_0100QNetworkCookie
};
