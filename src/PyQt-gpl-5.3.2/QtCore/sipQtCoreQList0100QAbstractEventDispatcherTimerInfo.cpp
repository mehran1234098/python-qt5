/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:40 2014
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

#include "sipAPIQtCore.h"

#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQList0100QAbstractEventDispatcherTimerInfo.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qabstracteventdispatcher.sip"
#include <qabstracteventdispatcher.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qabstracteventdispatcher.sip"
#include <qabstracteventdispatcher.h>
#line 35 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQList0100QAbstractEventDispatcherTimerInfo.cpp"


extern "C" {static void assign_QList_0100QAbstractEventDispatcher_TimerInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0100QAbstractEventDispatcher_TimerInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QAbstractEventDispatcher::TimerInfo> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QAbstractEventDispatcher::TimerInfo> *>(sipSrc);
}


extern "C" {static void *array_QList_0100QAbstractEventDispatcher_TimerInfo(SIP_SSIZE_T);}
static void *array_QList_0100QAbstractEventDispatcher_TimerInfo(SIP_SSIZE_T sipNrElem)
{
    return new QList<QAbstractEventDispatcher::TimerInfo>[sipNrElem];
}


extern "C" {static void *copy_QList_0100QAbstractEventDispatcher_TimerInfo(const void *, SIP_SSIZE_T);}
static void *copy_QList_0100QAbstractEventDispatcher_TimerInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QAbstractEventDispatcher::TimerInfo>(reinterpret_cast<const QList<QAbstractEventDispatcher::TimerInfo> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0100QAbstractEventDispatcher_TimerInfo(void *, int);}
static void release_QList_0100QAbstractEventDispatcher_TimerInfo(void *ptr, int)
{
    delete reinterpret_cast<QList<QAbstractEventDispatcher::TimerInfo> *>(ptr);
}



extern "C" {static int convertTo_QList_0100QAbstractEventDispatcher_TimerInfo(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0100QAbstractEventDispatcher_TimerInfo(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QAbstractEventDispatcher::TimerInfo> **sipCppPtr = reinterpret_cast<QList<QAbstractEventDispatcher::TimerInfo> **>(sipCppPtrV);

#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpycore_qlist.sip"
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

    QList<QAbstractEventDispatcher::TimerInfo> *ql = new QList<QAbstractEventDispatcher::TimerInfo>;
 
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
        QAbstractEventDispatcher::TimerInfo *t = reinterpret_cast<QAbstractEventDispatcher::TimerInfo *>(
                sipForceConvertToType(itm, sipType_QAbstractEventDispatcher_TimerInfo, sipTransferObj,
                        SIP_NOT_NONE, &state, sipIsErr));

        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QAbstractEventDispatcher::TimerInfo' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(*t);

        sipReleaseType(t, sipType_QAbstractEventDispatcher_TimerInfo, state);
        Py_DECREF(itm);
    }
 
    Py_DECREF(iter);

    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 144 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQList0100QAbstractEventDispatcherTimerInfo.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0100QAbstractEventDispatcher_TimerInfo(void *, PyObject *);}
static PyObject *convertFrom_QList_0100QAbstractEventDispatcher_TimerInfo(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QAbstractEventDispatcher::TimerInfo> *sipCpp = reinterpret_cast<QList<QAbstractEventDispatcher::TimerInfo> *>(sipCppV);

#line 40 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QAbstractEventDispatcher::TimerInfo *t = new QAbstractEventDispatcher::TimerInfo(sipCpp->at(i));
        PyObject *tobj = sipConvertFromNewType(t, sipType_QAbstractEventDispatcher_TimerInfo,
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
#line 177 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQList0100QAbstractEventDispatcherTimerInfo.cpp"
}


sipMappedTypeDef sipTypeDef_QtCore_QList_0100QAbstractEventDispatcher_TimerInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_45,
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
    assign_QList_0100QAbstractEventDispatcher_TimerInfo,
    array_QList_0100QAbstractEventDispatcher_TimerInfo,
    copy_QList_0100QAbstractEventDispatcher_TimerInfo,
    release_QList_0100QAbstractEventDispatcher_TimerInfo,
    convertTo_QList_0100QAbstractEventDispatcher_TimerInfo,
    convertFrom_QList_0100QAbstractEventDispatcher_TimerInfo
};
