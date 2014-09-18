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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"


extern "C" {static int slot_QRegularExpression_PatternOptions___bool__(PyObject *);}
static int slot_QRegularExpression_PatternOptions___bool__(PyObject *sipSelf)
{
    QRegularExpression::PatternOptions *sipCpp = reinterpret_cast<QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::PatternOptions::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___ne__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QRegularExpression::PatternOptions *sipCpp = reinterpret_cast<QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QRegularExpression::PatternOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::PatternOptions::Int() != a0->operator QRegularExpression::PatternOptions::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"
            sipReleaseType(const_cast<QRegularExpression::PatternOptions *>(a0),sipType_QRegularExpression_PatternOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QRegularExpression_PatternOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___eq__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QRegularExpression::PatternOptions *sipCpp = reinterpret_cast<QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QRegularExpression::PatternOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QRegularExpression::PatternOptions::Int() == a0->operator QRegularExpression::PatternOptions::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"
            sipReleaseType(const_cast<QRegularExpression::PatternOptions *>(a0),sipType_QRegularExpression_PatternOptions,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QRegularExpression_PatternOptions,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___invert__(PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___invert__(PyObject *sipSelf)
{
    QRegularExpression::PatternOptions *sipCpp = reinterpret_cast<QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return 0;


    {
        {
            QRegularExpression::PatternOptions*sipRes;

            sipRes = new QRegularExpression::PatternOptions(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___and__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpression::PatternOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_PatternOptions, &a0, &a0State, &a1))
        {
            QRegularExpression::PatternOptions*sipRes;

            sipRes = new QRegularExpression::PatternOptions((*a0 & a1));
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___xor__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpression::PatternOptions* a0;
        int a0State = 0;
        QRegularExpression::PatternOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State, sipType_QRegularExpression_PatternOptions, &a1, &a1State))
        {
            QRegularExpression::PatternOptions*sipRes;

            sipRes = new QRegularExpression::PatternOptions((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);
            sipReleaseType(a1,sipType_QRegularExpression_PatternOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,NULL);
        }
    }

    {
        QRegularExpression::PatternOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_PatternOptions, &a0, &a0State, &a1))
        {
            QRegularExpression::PatternOptions*sipRes = 0;

#line 103 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = new QRegularExpression::PatternOptions(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___or__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpression::PatternOptions* a0;
        int a0State = 0;
        QRegularExpression::PatternOptions* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State, sipType_QRegularExpression_PatternOptions, &a1, &a1State))
        {
            QRegularExpression::PatternOptions*sipRes;

            sipRes = new QRegularExpression::PatternOptions((*a0 | *a1));
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);
            sipReleaseType(a1,sipType_QRegularExpression_PatternOptions,a1State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,NULL);
        }
    }

    {
        QRegularExpression::PatternOptions* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QRegularExpression_PatternOptions, &a0, &a0State, &a1))
        {
            QRegularExpression::PatternOptions*sipRes = 0;

#line 98 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = new QRegularExpression::PatternOptions(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_PatternOptions,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___int__(PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___int__(PyObject *sipSelf)
{
    QRegularExpression::PatternOptions *sipCpp = reinterpret_cast<QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

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


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QRegularExpression::PatternOptions *sipCpp = reinterpret_cast<QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QRegularExpression::PatternOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            sipCpp->QRegularExpression::PatternOptions::operator^=(*a0);
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

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


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___ior__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QRegularExpression::PatternOptions *sipCpp = reinterpret_cast<QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QRegularExpression::PatternOptions* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            sipCpp->QRegularExpression::PatternOptions::operator|=(*a0);
            sipReleaseType(a0,sipType_QRegularExpression_PatternOptions,a0State);

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


extern "C" {static PyObject *slot_QRegularExpression_PatternOptions___iand__(PyObject *,PyObject *);}
static PyObject *slot_QRegularExpression_PatternOptions___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOptions)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QRegularExpression::PatternOptions *sipCpp = reinterpret_cast<QRegularExpression::PatternOptions *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QRegularExpression_PatternOptions));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QRegularExpression::PatternOptions::operator&=(a0);

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
extern "C" {static void *cast_QRegularExpression_PatternOptions(void *, const sipTypeDef *);}
static void *cast_QRegularExpression_PatternOptions(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QRegularExpression_PatternOptions)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegularExpression_PatternOptions(void *, int);}
static void release_QRegularExpression_PatternOptions(void *sipCppV,int)
{
    delete reinterpret_cast<QRegularExpression::PatternOptions *>(sipCppV);
}


extern "C" {static void assign_QRegularExpression_PatternOptions(void *, SIP_SSIZE_T, const void *);}
static void assign_QRegularExpression_PatternOptions(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QRegularExpression::PatternOptions *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QRegularExpression::PatternOptions *>(sipSrc);
}


extern "C" {static void *array_QRegularExpression_PatternOptions(SIP_SSIZE_T);}
static void *array_QRegularExpression_PatternOptions(SIP_SSIZE_T sipNrElem)
{
    return new QRegularExpression::PatternOptions[sipNrElem];
}


extern "C" {static void *copy_QRegularExpression_PatternOptions(const void *, SIP_SSIZE_T);}
static void *copy_QRegularExpression_PatternOptions(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QRegularExpression::PatternOptions(reinterpret_cast<const QRegularExpression::PatternOptions *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegularExpression_PatternOptions(sipSimpleWrapper *);}
static void dealloc_QRegularExpression_PatternOptions(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QRegularExpression_PatternOptions(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QRegularExpression_PatternOptions(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpression_PatternOptions(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QRegularExpression::PatternOptions *sipCpp = 0;

    {
        const QRegularExpression::PatternOptions* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QRegularExpression_PatternOptions, &a0, &a0State))
        {
            sipCpp = new QRegularExpression::PatternOptions(*a0);
            sipReleaseType(const_cast<QRegularExpression::PatternOptions *>(a0),sipType_QRegularExpression_PatternOptions,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QRegularExpression::PatternOptions(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QRegularExpression::PatternOptions();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QRegularExpression_PatternOptions(PyObject *, void **, int *, PyObject *);}
static int convertTo_QRegularExpression_PatternOptions(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QRegularExpression::PatternOptions **sipCppPtr = reinterpret_cast<QRegularExpression::PatternOptions **>(sipCppPtrV);

#line 124 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QRegularExpression::PatternOptions is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOption)) ||
            sipCanConvertToType(sipPy, sipType_QRegularExpression_PatternOptions, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QRegularExpression_PatternOption)))
{
    *sipCppPtr = new QRegularExpression::PatternOptions(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QRegularExpression::PatternOptions *>(sipConvertToType(sipPy, sipType_QRegularExpression_PatternOptions, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionPatternOptions.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QRegularExpression_PatternOptions[] = {
    {(void *)slot_QRegularExpression_PatternOptions___bool__, bool_slot},
    {(void *)slot_QRegularExpression_PatternOptions___ne__, ne_slot},
    {(void *)slot_QRegularExpression_PatternOptions___eq__, eq_slot},
    {(void *)slot_QRegularExpression_PatternOptions___invert__, invert_slot},
    {(void *)slot_QRegularExpression_PatternOptions___and__, and_slot},
    {(void *)slot_QRegularExpression_PatternOptions___xor__, xor_slot},
    {(void *)slot_QRegularExpression_PatternOptions___or__, or_slot},
    {(void *)slot_QRegularExpression_PatternOptions___int__, int_slot},
    {(void *)slot_QRegularExpression_PatternOptions___ixor__, ixor_slot},
    {(void *)slot_QRegularExpression_PatternOptions___ior__, ior_slot},
    {(void *)slot_QRegularExpression_PatternOptions___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QRegularExpression_PatternOptions, "\1QRegularExpression.PatternOptions(QRegularExpression.PatternOptions)\n"
    "QRegularExpression.PatternOptions(int)\n"
    "QRegularExpression.PatternOptions()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QRegularExpression_PatternOptions = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpression__PatternOptions,
        {0}
    },
    {
        sipNameNr_PatternOptions,
        {186, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRegularExpression_PatternOptions,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QRegularExpression_PatternOptions,
    init_type_QRegularExpression_PatternOptions,
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
    dealloc_QRegularExpression_PatternOptions,
    assign_QRegularExpression_PatternOptions,
    array_QRegularExpression_PatternOptions,
    copy_QRegularExpression_PatternOptions,
    release_QRegularExpression_PatternOptions,
    cast_QRegularExpression_PatternOptions,
    convertTo_QRegularExpression_PatternOptions,
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
