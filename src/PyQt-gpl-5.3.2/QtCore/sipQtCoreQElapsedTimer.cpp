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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qelapsedtimer.sip"
#include <qelapsedtimer.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQElapsedTimer.cpp"



PyDoc_STRVAR(doc_QElapsedTimer_clockType, "QElapsedTimer.clockType() -> QElapsedTimer.ClockType");

extern "C" {static PyObject *meth_QElapsedTimer_clockType(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_clockType(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QElapsedTimer::ClockType sipRes;

            sipRes = QElapsedTimer::clockType();

            return sipConvertFromEnum(sipRes,sipType_QElapsedTimer_ClockType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_clockType, doc_QElapsedTimer_clockType);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_isMonotonic, "QElapsedTimer.isMonotonic() -> bool");

extern "C" {static PyObject *meth_QElapsedTimer_isMonotonic(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_isMonotonic(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            bool sipRes;

            sipRes = QElapsedTimer::isMonotonic();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_isMonotonic, doc_QElapsedTimer_isMonotonic);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_start, "QElapsedTimer.start()");

extern "C" {static PyObject *meth_QElapsedTimer_start(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_start(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            sipCpp->start();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_start, doc_QElapsedTimer_start);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_restart, "QElapsedTimer.restart() -> int");

extern "C" {static PyObject *meth_QElapsedTimer_restart(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_restart(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->restart();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_restart, doc_QElapsedTimer_restart);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_invalidate, "QElapsedTimer.invalidate()");

extern "C" {static PyObject *meth_QElapsedTimer_invalidate(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_invalidate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            sipCpp->invalidate();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_invalidate, doc_QElapsedTimer_invalidate);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_isValid, "QElapsedTimer.isValid() -> bool");

extern "C" {static PyObject *meth_QElapsedTimer_isValid(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_isValid, doc_QElapsedTimer_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_elapsed, "QElapsedTimer.elapsed() -> int");

extern "C" {static PyObject *meth_QElapsedTimer_elapsed(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_elapsed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->elapsed();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_elapsed, doc_QElapsedTimer_elapsed);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_hasExpired, "QElapsedTimer.hasExpired(int) -> bool");

extern "C" {static PyObject *meth_QElapsedTimer_hasExpired(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_hasExpired(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qint64 a0;
        const QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bn", &sipSelf, sipType_QElapsedTimer, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->hasExpired(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_hasExpired, doc_QElapsedTimer_hasExpired);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_msecsSinceReference, "QElapsedTimer.msecsSinceReference() -> int");

extern "C" {static PyObject *meth_QElapsedTimer_msecsSinceReference(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_msecsSinceReference(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->msecsSinceReference();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_msecsSinceReference, doc_QElapsedTimer_msecsSinceReference);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_msecsTo, "QElapsedTimer.msecsTo(QElapsedTimer) -> int");

extern "C" {static PyObject *meth_QElapsedTimer_msecsTo(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_msecsTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer* a0;
        const QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QElapsedTimer, &sipCpp, sipType_QElapsedTimer, &a0))
        {
            qint64 sipRes;

            sipRes = sipCpp->msecsTo(*a0);

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_msecsTo, doc_QElapsedTimer_msecsTo);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_secsTo, "QElapsedTimer.secsTo(QElapsedTimer) -> int");

extern "C" {static PyObject *meth_QElapsedTimer_secsTo(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_secsTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer* a0;
        const QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QElapsedTimer, &sipCpp, sipType_QElapsedTimer, &a0))
        {
            qint64 sipRes;

            sipRes = sipCpp->secsTo(*a0);

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_secsTo, doc_QElapsedTimer_secsTo);

    return NULL;
}


PyDoc_STRVAR(doc_QElapsedTimer_nsecsElapsed, "QElapsedTimer.nsecsElapsed() -> int");

extern "C" {static PyObject *meth_QElapsedTimer_nsecsElapsed(PyObject *, PyObject *);}
static PyObject *meth_QElapsedTimer_nsecsElapsed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QElapsedTimer, &sipCpp))
        {
            qint64 sipRes;

            sipRes = sipCpp->nsecsElapsed();

            return PyLong_FromLongLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QElapsedTimer, sipName_nsecsElapsed, doc_QElapsedTimer_nsecsElapsed);

    return NULL;
}


extern "C" {static PyObject *slot_QElapsedTimer___ge__(PyObject *,PyObject *);}
static PyObject *slot_QElapsedTimer___ge__(PyObject *sipSelf,PyObject *sipArg)
{
    QElapsedTimer *sipCpp = reinterpret_cast<QElapsedTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QElapsedTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QElapsedTimer, &a0))
        {
            bool sipRes;

            sipRes = !operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ge_slot,sipType_QElapsedTimer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QElapsedTimer___lt__(PyObject *,PyObject *);}
static PyObject *slot_QElapsedTimer___lt__(PyObject *sipSelf,PyObject *sipArg)
{
    QElapsedTimer *sipCpp = reinterpret_cast<QElapsedTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QElapsedTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QElapsedTimer, &a0))
        {
            bool sipRes;

            sipRes = operator<((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,lt_slot,sipType_QElapsedTimer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QElapsedTimer___ne__(PyObject *,PyObject *);}
static PyObject *slot_QElapsedTimer___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QElapsedTimer *sipCpp = reinterpret_cast<QElapsedTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QElapsedTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QElapsedTimer, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QElapsedTimer::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QElapsedTimer,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QElapsedTimer___eq__(PyObject *,PyObject *);}
static PyObject *slot_QElapsedTimer___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QElapsedTimer *sipCpp = reinterpret_cast<QElapsedTimer *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QElapsedTimer));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QElapsedTimer* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QElapsedTimer, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QElapsedTimer::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QElapsedTimer,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QElapsedTimer(void *, const sipTypeDef *);}
static void *cast_QElapsedTimer(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QElapsedTimer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QElapsedTimer(void *, int);}
static void release_QElapsedTimer(void *sipCppV,int)
{
    delete reinterpret_cast<QElapsedTimer *>(sipCppV);
}


extern "C" {static void assign_QElapsedTimer(void *, SIP_SSIZE_T, const void *);}
static void assign_QElapsedTimer(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QElapsedTimer *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QElapsedTimer *>(sipSrc);
}


extern "C" {static void *array_QElapsedTimer(SIP_SSIZE_T);}
static void *array_QElapsedTimer(SIP_SSIZE_T sipNrElem)
{
    return new QElapsedTimer[sipNrElem];
}


extern "C" {static void *copy_QElapsedTimer(const void *, SIP_SSIZE_T);}
static void *copy_QElapsedTimer(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QElapsedTimer(reinterpret_cast<const QElapsedTimer *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QElapsedTimer(sipSimpleWrapper *);}
static void dealloc_QElapsedTimer(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QElapsedTimer(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QElapsedTimer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QElapsedTimer(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QElapsedTimer *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QElapsedTimer();

            return sipCpp;
        }
    }

    {
        const QElapsedTimer* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QElapsedTimer, &a0))
        {
            sipCpp = new QElapsedTimer(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QElapsedTimer[] = {
    {(void *)slot_QElapsedTimer___ge__, ge_slot},
    {(void *)slot_QElapsedTimer___lt__, lt_slot},
    {(void *)slot_QElapsedTimer___ne__, ne_slot},
    {(void *)slot_QElapsedTimer___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QElapsedTimer[] = {
    {SIP_MLNAME_CAST(sipName_clockType), meth_QElapsedTimer_clockType, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_clockType)},
    {SIP_MLNAME_CAST(sipName_elapsed), meth_QElapsedTimer_elapsed, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_elapsed)},
    {SIP_MLNAME_CAST(sipName_hasExpired), meth_QElapsedTimer_hasExpired, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_hasExpired)},
    {SIP_MLNAME_CAST(sipName_invalidate), meth_QElapsedTimer_invalidate, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_invalidate)},
    {SIP_MLNAME_CAST(sipName_isMonotonic), meth_QElapsedTimer_isMonotonic, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_isMonotonic)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QElapsedTimer_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_isValid)},
    {SIP_MLNAME_CAST(sipName_msecsSinceReference), meth_QElapsedTimer_msecsSinceReference, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_msecsSinceReference)},
    {SIP_MLNAME_CAST(sipName_msecsTo), meth_QElapsedTimer_msecsTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_msecsTo)},
    {SIP_MLNAME_CAST(sipName_nsecsElapsed), meth_QElapsedTimer_nsecsElapsed, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_nsecsElapsed)},
    {SIP_MLNAME_CAST(sipName_restart), meth_QElapsedTimer_restart, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_restart)},
    {SIP_MLNAME_CAST(sipName_secsTo), meth_QElapsedTimer_secsTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_secsTo)},
    {SIP_MLNAME_CAST(sipName_start), meth_QElapsedTimer_start, METH_VARARGS, SIP_MLDOC_CAST(doc_QElapsedTimer_start)}
};

static sipEnumMemberDef enummembers_QElapsedTimer[] = {
    {sipName_MachAbsoluteTime, static_cast<int>(QElapsedTimer::MachAbsoluteTime), 52},
    {sipName_MonotonicClock, static_cast<int>(QElapsedTimer::MonotonicClock), 52},
    {sipName_PerformanceCounter, static_cast<int>(QElapsedTimer::PerformanceCounter), 52},
    {sipName_SystemTime, static_cast<int>(QElapsedTimer::SystemTime), 52},
    {sipName_TickCounter, static_cast<int>(QElapsedTimer::TickCounter), 52},
};

PyDoc_STRVAR(doc_QElapsedTimer, "\1QElapsedTimer()\n"
    "QElapsedTimer(QElapsedTimer)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QElapsedTimer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QElapsedTimer,
        {0}
    },
    {
        sipNameNr_QElapsedTimer,
        {0, 0, 1},
        12, methods_QElapsedTimer,
        5, enummembers_QElapsedTimer,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QElapsedTimer,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QElapsedTimer,
    init_type_QElapsedTimer,
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
    dealloc_QElapsedTimer,
    assign_QElapsedTimer,
    array_QElapsedTimer,
    copy_QElapsedTimer,
    release_QElapsedTimer,
    cast_QElapsedTimer,
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
