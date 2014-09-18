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

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qglyphrun.sip"
#include <qglyphrun.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQGlyphRun.cpp"

#line 165 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQGlyphRun.cpp"
#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qglyphrun.sip"
#include <qglyphrun.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQGlyphRun.cpp"
#line 26 "sip/QtCore/qpycore_qvector.sip"
#include <qvector.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQGlyphRun.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQGlyphRun.cpp"
#line 25 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qpygui_qvector.sip"
#include <qvector.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQGlyphRun.cpp"
#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qrawfont.sip"
#include <qrawfont.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQGlyphRun.cpp"


PyDoc_STRVAR(doc_QGlyphRun_rawFont, "QGlyphRun.rawFont() -> QRawFont");

extern "C" {static PyObject *meth_QGlyphRun_rawFont(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_rawFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            QRawFont*sipRes;

            sipRes = new QRawFont(sipCpp->rawFont());

            return sipConvertFromNewType(sipRes,sipType_QRawFont,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_rawFont, doc_QGlyphRun_rawFont);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setRawFont, "QGlyphRun.setRawFont(QRawFont)");

extern "C" {static PyObject *meth_QGlyphRun_setRawFont(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setRawFont(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRawFont* a0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QRawFont, &a0))
        {
            sipCpp->setRawFont(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setRawFont, doc_QGlyphRun_setRawFont);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_glyphIndexes, "QGlyphRun.glyphIndexes() -> list-of-int");

extern "C" {static PyObject *meth_QGlyphRun_glyphIndexes(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_glyphIndexes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            QVector<uint>*sipRes;

            sipRes = new QVector<uint>(sipCpp->glyphIndexes());

            return sipConvertFromNewType(sipRes,sipType_QVector_1900,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_glyphIndexes, doc_QGlyphRun_glyphIndexes);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setGlyphIndexes, "QGlyphRun.setGlyphIndexes(list-of-int)");

extern "C" {static PyObject *meth_QGlyphRun_setGlyphIndexes(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setGlyphIndexes(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector<uint>* a0;
        int a0State = 0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QVector_1900,&a0, &a0State))
        {
            sipCpp->setGlyphIndexes(*a0);
            sipReleaseType(const_cast<QVector<uint> *>(a0),sipType_QVector_1900,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setGlyphIndexes, doc_QGlyphRun_setGlyphIndexes);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_positions, "QGlyphRun.positions() -> list-of-QPointF");

extern "C" {static PyObject *meth_QGlyphRun_positions(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_positions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            QVector<QPointF>*sipRes;

            sipRes = new QVector<QPointF>(sipCpp->positions());

            return sipConvertFromNewType(sipRes,sipType_QVector_0100QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_positions, doc_QGlyphRun_positions);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setPositions, "QGlyphRun.setPositions(list-of-QPointF)");

extern "C" {static PyObject *meth_QGlyphRun_setPositions(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setPositions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVector<QPointF>* a0;
        int a0State = 0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QVector_0100QPointF,&a0, &a0State))
        {
            sipCpp->setPositions(*a0);
            sipReleaseType(const_cast<QVector<QPointF> *>(a0),sipType_QVector_0100QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setPositions, doc_QGlyphRun_setPositions);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_clear, "QGlyphRun.clear()");

extern "C" {static PyObject *meth_QGlyphRun_clear(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_clear, doc_QGlyphRun_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setOverline, "QGlyphRun.setOverline(bool)");

extern "C" {static PyObject *meth_QGlyphRun_setOverline(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setOverline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGlyphRun, &sipCpp, &a0))
        {
            sipCpp->setOverline(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setOverline, doc_QGlyphRun_setOverline);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_overline, "QGlyphRun.overline() -> bool");

extern "C" {static PyObject *meth_QGlyphRun_overline(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_overline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->overline();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_overline, doc_QGlyphRun_overline);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setUnderline, "QGlyphRun.setUnderline(bool)");

extern "C" {static PyObject *meth_QGlyphRun_setUnderline(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setUnderline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGlyphRun, &sipCpp, &a0))
        {
            sipCpp->setUnderline(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setUnderline, doc_QGlyphRun_setUnderline);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_underline, "QGlyphRun.underline() -> bool");

extern "C" {static PyObject *meth_QGlyphRun_underline(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_underline(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->underline();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_underline, doc_QGlyphRun_underline);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setStrikeOut, "QGlyphRun.setStrikeOut(bool)");

extern "C" {static PyObject *meth_QGlyphRun_setStrikeOut(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setStrikeOut(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGlyphRun, &sipCpp, &a0))
        {
            sipCpp->setStrikeOut(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setStrikeOut, doc_QGlyphRun_setStrikeOut);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_strikeOut, "QGlyphRun.strikeOut() -> bool");

extern "C" {static PyObject *meth_QGlyphRun_strikeOut(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_strikeOut(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->strikeOut();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_strikeOut, doc_QGlyphRun_strikeOut);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setRightToLeft, "QGlyphRun.setRightToLeft(bool)");

extern "C" {static PyObject *meth_QGlyphRun_setRightToLeft(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setRightToLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QGlyphRun, &sipCpp, &a0))
        {
            sipCpp->setRightToLeft(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setRightToLeft, doc_QGlyphRun_setRightToLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_isRightToLeft, "QGlyphRun.isRightToLeft() -> bool");

extern "C" {static PyObject *meth_QGlyphRun_isRightToLeft(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_isRightToLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isRightToLeft();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_isRightToLeft, doc_QGlyphRun_isRightToLeft);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setFlag, "QGlyphRun.setFlag(QGlyphRun.GlyphRunFlag, bool enabled=True)");

extern "C" {static PyObject *meth_QGlyphRun_setFlag(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setFlag(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        QGlyphRun::GlyphRunFlag a0;
        bool a1 = 1;
        QGlyphRun *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_enabled,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BE|b", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QGlyphRun_GlyphRunFlag, &a0, &a1))
        {
            sipCpp->setFlag(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setFlag, doc_QGlyphRun_setFlag);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setFlags, "QGlyphRun.setFlags(QGlyphRun.GlyphRunFlags)");

extern "C" {static PyObject *meth_QGlyphRun_setFlags(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setFlags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGlyphRun::GlyphRunFlags* a0;
        int a0State = 0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QGlyphRun_GlyphRunFlags, &a0, &a0State))
        {
            sipCpp->setFlags(*a0);
            sipReleaseType(a0,sipType_QGlyphRun_GlyphRunFlags,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setFlags, doc_QGlyphRun_setFlags);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_flags, "QGlyphRun.flags() -> QGlyphRun.GlyphRunFlags");

extern "C" {static PyObject *meth_QGlyphRun_flags(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_flags(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            QGlyphRun::GlyphRunFlags*sipRes;

            sipRes = new QGlyphRun::GlyphRunFlags(sipCpp->flags());

            return sipConvertFromNewType(sipRes,sipType_QGlyphRun_GlyphRunFlags,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_flags, doc_QGlyphRun_flags);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_setBoundingRect, "QGlyphRun.setBoundingRect(QRectF)");

extern "C" {static PyObject *meth_QGlyphRun_setBoundingRect(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_setBoundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRectF* a0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QRectF, &a0))
        {
            sipCpp->setBoundingRect(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_setBoundingRect, doc_QGlyphRun_setBoundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_boundingRect, "QGlyphRun.boundingRect() -> QRectF");

extern "C" {static PyObject *meth_QGlyphRun_boundingRect(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_boundingRect(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            QRectF*sipRes;

            sipRes = new QRectF(sipCpp->boundingRect());

            return sipConvertFromNewType(sipRes,sipType_QRectF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_boundingRect, doc_QGlyphRun_boundingRect);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_isEmpty, "QGlyphRun.isEmpty() -> bool");

extern "C" {static PyObject *meth_QGlyphRun_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGlyphRun, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_isEmpty, doc_QGlyphRun_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QGlyphRun_swap, "QGlyphRun.swap(QGlyphRun)");

extern "C" {static PyObject *meth_QGlyphRun_swap(PyObject *, PyObject *);}
static PyObject *meth_QGlyphRun_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGlyphRun* a0;
        QGlyphRun *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGlyphRun, &sipCpp, sipType_QGlyphRun, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGlyphRun, sipName_swap, doc_QGlyphRun_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QGlyphRun___ne__(PyObject *,PyObject *);}
static PyObject *slot_QGlyphRun___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QGlyphRun *sipCpp = reinterpret_cast<QGlyphRun *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGlyphRun));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGlyphRun, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGlyphRun::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QGlyphRun,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QGlyphRun___eq__(PyObject *,PyObject *);}
static PyObject *slot_QGlyphRun___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QGlyphRun *sipCpp = reinterpret_cast<QGlyphRun *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QGlyphRun));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QGlyphRun* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QGlyphRun, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QGlyphRun::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QGlyphRun,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGlyphRun(void *, const sipTypeDef *);}
static void *cast_QGlyphRun(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGlyphRun)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGlyphRun(void *, int);}
static void release_QGlyphRun(void *sipCppV,int)
{
    delete reinterpret_cast<QGlyphRun *>(sipCppV);
}


extern "C" {static void assign_QGlyphRun(void *, SIP_SSIZE_T, const void *);}
static void assign_QGlyphRun(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QGlyphRun *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QGlyphRun *>(sipSrc);
}


extern "C" {static void *array_QGlyphRun(SIP_SSIZE_T);}
static void *array_QGlyphRun(SIP_SSIZE_T sipNrElem)
{
    return new QGlyphRun[sipNrElem];
}


extern "C" {static void *copy_QGlyphRun(const void *, SIP_SSIZE_T);}
static void *copy_QGlyphRun(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QGlyphRun(reinterpret_cast<const QGlyphRun *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QGlyphRun(sipSimpleWrapper *);}
static void dealloc_QGlyphRun(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGlyphRun(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QGlyphRun(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGlyphRun(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QGlyphRun *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QGlyphRun();

            return sipCpp;
        }
    }

    {
        const QGlyphRun* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGlyphRun, &a0))
        {
            sipCpp = new QGlyphRun(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QGlyphRun[] = {
    {(void *)slot_QGlyphRun___ne__, ne_slot},
    {(void *)slot_QGlyphRun___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QGlyphRun[] = {
    {SIP_MLNAME_CAST(sipName_boundingRect), meth_QGlyphRun_boundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_boundingRect)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QGlyphRun_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_clear)},
    {SIP_MLNAME_CAST(sipName_flags), meth_QGlyphRun_flags, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_flags)},
    {SIP_MLNAME_CAST(sipName_glyphIndexes), meth_QGlyphRun_glyphIndexes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_glyphIndexes)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QGlyphRun_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isRightToLeft), meth_QGlyphRun_isRightToLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_isRightToLeft)},
    {SIP_MLNAME_CAST(sipName_overline), meth_QGlyphRun_overline, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_overline)},
    {SIP_MLNAME_CAST(sipName_positions), meth_QGlyphRun_positions, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_positions)},
    {SIP_MLNAME_CAST(sipName_rawFont), meth_QGlyphRun_rawFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_rawFont)},
    {SIP_MLNAME_CAST(sipName_setBoundingRect), meth_QGlyphRun_setBoundingRect, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setBoundingRect)},
    {SIP_MLNAME_CAST(sipName_setFlag), (PyCFunction)meth_QGlyphRun_setFlag, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGlyphRun_setFlag)},
    {SIP_MLNAME_CAST(sipName_setFlags), meth_QGlyphRun_setFlags, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setFlags)},
    {SIP_MLNAME_CAST(sipName_setGlyphIndexes), meth_QGlyphRun_setGlyphIndexes, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setGlyphIndexes)},
    {SIP_MLNAME_CAST(sipName_setOverline), meth_QGlyphRun_setOverline, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setOverline)},
    {SIP_MLNAME_CAST(sipName_setPositions), meth_QGlyphRun_setPositions, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setPositions)},
    {SIP_MLNAME_CAST(sipName_setRawFont), meth_QGlyphRun_setRawFont, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setRawFont)},
    {SIP_MLNAME_CAST(sipName_setRightToLeft), meth_QGlyphRun_setRightToLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setRightToLeft)},
    {SIP_MLNAME_CAST(sipName_setStrikeOut), meth_QGlyphRun_setStrikeOut, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setStrikeOut)},
    {SIP_MLNAME_CAST(sipName_setUnderline), meth_QGlyphRun_setUnderline, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_setUnderline)},
    {SIP_MLNAME_CAST(sipName_strikeOut), meth_QGlyphRun_strikeOut, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_strikeOut)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QGlyphRun_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_swap)},
    {SIP_MLNAME_CAST(sipName_underline), meth_QGlyphRun_underline, METH_VARARGS, SIP_MLDOC_CAST(doc_QGlyphRun_underline)}
};

static sipEnumMemberDef enummembers_QGlyphRun[] = {
    {sipName_Overline, static_cast<int>(QGlyphRun::Overline), 47},
    {sipName_RightToLeft, static_cast<int>(QGlyphRun::RightToLeft), 47},
    {sipName_SplitLigature, static_cast<int>(QGlyphRun::SplitLigature), 47},
    {sipName_StrikeOut, static_cast<int>(QGlyphRun::StrikeOut), 47},
    {sipName_Underline, static_cast<int>(QGlyphRun::Underline), 47},
};

PyDoc_STRVAR(doc_QGlyphRun, "\1QGlyphRun()\n"
    "QGlyphRun(QGlyphRun)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QGlyphRun = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGlyphRun,
        {0}
    },
    {
        sipNameNr_QGlyphRun,
        {0, 0, 1},
        22, methods_QGlyphRun,
        5, enummembers_QGlyphRun,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGlyphRun,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QGlyphRun,
    init_type_QGlyphRun,
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
    dealloc_QGlyphRun,
    assign_QGlyphRun,
    array_QGlyphRun,
    copy_QGlyphRun,
    release_QGlyphRun,
    cast_QGlyphRun,
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
