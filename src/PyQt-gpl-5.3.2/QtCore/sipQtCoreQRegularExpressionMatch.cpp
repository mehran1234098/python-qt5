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

#line 137 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionMatch.cpp"

#line 27 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionMatch.cpp"
#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionMatch.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionMatch.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQRegularExpressionMatch.cpp"


PyDoc_STRVAR(doc_QRegularExpressionMatch_swap, "QRegularExpressionMatch.swap(QRegularExpressionMatch)");

extern "C" {static PyObject *meth_QRegularExpressionMatch_swap(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QRegularExpressionMatch* a0;
        QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QRegularExpressionMatch, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_swap, doc_QRegularExpressionMatch_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_regularExpression, "QRegularExpressionMatch.regularExpression() -> QRegularExpression");

extern "C" {static PyObject *meth_QRegularExpressionMatch_regularExpression(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_regularExpression(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            QRegularExpression*sipRes;

            sipRes = new QRegularExpression(sipCpp->regularExpression());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_regularExpression, doc_QRegularExpressionMatch_regularExpression);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_matchType, "QRegularExpressionMatch.matchType() -> QRegularExpression.MatchType");

extern "C" {static PyObject *meth_QRegularExpressionMatch_matchType(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_matchType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            QRegularExpression::MatchType sipRes;

            sipRes = sipCpp->matchType();

            return sipConvertFromEnum(sipRes,sipType_QRegularExpression_MatchType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_matchType, doc_QRegularExpressionMatch_matchType);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_matchOptions, "QRegularExpressionMatch.matchOptions() -> QRegularExpression.MatchOptions");

extern "C" {static PyObject *meth_QRegularExpressionMatch_matchOptions(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_matchOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            QRegularExpression::MatchOptions*sipRes;

            sipRes = new QRegularExpression::MatchOptions(sipCpp->matchOptions());

            return sipConvertFromNewType(sipRes,sipType_QRegularExpression_MatchOptions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_matchOptions, doc_QRegularExpressionMatch_matchOptions);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_hasMatch, "QRegularExpressionMatch.hasMatch() -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatch_hasMatch(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_hasMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasMatch();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_hasMatch, doc_QRegularExpressionMatch_hasMatch);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_hasPartialMatch, "QRegularExpressionMatch.hasPartialMatch() -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatch_hasPartialMatch(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_hasPartialMatch(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->hasPartialMatch();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_hasPartialMatch, doc_QRegularExpressionMatch_hasPartialMatch);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_isValid, "QRegularExpressionMatch.isValid() -> bool");

extern "C" {static PyObject *meth_QRegularExpressionMatch_isValid(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_isValid, doc_QRegularExpressionMatch_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_lastCapturedIndex, "QRegularExpressionMatch.lastCapturedIndex() -> int");

extern "C" {static PyObject *meth_QRegularExpressionMatch_lastCapturedIndex(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_lastCapturedIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->lastCapturedIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_lastCapturedIndex, doc_QRegularExpressionMatch_lastCapturedIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_captured, "QRegularExpressionMatch.captured(int nth=0) -> str\n"
    "QRegularExpressionMatch.captured(str) -> str");

extern "C" {static PyObject *meth_QRegularExpressionMatch_captured(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_captured(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        const QRegularExpressionMatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, &a0))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->captured(a0));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QRegularExpressionMatch *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->captured(*a0));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_captured, doc_QRegularExpressionMatch_captured);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_capturedTexts, "QRegularExpressionMatch.capturedTexts() -> list-of-str");

extern "C" {static PyObject *meth_QRegularExpressionMatch_capturedTexts(PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_capturedTexts(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QRegularExpressionMatch *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->capturedTexts());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_capturedTexts, doc_QRegularExpressionMatch_capturedTexts);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_capturedStart, "QRegularExpressionMatch.capturedStart(int nth=0) -> int\n"
    "QRegularExpressionMatch.capturedStart(str) -> int");

extern "C" {static PyObject *meth_QRegularExpressionMatch_capturedStart(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_capturedStart(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        const QRegularExpressionMatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->capturedStart(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QRegularExpressionMatch *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->capturedStart(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_capturedStart, doc_QRegularExpressionMatch_capturedStart);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_capturedLength, "QRegularExpressionMatch.capturedLength(int nth=0) -> int\n"
    "QRegularExpressionMatch.capturedLength(str) -> int");

extern "C" {static PyObject *meth_QRegularExpressionMatch_capturedLength(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_capturedLength(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        const QRegularExpressionMatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->capturedLength(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QRegularExpressionMatch *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->capturedLength(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_capturedLength, doc_QRegularExpressionMatch_capturedLength);

    return NULL;
}


PyDoc_STRVAR(doc_QRegularExpressionMatch_capturedEnd, "QRegularExpressionMatch.capturedEnd(int nth=0) -> int\n"
    "QRegularExpressionMatch.capturedEnd(str) -> int");

extern "C" {static PyObject *meth_QRegularExpressionMatch_capturedEnd(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QRegularExpressionMatch_capturedEnd(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        const QRegularExpressionMatch *sipCpp;

        static const char *sipKwdList[] = {
            sipName_nth,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|i", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->capturedEnd(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        const QRegularExpressionMatch *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QRegularExpressionMatch, &sipCpp, sipType_QString,&a0, &a0State))
        {
            int sipRes;

            sipRes = sipCpp->capturedEnd(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QRegularExpressionMatch, sipName_capturedEnd, doc_QRegularExpressionMatch_capturedEnd);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QRegularExpressionMatch(void *, const sipTypeDef *);}
static void *cast_QRegularExpressionMatch(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QRegularExpressionMatch)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QRegularExpressionMatch(void *, int);}
static void release_QRegularExpressionMatch(void *sipCppV,int)
{
    delete reinterpret_cast<QRegularExpressionMatch *>(sipCppV);
}


extern "C" {static void assign_QRegularExpressionMatch(void *, SIP_SSIZE_T, const void *);}
static void assign_QRegularExpressionMatch(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QRegularExpressionMatch *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QRegularExpressionMatch *>(sipSrc);
}


extern "C" {static void *array_QRegularExpressionMatch(SIP_SSIZE_T);}
static void *array_QRegularExpressionMatch(SIP_SSIZE_T sipNrElem)
{
    return new QRegularExpressionMatch[sipNrElem];
}


extern "C" {static void *copy_QRegularExpressionMatch(const void *, SIP_SSIZE_T);}
static void *copy_QRegularExpressionMatch(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QRegularExpressionMatch(reinterpret_cast<const QRegularExpressionMatch *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QRegularExpressionMatch(sipSimpleWrapper *);}
static void dealloc_QRegularExpressionMatch(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QRegularExpressionMatch(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QRegularExpressionMatch(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QRegularExpressionMatch(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QRegularExpressionMatch *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QRegularExpressionMatch();

            return sipCpp;
        }
    }

    {
        const QRegularExpressionMatch* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QRegularExpressionMatch, &a0))
        {
            sipCpp = new QRegularExpressionMatch(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QRegularExpressionMatch[] = {
    {SIP_MLNAME_CAST(sipName_captured), (PyCFunction)meth_QRegularExpressionMatch_captured, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_captured)},
    {SIP_MLNAME_CAST(sipName_capturedEnd), (PyCFunction)meth_QRegularExpressionMatch_capturedEnd, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_capturedEnd)},
    {SIP_MLNAME_CAST(sipName_capturedLength), (PyCFunction)meth_QRegularExpressionMatch_capturedLength, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_capturedLength)},
    {SIP_MLNAME_CAST(sipName_capturedStart), (PyCFunction)meth_QRegularExpressionMatch_capturedStart, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_capturedStart)},
    {SIP_MLNAME_CAST(sipName_capturedTexts), meth_QRegularExpressionMatch_capturedTexts, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_capturedTexts)},
    {SIP_MLNAME_CAST(sipName_hasMatch), meth_QRegularExpressionMatch_hasMatch, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_hasMatch)},
    {SIP_MLNAME_CAST(sipName_hasPartialMatch), meth_QRegularExpressionMatch_hasPartialMatch, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_hasPartialMatch)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QRegularExpressionMatch_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_isValid)},
    {SIP_MLNAME_CAST(sipName_lastCapturedIndex), meth_QRegularExpressionMatch_lastCapturedIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_lastCapturedIndex)},
    {SIP_MLNAME_CAST(sipName_matchOptions), meth_QRegularExpressionMatch_matchOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_matchOptions)},
    {SIP_MLNAME_CAST(sipName_matchType), meth_QRegularExpressionMatch_matchType, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_matchType)},
    {SIP_MLNAME_CAST(sipName_regularExpression), meth_QRegularExpressionMatch_regularExpression, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_regularExpression)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QRegularExpressionMatch_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QRegularExpressionMatch_swap)}
};

PyDoc_STRVAR(doc_QRegularExpressionMatch, "\1QRegularExpressionMatch()\n"
    "QRegularExpressionMatch(QRegularExpressionMatch)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QRegularExpressionMatch = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QRegularExpressionMatch,
        {0}
    },
    {
        sipNameNr_QRegularExpressionMatch,
        {0, 0, 1},
        13, methods_QRegularExpressionMatch,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QRegularExpressionMatch,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QRegularExpressionMatch,
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
    dealloc_QRegularExpressionMatch,
    assign_QRegularExpressionMatch,
    array_QRegularExpressionMatch,
    copy_QRegularExpressionMatch,
    release_QRegularExpressionMatch,
    cast_QRegularExpressionMatch,
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
