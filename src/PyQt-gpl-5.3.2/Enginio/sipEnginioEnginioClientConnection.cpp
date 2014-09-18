/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:19:00 2014
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

#include "sipAPIEnginio.h"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/Enginio/enginioclientconnection.sip"
#include <enginioclientconnection.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/Enginio/enginioidentity.sip"
#include <enginioidentity.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/Enginio/enginio.sip"
#include <enginio.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 100 "sip/QtCore/qurl.sip"
#include <qurl.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 26 "sip/QtNetwork/qnetworkaccessmanager.sip"
#include <qnetworkaccessmanager.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 84 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 87 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 90 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioClientConnection.cpp"


PyDoc_STRVAR(doc_EnginioClientConnection_backendId, "EnginioClientConnection.backendId() -> QByteArray");

extern "C" {static PyObject *meth_EnginioClientConnection_backendId(PyObject *, PyObject *);}
static PyObject *meth_EnginioClientConnection_backendId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioClientConnection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioClientConnection, &sipCpp))
        {
            QByteArray*sipRes;

            sipRes = new QByteArray(sipCpp->backendId());

            return sipConvertFromNewType(sipRes,sipType_QByteArray,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioClientConnection, sipName_backendId, doc_EnginioClientConnection_backendId);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioClientConnection_setBackendId, "EnginioClientConnection.setBackendId(QByteArray)");

extern "C" {static PyObject *meth_EnginioClientConnection_setBackendId(PyObject *, PyObject *);}
static PyObject *meth_EnginioClientConnection_setBackendId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QByteArray* a0;
        int a0State = 0;
        EnginioClientConnection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_EnginioClientConnection, &sipCpp, sipType_QByteArray, &a0, &a0State))
        {
            sipCpp->setBackendId(*a0);
            sipReleaseType(const_cast<QByteArray *>(a0),sipType_QByteArray,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioClientConnection, sipName_setBackendId, doc_EnginioClientConnection_setBackendId);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioClientConnection_identity, "EnginioClientConnection.identity() -> EnginioIdentity");

extern "C" {static PyObject *meth_EnginioClientConnection_identity(PyObject *, PyObject *);}
static PyObject *meth_EnginioClientConnection_identity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioClientConnection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioClientConnection, &sipCpp))
        {
            EnginioIdentity*sipRes;

            sipRes = sipCpp->identity();

            return sipConvertFromType(sipRes,sipType_EnginioIdentity,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioClientConnection, sipName_identity, doc_EnginioClientConnection_identity);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioClientConnection_setIdentity, "EnginioClientConnection.setIdentity(EnginioIdentity)");

extern "C" {static PyObject *meth_EnginioClientConnection_setIdentity(PyObject *, PyObject *);}
static PyObject *meth_EnginioClientConnection_setIdentity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        EnginioIdentity* a0;
        EnginioClientConnection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_EnginioClientConnection, &sipCpp, sipType_EnginioIdentity, &a0))
        {
            sipCpp->setIdentity(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioClientConnection, sipName_setIdentity, doc_EnginioClientConnection_setIdentity);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioClientConnection_authenticationState, "EnginioClientConnection.authenticationState() -> Enginio.AuthenticationState");

extern "C" {static PyObject *meth_EnginioClientConnection_authenticationState(PyObject *, PyObject *);}
static PyObject *meth_EnginioClientConnection_authenticationState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioClientConnection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioClientConnection, &sipCpp))
        {
            Enginio::AuthenticationState sipRes;

            sipRes = sipCpp->authenticationState();

            return sipConvertFromEnum(sipRes,sipType_Enginio_AuthenticationState);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioClientConnection, sipName_authenticationState, doc_EnginioClientConnection_authenticationState);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioClientConnection_serviceUrl, "EnginioClientConnection.serviceUrl() -> QUrl");

extern "C" {static PyObject *meth_EnginioClientConnection_serviceUrl(PyObject *, PyObject *);}
static PyObject *meth_EnginioClientConnection_serviceUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioClientConnection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioClientConnection, &sipCpp))
        {
            QUrl*sipRes;

            sipRes = new QUrl(sipCpp->serviceUrl());

            return sipConvertFromNewType(sipRes,sipType_QUrl,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioClientConnection, sipName_serviceUrl, doc_EnginioClientConnection_serviceUrl);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioClientConnection_setServiceUrl, "EnginioClientConnection.setServiceUrl(QUrl)");

extern "C" {static PyObject *meth_EnginioClientConnection_setServiceUrl(PyObject *, PyObject *);}
static PyObject *meth_EnginioClientConnection_setServiceUrl(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QUrl* a0;
        EnginioClientConnection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_EnginioClientConnection, &sipCpp, sipType_QUrl, &a0))
        {
            sipCpp->setServiceUrl(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioClientConnection, sipName_setServiceUrl, doc_EnginioClientConnection_setServiceUrl);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioClientConnection_networkManager, "EnginioClientConnection.networkManager() -> QNetworkAccessManager");

extern "C" {static PyObject *meth_EnginioClientConnection_networkManager(PyObject *, PyObject *);}
static PyObject *meth_EnginioClientConnection_networkManager(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioClientConnection *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioClientConnection, &sipCpp))
        {
            QNetworkAccessManager*sipRes;

            sipRes = sipCpp->networkManager();

            return sipConvertFromType(sipRes,sipType_QNetworkAccessManager,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioClientConnection, sipName_networkManager, doc_EnginioClientConnection_networkManager);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_EnginioClientConnection(void *, const sipTypeDef *);}
static void *cast_EnginioClientConnection(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_EnginioClientConnection)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(EnginioClientConnection *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_EnginioClientConnection(void *, int);}
static void release_EnginioClientConnection(void *sipCppV,int)
{
    EnginioClientConnection *sipCpp = reinterpret_cast<EnginioClientConnection *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_EnginioClientConnection(sipSimpleWrapper *);}
static void dealloc_EnginioClientConnection(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_EnginioClientConnection(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_EnginioClientConnection[] = {{160, 0, 1}};


static PyMethodDef methods_EnginioClientConnection[] = {
    {SIP_MLNAME_CAST(sipName_authenticationState), meth_EnginioClientConnection_authenticationState, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioClientConnection_authenticationState)},
    {SIP_MLNAME_CAST(sipName_backendId), meth_EnginioClientConnection_backendId, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioClientConnection_backendId)},
    {SIP_MLNAME_CAST(sipName_identity), meth_EnginioClientConnection_identity, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioClientConnection_identity)},
    {SIP_MLNAME_CAST(sipName_networkManager), meth_EnginioClientConnection_networkManager, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioClientConnection_networkManager)},
    {SIP_MLNAME_CAST(sipName_serviceUrl), meth_EnginioClientConnection_serviceUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioClientConnection_serviceUrl)},
    {SIP_MLNAME_CAST(sipName_setBackendId), meth_EnginioClientConnection_setBackendId, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioClientConnection_setBackendId)},
    {SIP_MLNAME_CAST(sipName_setIdentity), meth_EnginioClientConnection_setIdentity, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioClientConnection_setIdentity)},
    {SIP_MLNAME_CAST(sipName_setServiceUrl), meth_EnginioClientConnection_setServiceUrl, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioClientConnection_setServiceUrl)}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_EnginioClientConnection[] = {
    {"identityChanged(EnginioIdentity*)", "\1EnginioClientConnection.identityChanged[EnginioIdentity]", 0, 0},
    {"authenticationStateChanged(Enginio::AuthenticationState)", "\1EnginioClientConnection.authenticationStateChanged[Enginio.AuthenticationState]", 0, 0},
    {"serviceUrlChanged(QUrl)", "\1EnginioClientConnection.serviceUrlChanged[QUrl]", 0, 0},
    {"backendIdChanged(QByteArray)", "\1EnginioClientConnection.backendIdChanged[QByteArray]", 0, 0},
    {0, 0, 0, 0}
};


pyqt5ClassTypeDef sipTypeDef_Enginio_EnginioClientConnection = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_EnginioClientConnection,
        {0}
    },
    {
        sipNameNr_EnginioClientConnection,
        {0, 0, 1},
        8, methods_EnginioClientConnection,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_EnginioClientConnection,
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
    dealloc_EnginioClientConnection,
    0,
    0,
    0,
    release_EnginioClientConnection,
    cast_EnginioClientConnection,
    0,
    0,
    0,
    0,
    0,
    0
},
    &EnginioClientConnection::staticMetaObject,
    0,
    signals_EnginioClientConnection,
    0
};
