/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:45 2014
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

#include "sipAPIQtGui.h"

#line 35 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQOpenGLDebugMessageSeverities.cpp"

#line 35 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qopengldebug.sip"
#include <qopengldebug.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQOpenGLDebugMessageSeverities.cpp"


extern "C" {static int slot_QOpenGLDebugMessage_Severities___bool__(PyObject *);}
static int slot_QOpenGLDebugMessage_Severities___bool__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Severities *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Severities));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Severities::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQOpenGLDebugMessageSeverities.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___ne__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLDebugMessage::Severities *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Severities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Severities::Int() != a0->operator QOpenGLDebugMessage::Severities::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQOpenGLDebugMessageSeverities.cpp"
            sipReleaseType(const_cast<QOpenGLDebugMessage::Severities *>(a0),sipType_QOpenGLDebugMessage_Severities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QOpenGLDebugMessage_Severities,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___eq__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QOpenGLDebugMessage::Severities *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Severities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QOpenGLDebugMessage::Severities::Int() == a0->operator QOpenGLDebugMessage::Severities::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQOpenGLDebugMessageSeverities.cpp"
            sipReleaseType(const_cast<QOpenGLDebugMessage::Severities *>(a0),sipType_QOpenGLDebugMessage_Severities,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QOpenGLDebugMessage_Severities,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___invert__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___invert__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Severities *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Severities));

    if (!sipCpp)
        return 0;


    {
        {
            QOpenGLDebugMessage::Severities*sipRes;

            sipRes = new QOpenGLDebugMessage::Severities(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Severities,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___and__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Severities*sipRes;

            sipRes = new QOpenGLDebugMessage::Severities((*a0 & a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Severities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Severities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___xor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;
        QOpenGLDebugMessage::Severities* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State, sipType_QOpenGLDebugMessage_Severities, &a1, &a1State))
        {
            QOpenGLDebugMessage::Severities*sipRes;

            sipRes = new QOpenGLDebugMessage::Severities((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Severities,a0State);
            sipReleaseType(a1,sipType_QOpenGLDebugMessage_Severities,a1State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Severities,NULL);
        }
    }

    {
        QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Severities*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QOpenGLDebugMessage::Severities(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQOpenGLDebugMessageSeverities.cpp"
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Severities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Severities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___or__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;
        QOpenGLDebugMessage::Severities* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State, sipType_QOpenGLDebugMessage_Severities, &a1, &a1State))
        {
            QOpenGLDebugMessage::Severities*sipRes;

            sipRes = new QOpenGLDebugMessage::Severities((*a0 | *a1));
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Severities,a0State);
            sipReleaseType(a1,sipType_QOpenGLDebugMessage_Severities,a1State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Severities,NULL);
        }
    }

    {
        QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State, &a1))
        {
            QOpenGLDebugMessage::Severities*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QOpenGLDebugMessage::Severities(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQOpenGLDebugMessageSeverities.cpp"
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Severities,a0State);

            return sipConvertFromNewType(sipRes,sipType_QOpenGLDebugMessage_Severities,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___int__(PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___int__(PyObject *sipSelf)
{
    QOpenGLDebugMessage::Severities *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Severities));

    if (!sipCpp)
        return 0;


    {
        {
            int sipRes;

            sipRes = *sipCpp;

            return SIPLong_FromLong(sipRes);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Severities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Severities *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Severities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State))
        {
            sipCpp->QOpenGLDebugMessage::Severities::operator^=(*a0);
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Severities,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___ior__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Severities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Severities *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Severities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State))
        {
            sipCpp->QOpenGLDebugMessage::Severities::operator|=(*a0);
            sipReleaseType(a0,sipType_QOpenGLDebugMessage_Severities,a0State);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_QOpenGLDebugMessage_Severities___iand__(PyObject *,PyObject *);}
static PyObject *slot_QOpenGLDebugMessage_Severities___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Severities)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QOpenGLDebugMessage::Severities *sipCpp = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QOpenGLDebugMessage_Severities));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QOpenGLDebugMessage::Severities::operator&=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QOpenGLDebugMessage_Severities(void *, const sipTypeDef *);}
static void *cast_QOpenGLDebugMessage_Severities(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QOpenGLDebugMessage_Severities)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QOpenGLDebugMessage_Severities(void *, int);}
static void release_QOpenGLDebugMessage_Severities(void *sipCppV,int)
{
    delete reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipCppV);
}


extern "C" {static void assign_QOpenGLDebugMessage_Severities(void *, SIP_SSIZE_T, const void *);}
static void assign_QOpenGLDebugMessage_Severities(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QOpenGLDebugMessage::Severities *>(sipSrc);
}


extern "C" {static void *array_QOpenGLDebugMessage_Severities(SIP_SSIZE_T);}
static void *array_QOpenGLDebugMessage_Severities(SIP_SSIZE_T sipNrElem)
{
    return new QOpenGLDebugMessage::Severities[sipNrElem];
}


extern "C" {static void *copy_QOpenGLDebugMessage_Severities(const void *, SIP_SSIZE_T);}
static void *copy_QOpenGLDebugMessage_Severities(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QOpenGLDebugMessage::Severities(reinterpret_cast<const QOpenGLDebugMessage::Severities *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QOpenGLDebugMessage_Severities(sipSimpleWrapper *);}
static void dealloc_QOpenGLDebugMessage_Severities(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QOpenGLDebugMessage_Severities(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QOpenGLDebugMessage_Severities(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QOpenGLDebugMessage_Severities(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QOpenGLDebugMessage::Severities *sipCpp = 0;

    {
        const QOpenGLDebugMessage::Severities* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QOpenGLDebugMessage_Severities, &a0, &a0State))
        {
            sipCpp = new QOpenGLDebugMessage::Severities(*a0);
            sipReleaseType(const_cast<QOpenGLDebugMessage::Severities *>(a0),sipType_QOpenGLDebugMessage_Severities,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QOpenGLDebugMessage::Severities(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QOpenGLDebugMessage::Severities();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QOpenGLDebugMessage_Severities(PyObject *, void **, int *, PyObject *);}
static int convertTo_QOpenGLDebugMessage_Severities(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QOpenGLDebugMessage::Severities **sipCppPtr = reinterpret_cast<QOpenGLDebugMessage::Severities **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QOpenGLDebugMessage::Severities is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Severity)) ||
            sipCanConvertToType(sipPy, sipType_QOpenGLDebugMessage_Severities, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QOpenGLDebugMessage_Severity)))
{
    *sipCppPtr = new QOpenGLDebugMessage::Severities(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QOpenGLDebugMessage::Severities *>(sipConvertToType(sipPy, sipType_QOpenGLDebugMessage_Severities, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQOpenGLDebugMessageSeverities.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QOpenGLDebugMessage_Severities[] = {
    {(void *)slot_QOpenGLDebugMessage_Severities___bool__, bool_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___ne__, ne_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___eq__, eq_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___invert__, invert_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___and__, and_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___xor__, xor_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___or__, or_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___int__, int_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___ixor__, ixor_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___ior__, ior_slot},
    {(void *)slot_QOpenGLDebugMessage_Severities___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QOpenGLDebugMessage_Severities, "\1QOpenGLDebugMessage.Severities(QOpenGLDebugMessage.Severities)\n"
    "QOpenGLDebugMessage.Severities(int)\n"
    "QOpenGLDebugMessage.Severities()");


pyqt5ClassTypeDef sipTypeDef_QtGui_QOpenGLDebugMessage_Severities = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QOpenGLDebugMessage__Severities,
        {0}
    },
    {
        sipNameNr_Severities,
        {130, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QOpenGLDebugMessage_Severities,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QOpenGLDebugMessage_Severities,
    init_type_QOpenGLDebugMessage_Severities,
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
    dealloc_QOpenGLDebugMessage_Severities,
    assign_QOpenGLDebugMessage_Severities,
    array_QOpenGLDebugMessage_Severities,
    copy_QOpenGLDebugMessage_Severities,
    release_QOpenGLDebugMessage_Severities,
    cast_QOpenGLDebugMessage_Severities,
    convertTo_QOpenGLDebugMessage_Severities,
    0,
    0,
    0,
    0,
    0
},
    0,
    1,
    0,
    0
};
