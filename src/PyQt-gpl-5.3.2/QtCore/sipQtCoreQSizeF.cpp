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

#line 101 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qsize.sip"
#include <qsize.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQSizeF.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qsize.sip"
#include <qsize.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQSizeF.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQSizeF.cpp"


PyDoc_STRVAR(doc_QSizeF_transpose, "QSizeF.transpose()");

extern "C" {static PyObject *meth_QSizeF_transpose(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_transpose(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizeF, &sipCpp))
        {
            sipCpp->transpose();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_transpose, doc_QSizeF_transpose);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_scale, "QSizeF.scale(QSizeF, Qt.AspectRatioMode)\n"
    "QSizeF.scale(float, float, Qt.AspectRatioMode)");

extern "C" {static PyObject *meth_QSizeF_scale(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_scale(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        Qt::AspectRatioMode a1;
        QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9E", &sipSelf, sipType_QSizeF, &sipCpp, sipType_QSizeF, &a0, sipType_Qt_AspectRatioMode, &a1))
        {
            sipCpp->scale(*a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        qreal a0;
        qreal a1;
        Qt::AspectRatioMode a2;
        QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BddE", &sipSelf, sipType_QSizeF, &sipCpp, &a0, &a1, sipType_Qt_AspectRatioMode, &a2))
        {
            sipCpp->scale(a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_scale, doc_QSizeF_scale);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_isNull, "QSizeF.isNull() -> bool");

extern "C" {static PyObject *meth_QSizeF_isNull(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizeF, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_isNull, doc_QSizeF_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_isEmpty, "QSizeF.isEmpty() -> bool");

extern "C" {static PyObject *meth_QSizeF_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizeF, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_isEmpty, doc_QSizeF_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_isValid, "QSizeF.isValid() -> bool");

extern "C" {static PyObject *meth_QSizeF_isValid(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizeF, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_isValid, doc_QSizeF_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_width, "QSizeF.width() -> float");

extern "C" {static PyObject *meth_QSizeF_width(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_width(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizeF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->width();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_width, doc_QSizeF_width);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_height, "QSizeF.height() -> float");

extern "C" {static PyObject *meth_QSizeF_height(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_height(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizeF, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->height();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_height, doc_QSizeF_height);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_setWidth, "QSizeF.setWidth(float)");

extern "C" {static PyObject *meth_QSizeF_setWidth(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_setWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QSizeF, &sipCpp, &a0))
        {
            sipCpp->setWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_setWidth, doc_QSizeF_setWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_setHeight, "QSizeF.setHeight(float)");

extern "C" {static PyObject *meth_QSizeF_setHeight(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_setHeight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QSizeF, &sipCpp, &a0))
        {
            sipCpp->setHeight(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_setHeight, doc_QSizeF_setHeight);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_expandedTo, "QSizeF.expandedTo(QSizeF) -> QSizeF");

extern "C" {static PyObject *meth_QSizeF_expandedTo(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_expandedTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSizeF, &sipCpp, sipType_QSizeF, &a0))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->expandedTo(*a0));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_expandedTo, doc_QSizeF_expandedTo);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_boundedTo, "QSizeF.boundedTo(QSizeF) -> QSizeF");

extern "C" {static PyObject *meth_QSizeF_boundedTo(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_boundedTo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QSizeF, &sipCpp, sipType_QSizeF, &a0))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->boundedTo(*a0));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_boundedTo, doc_QSizeF_boundedTo);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_toSize, "QSizeF.toSize() -> QSize");

extern "C" {static PyObject *meth_QSizeF_toSize(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_toSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizeF, &sipCpp))
        {
            QSize*sipRes;

            sipRes = new QSize(sipCpp->toSize());

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_toSize, doc_QSizeF_toSize);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_scaled, "QSizeF.scaled(QSizeF, Qt.AspectRatioMode) -> QSizeF\n"
    "QSizeF.scaled(float, float, Qt.AspectRatioMode) -> QSizeF");

extern "C" {static PyObject *meth_QSizeF_scaled(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_scaled(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        Qt::AspectRatioMode a1;
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9E", &sipSelf, sipType_QSizeF, &sipCpp, sipType_QSizeF, &a0, sipType_Qt_AspectRatioMode, &a1))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->scaled(*a0,a1));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    {
        qreal a0;
        qreal a1;
        Qt::AspectRatioMode a2;
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BddE", &sipSelf, sipType_QSizeF, &sipCpp, &a0, &a1, sipType_Qt_AspectRatioMode, &a2))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->scaled(a0,a1,a2));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_scaled, doc_QSizeF_scaled);

    return NULL;
}


PyDoc_STRVAR(doc_QSizeF_transposed, "QSizeF.transposed() -> QSizeF");

extern "C" {static PyObject *meth_QSizeF_transposed(PyObject *, PyObject *);}
static PyObject *meth_QSizeF_transposed(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSizeF, &sipCpp))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->transposed());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSizeF, sipName_transposed, doc_QSizeF_transposed);

    return NULL;
}


extern "C" {static PyObject *slot_QSizeF___eq__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizeF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSizeF, &a0))
        {
            bool sipRes;

            sipRes = operator==((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,eq_slot,sipType_QSizeF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSizeF___ne__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizeF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSizeF, &a0))
        {
            bool sipRes;

            sipRes = operator!=((*sipCpp), *a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,ne_slot,sipType_QSizeF,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QSizeF___add__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        const QSizeF* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QSizeF, &a0, sipType_QSizeF, &a1))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,add_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizeF___sub__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        const QSizeF* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_QSizeF, &a0, sipType_QSizeF, &a1))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,sub_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizeF___mul__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QSizeF, &a0, &a1))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    {
        qreal a0;
        const QSizeF* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "dJ9", &a0, sipType_QSizeF, &a1))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF((a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,mul_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizeF___div__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;
        qreal a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_QSizeF, &a0, &a1))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtCore,div_slot,NULL,sipArg0,sipArg1);
}


extern "C" {static PyObject *slot_QSizeF___idiv__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizeF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizeF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QSizeF::operator/=(a0);

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


extern "C" {static PyObject *slot_QSizeF___imul__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizeF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizeF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        qreal a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp->QSizeF::operator*=(a0);

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


extern "C" {static PyObject *slot_QSizeF___isub__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizeF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizeF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSizeF, &a0))
        {
            sipCpp->QSizeF::operator-=(*a0);

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


extern "C" {static PyObject *slot_QSizeF___iadd__(PyObject *,PyObject *);}
static PyObject *slot_QSizeF___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_QSizeF)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizeF));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QSizeF* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QSizeF, &a0))
        {
            sipCpp->QSizeF::operator+=(*a0);

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


extern "C" {static int slot_QSizeF___bool__(PyObject *);}
static int slot_QSizeF___bool__(PyObject *sipSelf)
{
    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizeF));

    if (!sipCpp)
        return -1;


    {
        {
            int sipRes = 0;

#line 152 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qsize.sip"
        sipRes = sipCpp->isValid();
#line 819 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQSizeF.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_QSizeF___repr__(PyObject *);}
static PyObject *slot_QSizeF___repr__(PyObject *sipSelf)
{
    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QSizeF));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 116 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qsize.sip"
        if (sipCpp->isNull())
        {
        #if PY_MAJOR_VERSION >= 3
            sipRes = PyUnicode_FromString("PyQt5.QtCore.QSizeF()");
        #else
            sipRes = PyString_FromString("PyQt5.QtCore.QSizeF()");
        #endif
        }
        else
        {
            PyObject *w = PyFloat_FromDouble(sipCpp->width());
            PyObject *h = PyFloat_FromDouble(sipCpp->height());
        
            if (w && h)
            {
        #if PY_MAJOR_VERSION >= 3
                sipRes = PyUnicode_FromFormat("PyQt5.QtCore.QSizeF(%R, %R)", w, h);
        #else
                sipRes = PyString_FromString("PyQt5.QtCore.QSizeF(");
                PyString_ConcatAndDel(&sipRes, PyObject_Repr(w));
                PyString_ConcatAndDel(&sipRes, PyString_FromString(", "));
                PyString_ConcatAndDel(&sipRes, PyObject_Repr(h));
                PyString_ConcatAndDel(&sipRes, PyString_FromString(")"));
        #endif
            }
        
            Py_XDECREF(w);
            Py_XDECREF(h);
        }
#line 872 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQSizeF.cpp"

            return sipRes;
        }
    }

    return 0;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSizeF(void *, const sipTypeDef *);}
static void *cast_QSizeF(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QSizeF)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSizeF(void *, int);}
static void release_QSizeF(void *sipCppV,int)
{
    delete reinterpret_cast<QSizeF *>(sipCppV);
}


extern "C" {static PyObject *pickle_QSizeF(void *);}
static PyObject *pickle_QSizeF(void *sipCppV)
{
    QSizeF *sipCpp = reinterpret_cast<QSizeF *>(sipCppV);
    PyObject *sipRes;

#line 105 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qsize.sip"
    sipRes = Py_BuildValue((char *)"dd", sipCpp->width(), sipCpp->height());
#line 909 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQSizeF.cpp"

    return sipRes;
}


extern "C" {static void assign_QSizeF(void *, SIP_SSIZE_T, const void *);}
static void assign_QSizeF(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QSizeF *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QSizeF *>(sipSrc);
}


extern "C" {static void *array_QSizeF(SIP_SSIZE_T);}
static void *array_QSizeF(SIP_SSIZE_T sipNrElem)
{
    return new QSizeF[sipNrElem];
}


extern "C" {static void *copy_QSizeF(const void *, SIP_SSIZE_T);}
static void *copy_QSizeF(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QSizeF(reinterpret_cast<const QSizeF *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QSizeF(sipSimpleWrapper *);}
static void dealloc_QSizeF(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QSizeF(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QSizeF(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSizeF(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QSizeF *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QSizeF();

            return sipCpp;
        }
    }

    {
        const QSize* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSize, &a0))
        {
            sipCpp = new QSizeF(*a0);

            return sipCpp;
        }
    }

    {
        qreal a0;
        qreal a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dd", &a0, &a1))
        {
            sipCpp = new QSizeF(a0,a1);

            return sipCpp;
        }
    }

    {
        const QSizeF* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QSizeF, &a0))
        {
            sipCpp = new QSizeF(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QSizeF[] = {
    {(void *)slot_QSizeF___eq__, eq_slot},
    {(void *)slot_QSizeF___ne__, ne_slot},
    {(void *)slot_QSizeF___add__, add_slot},
    {(void *)slot_QSizeF___sub__, sub_slot},
    {(void *)slot_QSizeF___mul__, mul_slot},
    {(void *)slot_QSizeF___div__, div_slot},
    {(void *)slot_QSizeF___idiv__, idiv_slot},
    {(void *)slot_QSizeF___imul__, imul_slot},
    {(void *)slot_QSizeF___isub__, isub_slot},
    {(void *)slot_QSizeF___iadd__, iadd_slot},
    {(void *)slot_QSizeF___bool__, bool_slot},
    {(void *)slot_QSizeF___repr__, repr_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QSizeF[] = {
    {SIP_MLNAME_CAST(sipName_boundedTo), meth_QSizeF_boundedTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_boundedTo)},
    {SIP_MLNAME_CAST(sipName_expandedTo), meth_QSizeF_expandedTo, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_expandedTo)},
    {SIP_MLNAME_CAST(sipName_height), meth_QSizeF_height, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_height)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QSizeF_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QSizeF_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_isNull)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QSizeF_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_isValid)},
    {SIP_MLNAME_CAST(sipName_scale), meth_QSizeF_scale, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_scale)},
    {SIP_MLNAME_CAST(sipName_scaled), meth_QSizeF_scaled, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_scaled)},
    {SIP_MLNAME_CAST(sipName_setHeight), meth_QSizeF_setHeight, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_setHeight)},
    {SIP_MLNAME_CAST(sipName_setWidth), meth_QSizeF_setWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_setWidth)},
    {SIP_MLNAME_CAST(sipName_toSize), meth_QSizeF_toSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_toSize)},
    {SIP_MLNAME_CAST(sipName_transpose), meth_QSizeF_transpose, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_transpose)},
    {SIP_MLNAME_CAST(sipName_transposed), meth_QSizeF_transposed, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_transposed)},
    {SIP_MLNAME_CAST(sipName_width), meth_QSizeF_width, METH_VARARGS, SIP_MLDOC_CAST(doc_QSizeF_width)}
};

PyDoc_STRVAR(doc_QSizeF, "\1QSizeF()\n"
    "QSizeF(QSize)\n"
    "QSizeF(float, float)\n"
    "QSizeF(QSizeF)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QSizeF = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSizeF,
        {0}
    },
    {
        sipNameNr_QSizeF,
        {0, 0, 1},
        14, methods_QSizeF,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSizeF,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QSizeF,
    init_type_QSizeF,
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
    dealloc_QSizeF,
    assign_QSizeF,
    array_QSizeF,
    copy_QSizeF,
    release_QSizeF,
    cast_QSizeF,
    0,
    0,
    0,
    pickle_QSizeF,
    0,
    0
},
    0,
    0,
    0,
    0
};
