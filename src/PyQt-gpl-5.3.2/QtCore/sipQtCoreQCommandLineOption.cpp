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

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qcommandlineoption.sip"
#include <qcommandlineoption.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQCommandLineOption.cpp"

#line 27 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQCommandLineOption.cpp"
#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQCommandLineOption.cpp"


PyDoc_STRVAR(doc_QCommandLineOption_swap, "QCommandLineOption.swap(QCommandLineOption)");

extern "C" {static PyObject *meth_QCommandLineOption_swap(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_swap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QCommandLineOption* a0;
        QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QCommandLineOption, &sipCpp, sipType_QCommandLineOption, &a0))
        {
            sipCpp->swap(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_swap, doc_QCommandLineOption_swap);

    return NULL;
}


PyDoc_STRVAR(doc_QCommandLineOption_names, "QCommandLineOption.names() -> list-of-str");

extern "C" {static PyObject *meth_QCommandLineOption_names(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_names(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCommandLineOption, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->names());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_names, doc_QCommandLineOption_names);

    return NULL;
}


PyDoc_STRVAR(doc_QCommandLineOption_setValueName, "QCommandLineOption.setValueName(str)");

extern "C" {static PyObject *meth_QCommandLineOption_setValueName(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_setValueName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCommandLineOption, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setValueName(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_setValueName, doc_QCommandLineOption_setValueName);

    return NULL;
}


PyDoc_STRVAR(doc_QCommandLineOption_valueName, "QCommandLineOption.valueName() -> str");

extern "C" {static PyObject *meth_QCommandLineOption_valueName(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_valueName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCommandLineOption, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->valueName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_valueName, doc_QCommandLineOption_valueName);

    return NULL;
}


PyDoc_STRVAR(doc_QCommandLineOption_setDescription, "QCommandLineOption.setDescription(str)");

extern "C" {static PyObject *meth_QCommandLineOption_setDescription(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_setDescription(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCommandLineOption, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setDescription(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_setDescription, doc_QCommandLineOption_setDescription);

    return NULL;
}


PyDoc_STRVAR(doc_QCommandLineOption_description, "QCommandLineOption.description() -> str");

extern "C" {static PyObject *meth_QCommandLineOption_description(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_description(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCommandLineOption, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->description());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_description, doc_QCommandLineOption_description);

    return NULL;
}


PyDoc_STRVAR(doc_QCommandLineOption_setDefaultValue, "QCommandLineOption.setDefaultValue(str)");

extern "C" {static PyObject *meth_QCommandLineOption_setDefaultValue(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_setDefaultValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCommandLineOption, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setDefaultValue(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_setDefaultValue, doc_QCommandLineOption_setDefaultValue);

    return NULL;
}


PyDoc_STRVAR(doc_QCommandLineOption_setDefaultValues, "QCommandLineOption.setDefaultValues(list-of-str)");

extern "C" {static PyObject *meth_QCommandLineOption_setDefaultValues(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_setDefaultValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QStringList* a0;
        int a0State = 0;
        QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QCommandLineOption, &sipCpp, sipType_QStringList,&a0, &a0State))
        {
            sipCpp->setDefaultValues(*a0);
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_setDefaultValues, doc_QCommandLineOption_setDefaultValues);

    return NULL;
}


PyDoc_STRVAR(doc_QCommandLineOption_defaultValues, "QCommandLineOption.defaultValues() -> list-of-str");

extern "C" {static PyObject *meth_QCommandLineOption_defaultValues(PyObject *, PyObject *);}
static PyObject *meth_QCommandLineOption_defaultValues(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCommandLineOption *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCommandLineOption, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->defaultValues());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCommandLineOption, sipName_defaultValues, doc_QCommandLineOption_defaultValues);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QCommandLineOption(void *, const sipTypeDef *);}
static void *cast_QCommandLineOption(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QCommandLineOption)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCommandLineOption(void *, int);}
static void release_QCommandLineOption(void *sipCppV,int)
{
    delete reinterpret_cast<QCommandLineOption *>(sipCppV);
}


extern "C" {static void dealloc_QCommandLineOption(sipSimpleWrapper *);}
static void dealloc_QCommandLineOption(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCommandLineOption(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCommandLineOption(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCommandLineOption(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCommandLineOption *sipCpp = 0;

    {
        const QString* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        const QString& a2def = QString();
        const QString* a2 = &a2def;
        int a2State = 0;
        const QString& a3def = QString();
        const QString* a3 = &a3def;
        int a3State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_description,
            sipName_valueName,
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1J1J1", sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
            sipCpp = new QCommandLineOption(*a0,*a1,*a2,*a3);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);

            return sipCpp;
        }
    }

    {
        const QStringList* a0;
        int a0State = 0;
        const QString& a1def = QString();
        const QString* a1 = &a1def;
        int a1State = 0;
        const QString& a2def = QString();
        const QString* a2 = &a2def;
        int a2State = 0;
        const QString& a3def = QString();
        const QString* a3 = &a3def;
        int a3State = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_description,
            sipName_valueName,
            sipName_defaultValue,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|J1J1J1", sipType_QStringList,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QString,&a3, &a3State))
        {
            sipCpp = new QCommandLineOption(*a0,*a1,*a2,*a3);
            sipReleaseType(const_cast<QStringList *>(a0),sipType_QStringList,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast<QString *>(a3),sipType_QString,a3State);

            return sipCpp;
        }
    }

    {
        const QCommandLineOption* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QCommandLineOption, &a0))
        {
            sipCpp = new QCommandLineOption(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QCommandLineOption[] = {
    {SIP_MLNAME_CAST(sipName_defaultValues), meth_QCommandLineOption_defaultValues, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_defaultValues)},
    {SIP_MLNAME_CAST(sipName_description), meth_QCommandLineOption_description, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_description)},
    {SIP_MLNAME_CAST(sipName_names), meth_QCommandLineOption_names, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_names)},
    {SIP_MLNAME_CAST(sipName_setDefaultValue), meth_QCommandLineOption_setDefaultValue, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_setDefaultValue)},
    {SIP_MLNAME_CAST(sipName_setDefaultValues), meth_QCommandLineOption_setDefaultValues, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_setDefaultValues)},
    {SIP_MLNAME_CAST(sipName_setDescription), meth_QCommandLineOption_setDescription, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_setDescription)},
    {SIP_MLNAME_CAST(sipName_setValueName), meth_QCommandLineOption_setValueName, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_setValueName)},
    {SIP_MLNAME_CAST(sipName_swap), meth_QCommandLineOption_swap, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_swap)},
    {SIP_MLNAME_CAST(sipName_valueName), meth_QCommandLineOption_valueName, METH_VARARGS, SIP_MLDOC_CAST(doc_QCommandLineOption_valueName)}
};

PyDoc_STRVAR(doc_QCommandLineOption, "\1QCommandLineOption(str, str description=QString(), str valueName=QString(), str defaultValue=QString())\n"
    "QCommandLineOption(list-of-str, str description=QString(), str valueName=QString(), str defaultValue=QString())\n"
    "QCommandLineOption(QCommandLineOption)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QCommandLineOption = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCommandLineOption,
        {0}
    },
    {
        sipNameNr_QCommandLineOption,
        {0, 0, 1},
        9, methods_QCommandLineOption,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCommandLineOption,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QCommandLineOption,
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
    dealloc_QCommandLineOption,
    0,
    0,
    0,
    release_QCommandLineOption,
    cast_QCommandLineOption,
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
