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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qtextboundaryfinder.sip"
#include <qtextboundaryfinder.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qtextboundaryfinder.sip"
#include <qtextboundaryfinder.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"


extern "C" {static int slot_QTextBoundaryFinder_BoundaryReasons___bool__(PyObject *);}
static int slot_QTextBoundaryFinder_BoundaryReasons___bool__(PyObject *sipSelf)
{
    QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextBoundaryFinder::BoundaryReasons::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ne__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextBoundaryFinder::BoundaryReasons::Int() != a0->operator QTextBoundaryFinder::BoundaryReasons::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"
            sipReleaseType(const_cast<QTextBoundaryFinder::BoundaryReasons *>(a0),sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QTextBoundaryFinder_BoundaryReasons,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___eq__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QTextBoundaryFinder::BoundaryReasons::Int() == a0->operator QTextBoundaryFinder::BoundaryReasons::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"
            sipReleaseType(const_cast<QTextBoundaryFinder::BoundaryReasons *>(a0),sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QTextBoundaryFinder_BoundaryReasons,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___invert__(PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___invert__(PyObject *sipSelf)
{
    QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return 0;


    {
        {
            QTextBoundaryFinder::BoundaryReasons*sipRes;

            sipRes = new QTextBoundaryFinder::BoundaryReasons(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___and__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State, &a1))
        {
            QTextBoundaryFinder::BoundaryReasons*sipRes;

            sipRes = new QTextBoundaryFinder::BoundaryReasons((*a0 & a1));
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___xor__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;
        QTextBoundaryFinder::BoundaryReasons* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State, sipType_QTextBoundaryFinder_BoundaryReasons, &a1, &a1State))
        {
            QTextBoundaryFinder::BoundaryReasons*sipRes;

            sipRes = new QTextBoundaryFinder::BoundaryReasons((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);
            sipReleaseType(a1,sipType_QTextBoundaryFinder_BoundaryReasons,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,NULL);
        }
    }

    {
        QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State, &a1))
        {
            QTextBoundaryFinder::BoundaryReasons*sipRes = 0;

#line 103 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = new QTextBoundaryFinder::BoundaryReasons(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___or__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;
        QTextBoundaryFinder::BoundaryReasons* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State, sipType_QTextBoundaryFinder_BoundaryReasons, &a1, &a1State))
        {
            QTextBoundaryFinder::BoundaryReasons*sipRes;

            sipRes = new QTextBoundaryFinder::BoundaryReasons((*a0 | *a1));
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);
            sipReleaseType(a1,sipType_QTextBoundaryFinder_BoundaryReasons,a1State);

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,NULL);
        }
    }

    {
        QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State, &a1))
        {
            QTextBoundaryFinder::BoundaryReasons*sipRes = 0;

#line 98 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
        sipRes = new QTextBoundaryFinder::BoundaryReasons(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return sipConvertFromNewType(sipRes,sipType_QTextBoundaryFinder_BoundaryReasons,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___int__(PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___int__(PyObject *sipSelf)
{
    QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

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


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReasons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State))
        {
            sipCpp->QTextBoundaryFinder::BoundaryReasons::operator^=(*a0);
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

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


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ior__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReasons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State))
        {
            sipCpp->QTextBoundaryFinder::BoundaryReasons::operator|=(*a0);
            sipReleaseType(a0,sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

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


extern "C" {static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___iand__(PyObject *,PyObject *);}
static PyObject *slot_QTextBoundaryFinder_BoundaryReasons___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReasons)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QTextBoundaryFinder::BoundaryReasons *sipCpp = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QTextBoundaryFinder_BoundaryReasons));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QTextBoundaryFinder::BoundaryReasons::operator&=(a0);

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
extern "C" {static void *cast_QTextBoundaryFinder_BoundaryReasons(void *, const sipTypeDef *);}
static void *cast_QTextBoundaryFinder_BoundaryReasons(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextBoundaryFinder_BoundaryReasons)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextBoundaryFinder_BoundaryReasons(void *, int);}
static void release_QTextBoundaryFinder_BoundaryReasons(void *sipCppV,int)
{
    delete reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipCppV);
}


extern "C" {static void assign_QTextBoundaryFinder_BoundaryReasons(void *, SIP_SSIZE_T, const void *);}
static void assign_QTextBoundaryFinder_BoundaryReasons(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QTextBoundaryFinder::BoundaryReasons *>(sipSrc);
}


extern "C" {static void *array_QTextBoundaryFinder_BoundaryReasons(SIP_SSIZE_T);}
static void *array_QTextBoundaryFinder_BoundaryReasons(SIP_SSIZE_T sipNrElem)
{
    return new QTextBoundaryFinder::BoundaryReasons[sipNrElem];
}


extern "C" {static void *copy_QTextBoundaryFinder_BoundaryReasons(const void *, SIP_SSIZE_T);}
static void *copy_QTextBoundaryFinder_BoundaryReasons(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QTextBoundaryFinder::BoundaryReasons(reinterpret_cast<const QTextBoundaryFinder::BoundaryReasons *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QTextBoundaryFinder_BoundaryReasons(sipSimpleWrapper *);}
static void dealloc_QTextBoundaryFinder_BoundaryReasons(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QTextBoundaryFinder_BoundaryReasons(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QTextBoundaryFinder_BoundaryReasons(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextBoundaryFinder_BoundaryReasons(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QTextBoundaryFinder::BoundaryReasons *sipCpp = 0;

    {
        const QTextBoundaryFinder::BoundaryReasons* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QTextBoundaryFinder_BoundaryReasons, &a0, &a0State))
        {
            sipCpp = new QTextBoundaryFinder::BoundaryReasons(*a0);
            sipReleaseType(const_cast<QTextBoundaryFinder::BoundaryReasons *>(a0),sipType_QTextBoundaryFinder_BoundaryReasons,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QTextBoundaryFinder::BoundaryReasons(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QTextBoundaryFinder::BoundaryReasons();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QTextBoundaryFinder_BoundaryReasons(PyObject *, void **, int *, PyObject *);}
static int convertTo_QTextBoundaryFinder_BoundaryReasons(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QTextBoundaryFinder::BoundaryReasons **sipCppPtr = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons **>(sipCppPtrV);

#line 124 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QTextBoundaryFinder::BoundaryReasons is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReason)) ||
            sipCanConvertToType(sipPy, sipType_QTextBoundaryFinder_BoundaryReasons, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QTextBoundaryFinder_BoundaryReason)))
{
    *sipCppPtr = new QTextBoundaryFinder::BoundaryReasons(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QTextBoundaryFinder::BoundaryReasons *>(sipConvertToType(sipPy, sipType_QTextBoundaryFinder_BoundaryReasons, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQTextBoundaryFinderBoundaryReasons.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QTextBoundaryFinder_BoundaryReasons[] = {
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___bool__, bool_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___ne__, ne_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___eq__, eq_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___invert__, invert_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___and__, and_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___xor__, xor_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___or__, or_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___int__, int_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___ixor__, ixor_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___ior__, ior_slot},
    {(void *)slot_QTextBoundaryFinder_BoundaryReasons___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QTextBoundaryFinder_BoundaryReasons, "\1QTextBoundaryFinder.BoundaryReasons(QTextBoundaryFinder.BoundaryReasons)\n"
    "QTextBoundaryFinder.BoundaryReasons(int)\n"
    "QTextBoundaryFinder.BoundaryReasons()");


pyqt5ClassTypeDef sipTypeDef_QtCore_QTextBoundaryFinder_BoundaryReasons = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextBoundaryFinder__BoundaryReasons,
        {0}
    },
    {
        sipNameNr_BoundaryReasons,
        {240, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextBoundaryFinder_BoundaryReasons,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QTextBoundaryFinder_BoundaryReasons,
    init_type_QTextBoundaryFinder_BoundaryReasons,
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
    dealloc_QTextBoundaryFinder_BoundaryReasons,
    assign_QTextBoundaryFinder_BoundaryReasons,
    array_QTextBoundaryFinder_BoundaryReasons,
    copy_QTextBoundaryFinder_BoundaryReasons,
    release_QTextBoundaryFinder_BoundaryReasons,
    cast_QTextBoundaryFinder_BoundaryReasons,
    convertTo_QTextBoundaryFinder_BoundaryReasons,
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
