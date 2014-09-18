/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:45 2014
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

#include "sipAPIQAxContainer.h"

#line 24 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QAxContainer/qaxbase.sip"
#include <qaxbase.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"
#line 34 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"
#line 26 "sip/QtCore/qpycore_qmap.sip"
#include <qmap.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"
#line 24 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QAxContainer/qaxobject.sip"
#include <qaxobject.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"


PyDoc_STRVAR(doc_QAxBase_control, "QAxBase.control() -> str");

extern "C" {static PyObject *meth_QAxBase_control(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_control(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->control());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_control, doc_QAxBase_control);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_dynamicCall, "QAxBase.dynamicCall(str, list-of-QVariant) -> QVariant\n"
    "QAxBase.dynamicCall(str, QVariant value1=QVariant(), QVariant value2=QVariant(), QVariant value3=QVariant(), QVariant value4=QVariant(), QVariant value5=QVariant(), QVariant value6=QVariant(), QVariant value7=QVariant(), QVariant value8=QVariant()) -> QVariant");

extern "C" {static PyObject *meth_QAxBase_dynamicCall(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAxBase_dynamicCall(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        QList<QVariant>* a1;
        PyObject *a1Wrapper;
        int a1State = 0;
        QAxBase *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bs@J1", &sipSelf, sipType_QAxBase, &sipCpp, &a0, &a1Wrapper, sipType_QList_0100QVariant,&a1, &a1State))
        {
            QVariant*sipRes = 0;
            int sipIsErr = 0;

#line 38 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QAxContainer/qaxbase.sip"
        Py_BEGIN_ALLOW_THREADS
        sipRes = new QVariant(sipCpp->dynamicCall(a0, *a1));
        Py_END_ALLOW_THREADS

        // Update the input list with the (possibly) new values.
        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(a1Wrapper); ++i)
        {
            QVariant *v = new QVariant(a1->at(i));
            PyObject *v_obj = sipConvertFromNewType(v, sipType_QVariant, NULL);

            if (!v_obj)
            {
                delete v;
                sipIsErr = 1;
                break;
            }

            if (PyList_SetItem(a1Wrapper, i, v_obj) < 0)
            {
                Py_DECREF(v_obj);
                sipIsErr = 1;
                break;
            }
        }
#line 123 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"
            sipReleaseType(a1,sipType_QList_0100QVariant,a1State);

            if (sipIsErr)
                return 0;

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    {
        const char* a0;
        const QVariant& a1def = QVariant();
        const QVariant* a1 = &a1def;
        int a1State = 0;
        const QVariant& a2def = QVariant();
        const QVariant* a2 = &a2def;
        int a2State = 0;
        const QVariant& a3def = QVariant();
        const QVariant* a3 = &a3def;
        int a3State = 0;
        const QVariant& a4def = QVariant();
        const QVariant* a4 = &a4def;
        int a4State = 0;
        const QVariant& a5def = QVariant();
        const QVariant* a5 = &a5def;
        int a5State = 0;
        const QVariant& a6def = QVariant();
        const QVariant* a6 = &a6def;
        int a6State = 0;
        const QVariant& a7def = QVariant();
        const QVariant* a7 = &a7def;
        int a7State = 0;
        const QVariant& a8def = QVariant();
        const QVariant* a8 = &a8def;
        int a8State = 0;
        QAxBase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bs|J1J1J1J1J1J1J1J1", &sipSelf, sipType_QAxBase, &sipCpp, &a0, sipType_QVariant, &a1, &a1State, sipType_QVariant, &a2, &a2State, sipType_QVariant, &a3, &a3State, sipType_QVariant, &a4, &a4State, sipType_QVariant, &a5, &a5State, sipType_QVariant, &a6, &a6State, sipType_QVariant, &a7, &a7State, sipType_QVariant, &a8, &a8State))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->dynamicCall(a0,*a1,*a2,*a3,*a4,*a5,*a6,*a7,*a8));
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);
            sipReleaseType(const_cast<QVariant *>(a2),sipType_QVariant,a2State);
            sipReleaseType(const_cast<QVariant *>(a3),sipType_QVariant,a3State);
            sipReleaseType(const_cast<QVariant *>(a4),sipType_QVariant,a4State);
            sipReleaseType(const_cast<QVariant *>(a5),sipType_QVariant,a5State);
            sipReleaseType(const_cast<QVariant *>(a6),sipType_QVariant,a6State);
            sipReleaseType(const_cast<QVariant *>(a7),sipType_QVariant,a7State);
            sipReleaseType(const_cast<QVariant *>(a8),sipType_QVariant,a8State);

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_dynamicCall, doc_QAxBase_dynamicCall);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_querySubObject, "QAxBase.querySubObject(str, list-of-QVariant) -> QAxObject\n"
    "QAxBase.querySubObject(str, QVariant value1=QVariant(), QVariant value2=QVariant(), QVariant value3=QVariant(), QVariant value4=QVariant(), QVariant value5=QVariant(), QVariant value6=QVariant(), QVariant value7=QVariant(), QVariant value8=QVariant()) -> QAxObject");

extern "C" {static PyObject *meth_QAxBase_querySubObject(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAxBase_querySubObject(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        QList<QVariant>* a1;
        PyObject *a1Wrapper;
        int a1State = 0;
        QAxBase *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bs@J1", &sipSelf, sipType_QAxBase, &sipCpp, &a0, &a1Wrapper, sipType_QList_0100QVariant,&a1, &a1State))
        {
            QAxObject*sipRes = 0;
            int sipIsErr = 0;

#line 77 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QAxContainer/qaxbase.sip"
        Py_BEGIN_ALLOW_THREADS
        sipRes = sipCpp->querySubObject(a0, *a1);
        Py_END_ALLOW_THREADS

        // Update the input list with the (possibly) new values.
        for (SIP_SSIZE_T i = 0; i < PyList_GET_SIZE(a1Wrapper); ++i)
        {
            QVariant *v = new QVariant(a1->at(i));
            PyObject *v_obj = sipConvertFromNewType(v, sipType_QVariant, NULL);

            if (!v_obj)
            {
                delete v;
                sipIsErr = 1;
                break;
            }

            if (PyList_SetItem(a1Wrapper, i, v_obj) < 0)
            {
                Py_DECREF(v_obj);
                sipIsErr = 1;
                break;
            }
        }
#line 243 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QAxContainer/sipQAxContainerQAxBase.cpp"
            sipReleaseType(a1,sipType_QList_0100QVariant,a1State);

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_QAxObject,NULL);
        }
    }

    {
        const char* a0;
        const QVariant& a1def = QVariant();
        const QVariant* a1 = &a1def;
        int a1State = 0;
        const QVariant& a2def = QVariant();
        const QVariant* a2 = &a2def;
        int a2State = 0;
        const QVariant& a3def = QVariant();
        const QVariant* a3 = &a3def;
        int a3State = 0;
        const QVariant& a4def = QVariant();
        const QVariant* a4 = &a4def;
        int a4State = 0;
        const QVariant& a5def = QVariant();
        const QVariant* a5 = &a5def;
        int a5State = 0;
        const QVariant& a6def = QVariant();
        const QVariant* a6 = &a6def;
        int a6State = 0;
        const QVariant& a7def = QVariant();
        const QVariant* a7 = &a7def;
        int a7State = 0;
        const QVariant& a8def = QVariant();
        const QVariant* a8 = &a8def;
        int a8State = 0;
        QAxBase *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_value1,
            sipName_value2,
            sipName_value3,
            sipName_value4,
            sipName_value5,
            sipName_value6,
            sipName_value7,
            sipName_value8,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "Bs|J1J1J1J1J1J1J1J1", &sipSelf, sipType_QAxBase, &sipCpp, &a0, sipType_QVariant, &a1, &a1State, sipType_QVariant, &a2, &a2State, sipType_QVariant, &a3, &a3State, sipType_QVariant, &a4, &a4State, sipType_QVariant, &a5, &a5State, sipType_QVariant, &a6, &a6State, sipType_QVariant, &a7, &a7State, sipType_QVariant, &a8, &a8State))
        {
            QAxObject*sipRes;

            sipRes = sipCpp->querySubObject(a0,*a1,*a2,*a3,*a4,*a5,*a6,*a7,*a8);
            sipReleaseType(const_cast<QVariant *>(a1),sipType_QVariant,a1State);
            sipReleaseType(const_cast<QVariant *>(a2),sipType_QVariant,a2State);
            sipReleaseType(const_cast<QVariant *>(a3),sipType_QVariant,a3State);
            sipReleaseType(const_cast<QVariant *>(a4),sipType_QVariant,a4State);
            sipReleaseType(const_cast<QVariant *>(a5),sipType_QVariant,a5State);
            sipReleaseType(const_cast<QVariant *>(a6),sipType_QVariant,a6State);
            sipReleaseType(const_cast<QVariant *>(a7),sipType_QVariant,a7State);
            sipReleaseType(const_cast<QVariant *>(a8),sipType_QVariant,a8State);

            return sipConvertFromType(sipRes,sipType_QAxObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_querySubObject, doc_QAxBase_querySubObject);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_propertyBag, "QAxBase.propertyBag() -> dict-of-str-object");

extern "C" {static PyObject *meth_QAxBase_propertyBag(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_propertyBag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            QVariantMap*sipRes;

            sipRes = new QVariantMap(sipCpp->propertyBag());

            return sipConvertFromNewType(sipRes,sipType_QMap_0100QString_0100QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_propertyBag, doc_QAxBase_propertyBag);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_setPropertyBag, "QAxBase.setPropertyBag(dict-of-str-object)");

extern "C" {static PyObject *meth_QAxBase_setPropertyBag(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_setPropertyBag(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QVariantMap* a0;
        int a0State = 0;
        QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAxBase, &sipCpp, sipType_QMap_0100QString_0100QVariant,&a0, &a0State))
        {
            sipCpp->setPropertyBag(*a0);
            sipReleaseType(const_cast<QVariantMap *>(a0),sipType_QMap_0100QString_0100QVariant,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_setPropertyBag, doc_QAxBase_setPropertyBag);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_generateDocumentation, "QAxBase.generateDocumentation() -> str");

extern "C" {static PyObject *meth_QAxBase_generateDocumentation(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_generateDocumentation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->generateDocumentation());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_generateDocumentation, doc_QAxBase_generateDocumentation);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_propertyWritable, "QAxBase.propertyWritable(str) -> bool");

extern "C" {static PyObject *meth_QAxBase_propertyWritable(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_propertyWritable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char* a0;
        const QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bs", &sipSelf, sipType_QAxBase, &sipCpp, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QAxBase::propertyWritable(a0) : sipCpp->propertyWritable(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_propertyWritable, doc_QAxBase_propertyWritable);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_setPropertyWritable, "QAxBase.setPropertyWritable(str, bool)");

extern "C" {static PyObject *meth_QAxBase_setPropertyWritable(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_setPropertyWritable(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const char* a0;
        bool a1;
        QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bsb", &sipSelf, sipType_QAxBase, &sipCpp, &a0, &a1))
        {
            (sipSelfWasArg ? sipCpp->QAxBase::setPropertyWritable(a0,a1) : sipCpp->setPropertyWritable(a0,a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_setPropertyWritable, doc_QAxBase_setPropertyWritable);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_isNull, "QAxBase.isNull() -> bool");

extern "C" {static PyObject *meth_QAxBase_isNull(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_isNull, doc_QAxBase_isNull);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_verbs, "QAxBase.verbs() -> list-of-str");

extern "C" {static PyObject *meth_QAxBase_verbs(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_verbs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            QStringList*sipRes;

            sipRes = new QStringList(sipCpp->verbs());

            return sipConvertFromNewType(sipRes,sipType_QStringList,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_verbs, doc_QAxBase_verbs);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_asVariant, "QAxBase.asVariant() -> QVariant");

extern "C" {static PyObject *meth_QAxBase_asVariant(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_asVariant(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            QVariant*sipRes;

            sipRes = new QVariant(sipCpp->asVariant());

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_asVariant, doc_QAxBase_asVariant);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_clear, "QAxBase.clear()");

extern "C" {static PyObject *meth_QAxBase_clear(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QAxBase::clear() : sipCpp->clear());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_clear, doc_QAxBase_clear);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_setControl, "QAxBase.setControl(str) -> bool");

extern "C" {static PyObject *meth_QAxBase_setControl(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_setControl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QAxBase, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            sipRes = sipCpp->setControl(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_setControl, doc_QAxBase_setControl);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_disableMetaObject, "QAxBase.disableMetaObject()");

extern "C" {static PyObject *meth_QAxBase_disableMetaObject(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_disableMetaObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            sipCpp->disableMetaObject();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_disableMetaObject, doc_QAxBase_disableMetaObject);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_disableClassInfo, "QAxBase.disableClassInfo()");

extern "C" {static PyObject *meth_QAxBase_disableClassInfo(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_disableClassInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            sipCpp->disableClassInfo();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_disableClassInfo, doc_QAxBase_disableClassInfo);

    return NULL;
}


PyDoc_STRVAR(doc_QAxBase_disableEventSink, "QAxBase.disableEventSink()");

extern "C" {static PyObject *meth_QAxBase_disableEventSink(PyObject *, PyObject *);}
static PyObject *meth_QAxBase_disableEventSink(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QAxBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAxBase, &sipCpp))
        {
            sipCpp->disableEventSink();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAxBase, sipName_disableEventSink, doc_QAxBase_disableEventSink);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAxBase(void *, const sipTypeDef *);}
static void *cast_QAxBase(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAxBase)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAxBase(void *, int);}
static void release_QAxBase(void *sipCppV,int)
{
    delete reinterpret_cast<QAxBase *>(sipCppV);
}


extern "C" {static void dealloc_QAxBase(sipSimpleWrapper *);}
static void dealloc_QAxBase(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QAxBase(sipGetAddress(sipSelf),0);
    }
}


static PyMethodDef methods_QAxBase[] = {
    {SIP_MLNAME_CAST(sipName_asVariant), meth_QAxBase_asVariant, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_asVariant)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QAxBase_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_clear)},
    {SIP_MLNAME_CAST(sipName_control), meth_QAxBase_control, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_control)},
    {SIP_MLNAME_CAST(sipName_disableClassInfo), meth_QAxBase_disableClassInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_disableClassInfo)},
    {SIP_MLNAME_CAST(sipName_disableEventSink), meth_QAxBase_disableEventSink, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_disableEventSink)},
    {SIP_MLNAME_CAST(sipName_disableMetaObject), meth_QAxBase_disableMetaObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_disableMetaObject)},
    {SIP_MLNAME_CAST(sipName_dynamicCall), (PyCFunction)meth_QAxBase_dynamicCall, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QAxBase_dynamicCall)},
    {SIP_MLNAME_CAST(sipName_generateDocumentation), meth_QAxBase_generateDocumentation, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_generateDocumentation)},
    {SIP_MLNAME_CAST(sipName_isNull), meth_QAxBase_isNull, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_isNull)},
    {SIP_MLNAME_CAST(sipName_propertyBag), meth_QAxBase_propertyBag, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_propertyBag)},
    {SIP_MLNAME_CAST(sipName_propertyWritable), meth_QAxBase_propertyWritable, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_propertyWritable)},
    {SIP_MLNAME_CAST(sipName_querySubObject), (PyCFunction)meth_QAxBase_querySubObject, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QAxBase_querySubObject)},
    {SIP_MLNAME_CAST(sipName_setControl), meth_QAxBase_setControl, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_setControl)},
    {SIP_MLNAME_CAST(sipName_setPropertyBag), meth_QAxBase_setPropertyBag, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_setPropertyBag)},
    {SIP_MLNAME_CAST(sipName_setPropertyWritable), meth_QAxBase_setPropertyWritable, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_setPropertyWritable)},
    {SIP_MLNAME_CAST(sipName_verbs), meth_QAxBase_verbs, METH_VARARGS, SIP_MLDOC_CAST(doc_QAxBase_verbs)}
};


pyqt5ClassTypeDef sipTypeDef_QAxContainer_QAxBase = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAxBase,
        {0}
    },
    {
        sipNameNr_QAxBase,
        {0, 0, 1},
        16, methods_QAxBase,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
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
    dealloc_QAxBase,
    0,
    0,
    0,
    release_QAxBase,
    cast_QAxBase,
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
