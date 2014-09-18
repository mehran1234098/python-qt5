/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:41 2014
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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qbasictimer.sip"
#include <qbasictimer.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQBasicTimer.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQBasicTimer.cpp"
#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qobject.sip"
#include <qobject.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQBasicTimer.cpp"


PyDoc_STRVAR(doc_QBasicTimer_isActive, "QBasicTimer.isActive() -> bool");

extern "C" {static PyObject *meth_QBasicTimer_isActive(PyObject *, PyObject *);}
static PyObject *meth_QBasicTimer_isActive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBasicTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBasicTimer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isActive();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBasicTimer, sipName_isActive, doc_QBasicTimer_isActive);

    return NULL;
}


PyDoc_STRVAR(doc_QBasicTimer_timerId, "QBasicTimer.timerId() -> int");

extern "C" {static PyObject *meth_QBasicTimer_timerId(PyObject *, PyObject *);}
static PyObject *meth_QBasicTimer_timerId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QBasicTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBasicTimer, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->timerId();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBasicTimer, sipName_timerId, doc_QBasicTimer_timerId);

    return NULL;
}


PyDoc_STRVAR(doc_QBasicTimer_start, "QBasicTimer.start(int, Qt.TimerType, QObject)\n"
    "QBasicTimer.start(int, QObject)");

extern "C" {static PyObject *meth_QBasicTimer_start(PyObject *, PyObject *);}
static PyObject *meth_QBasicTimer_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        Qt::TimerType a1;
        QObject* a2;
        QBasicTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiEJ8", &sipSelf, sipType_QBasicTimer, &sipCpp, &a0, sipType_Qt_TimerType, &a1, sipType_QObject, &a2))
        {
            sipCpp->start(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        int a0;
        QObject* a1;
        QBasicTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_QBasicTimer, &sipCpp, &a0, sipType_QObject, &a1))
        {
            sipCpp->start(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBasicTimer, sipName_start, doc_QBasicTimer_start);

    return NULL;
}


PyDoc_STRVAR(doc_QBasicTimer_stop, "QBasicTimer.stop()");

extern "C" {static PyObject *meth_QBasicTimer_stop(PyObject *, PyObject *);}
static PyObject *meth_QBasicTimer_stop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QBasicTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QBasicTimer, &sipCpp))
        {
            sipCpp->stop();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QBasicTimer, sipName_stop, doc_QBasicTimer_stop);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QBasicTimer(void *, const sipTypeDef *);}
static void *cast_QBasicTimer(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QBasicTimer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QBasicTimer(void *, int);}
static void release_QBasicTimer(void *sipCppV,int)
{
    delete reinterpret_cast<QBasicTimer *>(sipCppV);
}


extern "C" {static void assign_QBasicTimer(void *, SIP_SSIZE_T, const void *);}
static void assign_QBasicTimer(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QBasicTimer *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QBasicTimer *>(sipSrc);
}


extern "C" {static void *array_QBasicTimer(SIP_SSIZE_T);}
static void *array_QBasicTimer(SIP_SSIZE_T sipNrElem)
{
    return new QBasicTimer[sipNrElem];
}


extern "C" {static void *copy_QBasicTimer(const void *, SIP_SSIZE_T);}
static void *copy_QBasicTimer(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QBasicTimer(reinterpret_cast<const QBasicTimer *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QBasicTimer(sipSimpleWrapper *);}
static void dealloc_QBasicTimer(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QBasicTimer(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QBasicTimer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QBasicTimer(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QBasicTimer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QBasicTimer();

            return sipCpp;
        }
    }

    {
        const QBasicTimer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QBasicTimer, &a0))
        {
            sipCpp = new QBasicTimer(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QBasicTimer[] = {
    {SIP_MLNAME_CAST(sipName_isActive), meth_QBasicTimer_isActive, METH_VARARGS, SIP_MLDOC_CAST(doc_QBasicTimer_isActive)},
    {SIP_MLNAME_CAST(sipName_start), meth_QBasicTimer_start, METH_VARARGS, SIP_MLDOC_CAST(doc_QBasicTimer_start)},
    {SIP_MLNAME_CAST(sipName_stop), meth_QBasicTimer_stop, METH_VARARGS, SIP_MLDOC_CAST(doc_QBasicTimer_stop)},
    {SIP_MLNAME_CAST(sipName_timerId), meth_QBasicTimer_timerId, METH_VARARGS, SIP_MLDOC_CAST(doc_QBasicTimer_timerId)}
};

PyDoc_STRVAR(doc_QBasicTimer, "\1QBasicTimer()\n"
    "QBasicTimer(QBasicTimer)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QBasicTimer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QBasicTimer,
        {0}
    },
    {
        sipNameNr_QBasicTimer,
        {0, 0, 1},
        4, methods_QBasicTimer,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QBasicTimer,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QBasicTimer,
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
    dealloc_QBasicTimer,
    assign_QBasicTimer,
    array_QBasicTimer,
    copy_QBasicTimer,
    release_QBasicTimer,
    cast_QBasicTimer,
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
