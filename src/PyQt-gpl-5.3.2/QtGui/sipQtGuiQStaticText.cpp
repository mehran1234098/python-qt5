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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qstatictext.sip"
#include <qstatictext.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQStaticText.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQStaticText.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtransform.sip"
#include <qtransform.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQStaticText.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qfont.sip"
#include <qfont.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQStaticText.cpp"
#line 101 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQStaticText.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextoption.sip"
#include <qtextoption.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQStaticText.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQStaticText.cpp"


PyDoc_STRVAR(doc_QStaticText_setText, "QStaticText.setText(str)");

extern "C" {static PyObject *meth_QStaticText_setText(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setText(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setText(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setText, doc_QStaticText_setText);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_text, "QStaticText.text() -> str");

extern "C" {static PyObject *meth_QStaticText_text(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_text(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->text());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_text, doc_QStaticText_text);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_setTextFormat, "QStaticText.setTextFormat(Qt.TextFormat)");

extern "C" {static PyObject *meth_QStaticText_setTextFormat(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setTextFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::TextFormat a0;
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QStaticText, &sipCpp, sipType_Qt_TextFormat, &a0))
        {
            sipCpp->setTextFormat(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setTextFormat, doc_QStaticText_setTextFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_textFormat, "QStaticText.textFormat() -> Qt.TextFormat");

extern "C" {static PyObject *meth_QStaticText_textFormat(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_textFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            Qt::TextFormat sipRes;

            sipRes = sipCpp->textFormat();

            return sipConvertFromEnum(sipRes,sipType_Qt_TextFormat);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_textFormat, doc_QStaticText_textFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_setTextWidth, "QStaticText.setTextWidth(float)");

extern "C" {static PyObject *meth_QStaticText_setTextWidth(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setTextWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QStaticText, &sipCpp, &a0))
        {
            sipCpp->setTextWidth(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setTextWidth, doc_QStaticText_setTextWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_textWidth, "QStaticText.textWidth() -> float");

extern "C" {static PyObject *meth_QStaticText_textWidth(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_textWidth(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->textWidth();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_textWidth, doc_QStaticText_textWidth);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_setTextOption, "QStaticText.setTextOption(QTextOption)");

extern "C" {static PyObject *meth_QStaticText_setTextOption(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setTextOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QTextOption* a0;
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QTextOption, &a0))
        {
            sipCpp->setTextOption(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setTextOption, doc_QStaticText_setTextOption);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_textOption, "QStaticText.textOption() -> QTextOption");

extern "C" {static PyObject *meth_QStaticText_textOption(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_textOption(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            QTextOption*sipRes;

            sipRes = new QTextOption(sipCpp->textOption());

            return sipConvertFromNewType(sipRes,sipType_QTextOption,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_textOption, doc_QStaticText_textOption);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_size, "QStaticText.size() -> QSizeF");

extern "C" {static PyObject *meth_QStaticText_size(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_size(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            QSizeF*sipRes;

            sipRes = new QSizeF(sipCpp->size());

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_size, doc_QStaticText_size);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_prepare, "QStaticText.prepare(QTransform matrix=QTransform(), QFont font=QFont())");

extern "C" {static PyObject *meth_QStaticText_prepare(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QStaticText_prepare(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QTransform& a0def = QTransform();
        const QTransform* a0 = &a0def;
        const QFont& a1def = QFont();
        const QFont* a1 = &a1def;
        QStaticText *sipCpp;

        static const char *sipKwdList[] = {
            sipName_matrix,
            sipName_font,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J9J9", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QTransform, &a0, sipType_QFont, &a1))
        {
            sipCpp->prepare(*a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_prepare, doc_QStaticText_prepare);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_setPerformanceHint, "QStaticText.setPerformanceHint(QStaticText.PerformanceHint)");

extern "C" {static PyObject *meth_QStaticText_setPerformanceHint(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_setPerformanceHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText::PerformanceHint a0;
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QStaticText_PerformanceHint, &a0))
        {
            sipCpp->setPerformanceHint(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_setPerformanceHint, doc_QStaticText_setPerformanceHint);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_performanceHint, "QStaticText.performanceHint() -> QStaticText.PerformanceHint");

extern "C" {static PyObject *meth_QStaticText_performanceHint(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_performanceHint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QStaticText, &sipCpp))
        {
            QStaticText::PerformanceHint sipRes;

            sipRes = sipCpp->performanceHint();

            return sipConvertFromEnum(sipRes,sipType_QStaticText_PerformanceHint);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_performanceHint, doc_QStaticText_performanceHint);

    return NULL;
}


PyDoc_STRVAR(doc_QStaticText_swap, "QStaticText.swap(QStaticText)");

extern "C" {static PyObject *meth_QStaticText_swap(PyObject *, PyObject *);}
static PyObject *meth_QStaticText_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QStaticText* a0;
        QStaticText *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QStaticText, &sipCpp, sipType_QStaticText, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QStaticText, sipName_swap, doc_QStaticText_swap);

    return NULL;
}


extern "C" {static PyObject *slot_QStaticText___ne__(PyObject *,PyObject *);}
static PyObject *slot_QStaticText___ne__(PyObject *sipSelf,PyObject *sipArg)
{
    QStaticText *sipCpp = reinterpret_cast<QStaticText *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStaticText));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStaticText* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QStaticText, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QStaticText::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,ne_slot,sipType_QStaticText,sipSelf,sipArg);
}


extern "C" {static PyObject *slot_QStaticText___eq__(PyObject *,PyObject *);}
static PyObject *slot_QStaticText___eq__(PyObject *sipSelf,PyObject *sipArg)
{
    QStaticText *sipCpp = reinterpret_cast<QStaticText *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_QStaticText));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const QStaticText* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_QStaticText, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->QStaticText::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_QtGui,eq_slot,sipType_QStaticText,sipSelf,sipArg);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStaticText(void *, const sipTypeDef *);}
static void *cast_QStaticText(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QStaticText)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStaticText(void *, int);}
static void release_QStaticText(void *sipCppV,int)
{
    delete reinterpret_cast<QStaticText *>(sipCppV);
}


extern "C" {static void assign_QStaticText(void *, SIP_SSIZE_T, const void *);}
static void assign_QStaticText(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStaticText *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStaticText *>(sipSrc);
}


extern "C" {static void *array_QStaticText(SIP_SSIZE_T);}
static void *array_QStaticText(SIP_SSIZE_T sipNrElem)
{
    return new QStaticText[sipNrElem];
}


extern "C" {static void *copy_QStaticText(const void *, SIP_SSIZE_T);}
static void *copy_QStaticText(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStaticText(reinterpret_cast<const QStaticText *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStaticText(sipSimpleWrapper *);}
static void dealloc_QStaticText(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStaticText(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStaticText(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStaticText(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStaticText *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStaticText();

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QStaticText(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    {
        const QStaticText* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStaticText, &a0))
        {
            sipCpp = new QStaticText(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_QStaticText[] = {
    {(void *)slot_QStaticText___ne__, ne_slot},
    {(void *)slot_QStaticText___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_QStaticText[] = {
    {SIP_MLNAME_CAST(sipName_performanceHint), meth_QStaticText_performanceHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_performanceHint)},
    {SIP_MLNAME_CAST(sipName_prepare), (PyCFunction)meth_QStaticText_prepare, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QStaticText_prepare)},
    {SIP_MLNAME_CAST(sipName_setPerformanceHint), meth_QStaticText_setPerformanceHint, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_setPerformanceHint)},
    {SIP_MLNAME_CAST(sipName_setText), meth_QStaticText_setText, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_setText)},
    {SIP_MLNAME_CAST(sipName_setTextFormat), meth_QStaticText_setTextFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_setTextFormat)},
    {SIP_MLNAME_CAST(sipName_setTextOption), meth_QStaticText_setTextOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_setTextOption)},
    {SIP_MLNAME_CAST(sipName_setTextWidth), meth_QStaticText_setTextWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_setTextWidth)},
    {SIP_MLNAME_CAST(sipName_size), meth_QStaticText_size, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_size)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QStaticText_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_swap)},
    {SIP_MLNAME_CAST(sipName_text), meth_QStaticText_text, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_text)},
    {SIP_MLNAME_CAST(sipName_textFormat), meth_QStaticText_textFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_textFormat)},
    {SIP_MLNAME_CAST(sipName_textOption), meth_QStaticText_textOption, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_textOption)},
    {SIP_MLNAME_CAST(sipName_textWidth), meth_QStaticText_textWidth, METH_VARARGS, SIP_MLDOC_CAST(doc_QStaticText_textWidth)}
};

static sipEnumMemberDef enummembers_QStaticText[] = {
    {sipName_AggressiveCaching, static_cast<int>(QStaticText::AggressiveCaching), 237},
    {sipName_ModerateCaching, static_cast<int>(QStaticText::ModerateCaching), 237},
};

PyDoc_STRVAR(doc_QStaticText, "\1QStaticText()\n"
    "QStaticText(str)\n"
    "QStaticText(QStaticText)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QStaticText = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStaticText,
        {0}
    },
    {
        sipNameNr_QStaticText,
        {0, 0, 1},
        13, methods_QStaticText,
        2, enummembers_QStaticText,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStaticText,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    slots_QStaticText,
    init_type_QStaticText,
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
    dealloc_QStaticText,
    assign_QStaticText,
    array_QStaticText,
    copy_QStaticText,
    release_QStaticText,
    cast_QStaticText,
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
