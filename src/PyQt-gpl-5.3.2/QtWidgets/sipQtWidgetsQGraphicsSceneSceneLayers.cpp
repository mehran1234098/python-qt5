/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:33 2014
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

#include "sipAPIQtWidgets.h"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWidgets/qgraphicsscene.sip"
#include <qgraphicsscene.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWidgets/qgraphicsscene.sip"
#include <qgraphicsscene.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"


extern "C" {static int slot_QGraphicsScene_SceneLayers___bool__(PyObject *);}
static int slot_QGraphicsScene_SceneLayers___bool__(PyObject *sipSelf)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 119 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() != 0);
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 114 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() != a0->operator QGraphicsScene::SceneLayers::Int());
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(const_cast<QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,ne_slot,sipType_QGraphicsScene_SceneLayers,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            bool sipRes = 0;

#line 109 "sip/QtCore/qglobal.sip"
        sipRes = (sipCpp->operator QGraphicsScene::SceneLayers::Int() == a0->operator QGraphicsScene::SceneLayers::Int());
#line 117 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(const_cast<QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,eq_slot,sipType_QGraphicsScene_SceneLayers,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___invert__(PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___invert__(PyObject *sipSelf)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;


    {
        {
            QGraphicsScene::SceneLayers*sipRes;

            sipRes = new QGraphicsScene::SceneLayers(~(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___and__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___and__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
            QGraphicsScene::SceneLayers*sipRes;

            sipRes = new QGraphicsScene::SceneLayers((*a0 & a1));
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,and_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___xor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___xor__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        QGraphicsScene::SceneLayers* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, sipType_QGraphicsScene_SceneLayers, &a1, &a1State))
        {
            QGraphicsScene::SceneLayers*sipRes;

            sipRes = new QGraphicsScene::SceneLayers((*a0 ^ *a1));
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);
            sipReleaseType(a1,sipType_QGraphicsScene_SceneLayers,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
            QGraphicsScene::SceneLayers*sipRes = 0;

#line 103 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsScene::SceneLayers(*a0 ^ a1);
#line 220 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,xor_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___or__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___or__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        QGraphicsScene::SceneLayers* a1;
        int a1State = 0;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, sipType_QGraphicsScene_SceneLayers, &a1, &a1State))
        {
            QGraphicsScene::SceneLayers*sipRes;

            sipRes = new QGraphicsScene::SceneLayers((*a0 | *a1));
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);
            sipReleaseType(a1,sipType_QGraphicsScene_SceneLayers,a1State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;
        int a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J1i", sipType_QGraphicsScene_SceneLayers, &a0, &a0State, &a1))
        {
            QGraphicsScene::SceneLayers*sipRes = 0;

#line 98 "sip/QtCore/qglobal.sip"
        sipRes = new QGraphicsScene::SceneLayers(*a0 | a1);
#line 270 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

            return sipConvertFromNewType(sipRes,sipType_QGraphicsScene_SceneLayers,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtWidgets,or_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___int__(PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___int__(PyObject *sipSelf)
{
    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

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


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ixor__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ixor__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            sipCpp->QGraphicsScene::SceneLayers::operator^=(*a0);
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

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


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___ior__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___ior__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            sipCpp->QGraphicsScene::SceneLayers::operator|=(*a0);
            sipReleaseType(a0,sipType_QGraphicsScene_SceneLayers,a0State);

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


extern "C" {static PyObject *slot_QGraphicsScene_SceneLayers___iand__(PyObject *,PyObject *);}
static PyObject *slot_QGraphicsScene_SceneLayers___iand__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayers)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QGraphicsScene::SceneLayers *sipCpp = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGraphicsScene_SceneLayers));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            sipCpp->QGraphicsScene::SceneLayers::operator&=(a0);

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
extern "C" {static void *cast_QGraphicsScene_SceneLayers(void *, const sipTypeDef *);}
static void *cast_QGraphicsScene_SceneLayers(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGraphicsScene_SceneLayers)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsScene_SceneLayers(void *, int);}
static void release_QGraphicsScene_SceneLayers(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsScene::SceneLayers *>(sipCppV);
}


extern "C" {static void assign_QGraphicsScene_SceneLayers(void *, SIP_SSIZE_T, const void *);}
static void assign_QGraphicsScene_SceneLayers(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGraphicsScene::SceneLayers *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGraphicsScene::SceneLayers *>(sipSrc);
}


extern "C" {static void *array_QGraphicsScene_SceneLayers(SIP_SSIZE_T);}
static void *array_QGraphicsScene_SceneLayers(SIP_SSIZE_T sipNrElem)
{
    return new QGraphicsScene::SceneLayers[sipNrElem];
}


extern "C" {static void *copy_QGraphicsScene_SceneLayers(const void *, SIP_SSIZE_T);}
static void *copy_QGraphicsScene_SceneLayers(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGraphicsScene::SceneLayers(reinterpret_cast<const QGraphicsScene::SceneLayers *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGraphicsScene_SceneLayers(sipSimpleWrapper *);}
static void dealloc_QGraphicsScene_SceneLayers(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsScene_SceneLayers(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGraphicsScene_SceneLayers(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGraphicsScene_SceneLayers(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGraphicsScene::SceneLayers *sipCpp = 0;

    {
        const QGraphicsScene::SceneLayers* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QGraphicsScene_SceneLayers, &a0, &a0State))
        {
            sipCpp = new QGraphicsScene::SceneLayers(*a0);
            sipReleaseType(const_cast<QGraphicsScene::SceneLayers *>(a0),sipType_QGraphicsScene_SceneLayers,a0State);

            return sipCpp;
        }
    }

    {
        int a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "i", &a0))
        {
            sipCpp = new QGraphicsScene::SceneLayers(a0);

            return sipCpp;
        }
    }

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGraphicsScene::SceneLayers();

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QGraphicsScene_SceneLayers(PyObject *, void **, int *, PyObject *);}
static int convertTo_QGraphicsScene_SceneLayers(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QGraphicsScene::SceneLayers **sipCppPtr = reinterpret_cast<QGraphicsScene::SceneLayers **>(sipCppPtrV);

#line 124 "sip/QtCore/qglobal.sip"
// Allow an instance of the base enum whenever a QGraphicsScene::SceneLayers is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayer)) ||
            sipCanConvertToType(sipPy, sipType_QGraphicsScene_SceneLayers, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_QGraphicsScene_SceneLayer)))
{
    *sipCppPtr = new QGraphicsScene::SceneLayers(int(SIPLong_AsLong(sipPy)));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QGraphicsScene::SceneLayers *>(sipConvertToType(sipPy, sipType_QGraphicsScene_SceneLayers, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 547 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneSceneLayers.cpp"
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGraphicsScene_SceneLayers[] = {
    {(void *)slot_QGraphicsScene_SceneLayers___bool__, bool_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ne__, ne_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___eq__, eq_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___invert__, invert_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___and__, and_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___xor__, xor_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___or__, or_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___int__, int_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ixor__, ixor_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___ior__, ior_slot},
    {(void *)slot_QGraphicsScene_SceneLayers___iand__, iand_slot},
    {0, (sipPySlotType)0}
};

PyDoc_STRVAR(doc_QGraphicsScene_SceneLayers, "\1QGraphicsScene.SceneLayers(QGraphicsScene.SceneLayers)\n"
    "QGraphicsScene.SceneLayers(int)\n"
    "QGraphicsScene.SceneLayers()");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsScene_SceneLayers = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsScene__SceneLayers,
        {0}
    },
    {
        sipNameNr_SceneLayers,
        {142, 255, 0},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGraphicsScene_SceneLayers,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGraphicsScene_SceneLayers,
    init_type_QGraphicsScene_SceneLayers,
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
    dealloc_QGraphicsScene_SceneLayers,
    assign_QGraphicsScene_SceneLayers,
    array_QGraphicsScene_SceneLayers,
    copy_QGraphicsScene_SceneLayers,
    release_QGraphicsScene_SceneLayers,
    cast_QGraphicsScene_SceneLayers,
    convertTo_QGraphicsScene_SceneLayers,
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
