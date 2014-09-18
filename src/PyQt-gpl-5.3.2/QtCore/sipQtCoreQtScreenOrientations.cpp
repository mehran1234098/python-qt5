/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:42 2014
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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQtScreenOrientations.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQtScreenOrientations.cpp"


extern "C" {static int slot_Qt_ScreenOrientations___bool__(PyObject *);}
static int slot_Qt_ScreenOrientations___bool__(PyObject *sipSelf)
{
    Qt::ScreenOrientations *sipCpp = reinterpret_cast<Qt::ScreenOrientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ScreenOrientations));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ScreenOrientations::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQtScreenOrientations.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ScreenOrientations___ne__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ScreenOrientations *sipCpp = reinterpret_cast<Qt::ScreenOrientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ScreenOrientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::ScreenOrientations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ScreenOrientations, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ScreenOrientations::Int() != a0->operator Qt::ScreenOrientations::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQtScreenOrientations.cpp"
            sipReleaseType(const_cast<Qt::ScreenOrientations *>(a0),sipType_Qt_ScreenOrientations,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_Qt_ScreenOrientations,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ScreenOrientations___eq__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    Qt::ScreenOrientations *sipCpp = reinterpret_cast<Qt::ScreenOrientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ScreenOrientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const Qt::ScreenOrientations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ScreenOrientations, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator Qt::ScreenOrientations::Int() == a0->operator Qt::ScreenOrientations::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQtScreenOrientations.cpp"
            sipReleaseType(const_cast<Qt::ScreenOrientations *>(a0),sipType_Qt_ScreenOrientations,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_Qt_ScreenOrientations,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_Qt_ScreenOrientations___invert__(PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___invert__(PyObject *sipSelf)
{
    Qt::ScreenOrientations *sipCpp = reinterpret_cast<Qt::ScreenOrientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ScreenOrientations));

    if (!sipCpp)
        return 0;


    {
        {
            Qt::ScreenOrientations*sipRes;

            sipRes = new Qt::ScreenOrientations(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_Qt_ScreenOrientations,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_Qt_ScreenOrientations___and__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ScreenOrientations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ScreenOrientations, &a0, &a0State, &a1))
        {
            Qt::ScreenOrientations*sipRes;

            sipRes = new Qt::ScreenOrientations((*a0 & a1));
            sipReleaseType(a0,sipType_Qt_ScreenOrientations,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ScreenOrientations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ScreenOrientations___xor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ScreenOrientations* a0;
        int a0State = 0;
        Qt::ScreenOrientations* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_ScreenOrientations, &a0, &a0State, sipType_Qt_ScreenOrientations, &a1, &a1State))
        {
            Qt::ScreenOrientations*sipRes;

            sipRes = new Qt::ScreenOrientations((*a0 ^ *a1));
            sipReleaseType(a0,sipType_Qt_ScreenOrientations,a0State);
            sipReleaseType(a1,sipType_Qt_ScreenOrientations,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ScreenOrientations,NULL);
        }
    }

    {
        Qt::ScreenOrientations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ScreenOrientations, &a0, &a0State, &a1))
        {
            Qt::ScreenOrientations*sipRes = 0;

#line 103 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = new Qt::ScreenOrientations(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQtScreenOrientations.cpp"
            sipReleaseType(a0,sipType_Qt_ScreenOrientations,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ScreenOrientations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ScreenOrientations___or__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::ScreenOrientations* a0;
        int a0State = 0;
        Qt::ScreenOrientations* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_Qt_ScreenOrientations, &a0, &a0State, sipType_Qt_ScreenOrientations, &a1, &a1State))
        {
            Qt::ScreenOrientations*sipRes;

            sipRes = new Qt::ScreenOrientations((*a0 | *a1));
            sipReleaseType(a0,sipType_Qt_ScreenOrientations,a0State);
            sipReleaseType(a1,sipType_Qt_ScreenOrientations,a1State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ScreenOrientations,NULL);
        }
    }

    {
        Qt::ScreenOrientations* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_Qt_ScreenOrientations, &a0, &a0State, &a1))
        {
            Qt::ScreenOrientations*sipRes = 0;

#line 98 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = new Qt::ScreenOrientations(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQtScreenOrientations.cpp"
            sipReleaseType(a0,sipType_Qt_ScreenOrientations,a0State);

            return sipConvertFromNewType(sipRes,sipType_Qt_ScreenOrientations,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_Qt_ScreenOrientations___int__(PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___int__(PyObject *sipSelf)
{
    Qt::ScreenOrientations *sipCpp = reinterpret_cast<Qt::ScreenOrientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ScreenOrientations));

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


extern "C" {static PyObject *slot_Qt_ScreenOrientations___ixor__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ScreenOrientations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ScreenOrientations *sipCpp = reinterpret_cast<Qt::ScreenOrientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ScreenOrientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::ScreenOrientations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ScreenOrientations, &a0, &a0State))
        {
            sipCpp->Qt::ScreenOrientations::operator^=(*a0);
            sipReleaseType(a0,sipType_Qt_ScreenOrientations,a0State);

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


extern "C" {static PyObject *slot_Qt_ScreenOrientations___ior__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ScreenOrientations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ScreenOrientations *sipCpp = reinterpret_cast<Qt::ScreenOrientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ScreenOrientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        Qt::ScreenOrientations* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_Qt_ScreenOrientations, &a0, &a0State))
        {
            sipCpp->Qt::ScreenOrientations::operator|=(*a0);
            sipReleaseType(a0,sipType_Qt_ScreenOrientations,a0State);

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


extern "C" {static PyObject *slot_Qt_ScreenOrientations___iand__(PyObject *,PyObject *);}
static PyObject *slot_Qt_ScreenOrientations___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_Qt_ScreenOrientations)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    Qt::ScreenOrientations *sipCpp = reinterpret_cast<Qt::ScreenOrientations *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_Qt_ScreenOrientations));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->Qt::ScreenOrientations::operator&=(a0);

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
extern "C" {static void *cast_Qt_ScreenOrientations(void *, const sipTypeDef *);}
static void *cast_Qt_ScreenOrientations(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_Qt_ScreenOrientations)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_Qt_ScreenOrientations(void *, int);}
static void release_Qt_ScreenOrientations(void *sipCppV,int)
{
    delete reinterpret_cast<Qt::ScreenOrientations *>(sipCppV);
}


extern "C" {static void assign_Qt_ScreenOrientations(void *, SIP_SSIZE_T, const void *);}
static void assign_Qt_ScreenOrientations(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<Qt::ScreenOrientations *>(sipDst)[sipDstIdx] = *reinterpret_cast<const Qt::ScreenOrientations *>(sipSrc);
}


extern "C" {static void *array_Qt_ScreenOrientations(SIP_SSIZE_T);}
static void *array_Qt_ScreenOrientations(SIP_SSIZE_T sipNrElem)
{
    return new Qt::ScreenOrientations[sipNrElem];
}


extern "C" {static void *copy_Qt_ScreenOrientations(const void *, SIP_SSIZE_T);}
static void *copy_Qt_ScreenOrientations(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new Qt::ScreenOrientations(reinterpret_cast<const Qt::ScreenOrientations *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_Qt_ScreenOrientations(sipSimpleWrapper *);}
static void dealloc_Qt_ScreenOrientations(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_Qt_ScreenOrientations(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_Qt_ScreenOrientations(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_Qt_ScreenOrientations(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    Qt::ScreenOrientations *sipCpp = 0;

    {
        const Qt::ScreenOrientations* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_Qt_ScreenOrientations, &a0, &a0State))
        {
            sipCpp = new Qt::ScreenOrientations(*a0);
            sipReleaseType(const_cast<Qt::ScreenOrientations *>(a0),sipType_Qt_ScreenOrientations,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new Qt::ScreenOrientations(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new Qt::ScreenOrientations();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_Qt_ScreenOrientations(PyObject *, void **, int *, PyObject *);}
static int convertTo_Qt_ScreenOrientations(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    Qt::ScreenOrientations **sipCppPtr = reinterpret_cast<Qt::ScreenOrientations **>(sipCppPtrV);

#line 124 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a Qt::ScreenOrientations is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ScreenOrientation)) ||
            sipCanConvertToType(sipPy, sipType_Qt_ScreenOrientations, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_ScreenOrientation)))
{
    *sipCppPtr = new Qt::ScreenOrientations(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<Qt::ScreenOrientations *>(sipConvertToType(sipPy, sipType_Qt_ScreenOrientations, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQtScreenOrientations.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_Qt_ScreenOrientations[] = {
    {(void *)slot_Qt_ScreenOrientations___bool__, bool_slot},
    {(void *)slot_Qt_ScreenOrientations___ne__, ne_slot},
    {(void *)slot_Qt_ScreenOrientations___eq__, eq_slot},
    {(void *)slot_Qt_ScreenOrientations___invert__, invert_slot},
    {(void *)slot_Qt_ScreenOrientations___and__, and_slot},
    {(void *)slot_Qt_ScreenOrientations___xor__, xor_slot},
    {(void *)slot_Qt_ScreenOrientations___or__, or_slot},
    {(void *)slot_Qt_ScreenOrientations___int__, int_slot},
    {(void *)slot_Qt_ScreenOrientations___ixor__, ixor_slot},
    {(void *)slot_Qt_ScreenOrientations___ior__, ior_slot},
    {(void *)slot_Qt_ScreenOrientations___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_Qt_ScreenOrientations, "\1Qt.ScreenOrientations(Qt.ScreenOrientations)\n"
    "Qt.ScreenOrientations(int)\n"
    "Qt.ScreenOrientations()");


pyqt5ClassTypeDef sipTypeDef_QtCore_Qt_ScreenOrientations = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_Qt__ScreenOrientations,
        {0}
    },
    {
        sipNameNr_ScreenOrientations,
        {307, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_Qt_ScreenOrientations,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_Qt_ScreenOrientations,
    init_type_Qt_ScreenOrientations,
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
    dealloc_Qt_ScreenOrientations,
    assign_Qt_ScreenOrientations,
    array_Qt_ScreenOrientations,
    copy_Qt_ScreenOrientations,
    release_Qt_ScreenOrientations,
    cast_Qt_ScreenOrientations,
    convertTo_Qt_ScreenOrientations,
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
