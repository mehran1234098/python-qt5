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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQt.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQt.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQt.cpp"


PyDoc_STRVAR(doc_Qt_convertFromPlainText, "Qt.convertFromPlainText(str, Qt.WhiteSpaceMode mode=Qt.WhiteSpacePre) -> str");

extern "C" {static PyObject *meth_Qt_convertFromPlainText(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_Qt_convertFromPlainText(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        Qt::WhiteSpaceMode a1 = Qt::WhiteSpacePre;

        static const char *sipKwdList[] = {
            NULL,
            sipName_mode,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "J1|E", sipType_QString,&a0, &a0State, sipType_Qt_WhiteSpaceMode, &a1))
        {
            QString*sipRes;

            sipRes = new QString(Qt::convertFromPlainText(*a0,a1));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_convertFromPlainText, doc_Qt_convertFromPlainText);

    return NULL;
}


PyDoc_STRVAR(doc_Qt_mightBeRichText, "Qt.mightBeRichText(str) -> bool");

extern "C" {static PyObject *meth_Qt_mightBeRichText(PyObject *, PyObject *);}
static PyObject *meth_Qt_mightBeRichText(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J1", sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = Qt::mightBeRichText(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoFunction(sipParseErr, sipName_mightBeRichText, doc_Qt_mightBeRichText);

    return NULL;
}


static PyMethodDef methods_Qt[] = {
    {SIP_MLNAME_CAST(sipName_convertFromPlainText), (PyCFunction)meth_Qt_convertFromPlainText, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_Qt_convertFromPlainText)},
    {SIP_MLNAME_CAST(sipName_mightBeRichText), meth_Qt_mightBeRichText, METH_VARARGS, SIP_MLDOC_CAST(doc_Qt_mightBeRichText)}
};


pyqt5ClassTypeDef sipTypeDef_QtGui_Qt = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_NAMESPACE,
        sipNameNr_Qt,
        {0}
    },
    {
        -1,
        {307, 0, 0},
        2, methods_Qt,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
    0,
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
    0,
    0,
    0,
    0,
    0,
    0,
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
