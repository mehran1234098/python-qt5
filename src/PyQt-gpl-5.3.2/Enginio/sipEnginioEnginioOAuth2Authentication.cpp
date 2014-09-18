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

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/Enginio/enginiooauth2authentication.sip"
#include <enginiooauth2authentication.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"


class sipEnginioOAuth2Authentication : public EnginioOAuth2Authentication
{
public:
    sipEnginioOAuth2Authentication(QObject*);
    virtual ~sipEnginioOAuth2Authentication();

    int qt_metacall(QMetaObject::Call,int,void **);
    void *qt_metacast(const char *);
    const QMetaObject *metaObject() const;

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    QObject* sipProtect_sender() const;
    int sipProtect_receivers(const char*) const;
    void sipProtectVirt_timerEvent(bool,QTimerEvent*);
    void sipProtectVirt_childEvent(bool,QChildEvent*);
    void sipProtectVirt_customEvent(bool,QEvent*);
    void sipProtectVirt_connectNotify(bool,const QMetaMethod&);
    void sipProtectVirt_disconnectNotify(bool,const QMetaMethod&);
    int sipProtect_senderSignalIndex() const;
    bool sipProtect_isSignalConnected(const QMetaMethod&) const;

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void disconnectNotify(const QMetaMethod&);
    void connectNotify(const QMetaMethod&);
    void customEvent(QEvent*);
    void childEvent(QChildEvent*);
    void timerEvent(QTimerEvent*);
    bool eventFilter(QObject*,QEvent*);
    bool event(QEvent*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipEnginioOAuth2Authentication(const sipEnginioOAuth2Authentication &);
    sipEnginioOAuth2Authentication &operator = (const sipEnginioOAuth2Authentication &);

    char sipPyMethods[7];
};

sipEnginioOAuth2Authentication::sipEnginioOAuth2Authentication(QObject*a0): EnginioOAuth2Authentication(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipEnginioOAuth2Authentication::~sipEnginioOAuth2Authentication()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipEnginioOAuth2Authentication::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_Enginio_qt_metaobject(sipPySelf,sipType_EnginioOAuth2Authentication);
}

int sipEnginioOAuth2Authentication::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = EnginioOAuth2Authentication::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_Enginio_qt_metacall(sipPySelf,sipType_EnginioOAuth2Authentication,_c,_id,_a);

    return _id;
}

void *sipEnginioOAuth2Authentication::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_Enginio_qt_metacast(sipPySelf, sipType_EnginioOAuth2Authentication, _clname, &sipCpp) ? sipCpp : EnginioOAuth2Authentication::qt_metacast(_clname));
}

void sipEnginioOAuth2Authentication::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_Enginio_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipEnginioOAuth2Authentication::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_Enginio_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipEnginioOAuth2Authentication::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_Enginio_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipEnginioOAuth2Authentication::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_Enginio_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipEnginioOAuth2Authentication::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        EnginioOAuth2Authentication::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_Enginio_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipEnginioOAuth2Authentication::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return EnginioOAuth2Authentication::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_Enginio_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipEnginioOAuth2Authentication::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return EnginioOAuth2Authentication::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_Enginio_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QObject* sipEnginioOAuth2Authentication::sipProtect_sender() const
{
    return QObject::sender();
}

int sipEnginioOAuth2Authentication::sipProtect_receivers(const char*a0) const
{
    return QObject::receivers(a0);
}

void sipEnginioOAuth2Authentication::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent*a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipEnginioOAuth2Authentication::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent*a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipEnginioOAuth2Authentication::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent*a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipEnginioOAuth2Authentication::sipProtectVirt_connectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipEnginioOAuth2Authentication::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipEnginioOAuth2Authentication::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}

bool sipEnginioOAuth2Authentication::sipProtect_isSignalConnected(const QMetaMethod& a0) const
{
    return QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_sender, "EnginioOAuth2Authentication.sender() -> QObject");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp))
        {
            QObject*sipRes = 0;

#line 540 "sip/QtCore/qobject.sip"
        // sender() must be called without the GIL to avoid possible deadlocks between
        // the GIL and Qt's internal thread data mutex.
        
        Py_BEGIN_ALLOW_THREADS
        
        #if defined(SIP_PROTECTED_IS_PUBLIC)
        sipRes = sipCpp->sender();
        #else
        sipRes = sipCpp->sipProtect_sender();
        #endif
        
        Py_END_ALLOW_THREADS
        
        if (!sipRes)
        {
            typedef QObject *(*qtcore_qobject_sender_t)();
        
            static qtcore_qobject_sender_t qtcore_qobject_sender = 0;
        
            if (!qtcore_qobject_sender)
                qtcore_qobject_sender = (qtcore_qobject_sender_t)sipImportSymbol("qtcore_qobject_sender");
        
            if (qtcore_qobject_sender)
                sipRes = qtcore_qobject_sender();
        }
#line 366 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_sender, doc_EnginioOAuth2Authentication_sender);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_receivers, "EnginioOAuth2Authentication.receivers(signal) -> int");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, &a0))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 569 "sip/QtCore/qobject.sip"
        // We need to handle the signal object.  Import the helper if it hasn't already
        // been done.
        typedef sipErrorState (*pyqt5_get_signal_signature_t)(PyObject *, const QObject *, const QByteArray &);
        
        static pyqt5_get_signal_signature_t pyqt5_get_signal_signature = 0;
        
        if (!pyqt5_get_signal_signature)
            pyqt5_get_signal_signature = (pyqt5_get_signal_signature_t)sipImportSymbol("pyqt5_get_signal_signature");
        
        if (pyqt5_get_signal_signature)
        {
            QByteArray signal_signature;
            
        #if defined(SIP_PROTECTED_IS_PUBLIC)
            if ((sipError = pyqt5_get_signal_signature(a0, sipCpp, signal_signature)) == sipErrorNone)
            {
                sipRes = sipCpp->receivers(signal_signature.constData());
            }
        #else
            if ((sipError = pyqt5_get_signal_signature(a0, static_cast<const QObject *>(sipCpp), signal_signature)) == sipErrorNone)
            {
                sipRes = sipCpp->sipProtect_receivers(signal_signature.constData());
            }
        #endif
            else if (sipError == sipErrorContinue)
            {
                sipError = sipBadCallableArg(0, a0);
            }
        }
#line 425 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\Enginio/sipEnginioEnginioOAuth2Authentication.cpp"

            if (sipError == sipErrorFail)
                return 0;

            if (sipError == sipErrorNone)
            {
            return SIPLong_FromLong(sipRes);
            }

            sipAddException(sipError, &sipParseErr);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_receivers, doc_EnginioOAuth2Authentication_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_timerEvent, "EnginioOAuth2Authentication.timerEvent(QTimerEvent)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent* a0;
        sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_timerEvent, doc_EnginioOAuth2Authentication_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_childEvent, "EnginioOAuth2Authentication.childEvent(QChildEvent)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent* a0;
        sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_childEvent, doc_EnginioOAuth2Authentication_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_customEvent, "EnginioOAuth2Authentication.customEvent(QEvent)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_customEvent, doc_EnginioOAuth2Authentication_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_connectNotify, "EnginioOAuth2Authentication.connectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_connectNotify, doc_EnginioOAuth2Authentication_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_disconnectNotify, "EnginioOAuth2Authentication.disconnectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_disconnectNotify, doc_EnginioOAuth2Authentication_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_senderSignalIndex, "EnginioOAuth2Authentication.senderSignalIndex() -> int");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_senderSignalIndex, doc_EnginioOAuth2Authentication_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_isSignalConnected, "EnginioOAuth2Authentication.isSignalConnected(QMetaMethod) -> bool");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;
        const sipEnginioOAuth2Authentication *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_isSignalConnected, doc_EnginioOAuth2Authentication_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_user, "EnginioOAuth2Authentication.user() -> str");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_user(PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_user(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioOAuth2Authentication *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->user());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_user, doc_EnginioOAuth2Authentication_user);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_password, "EnginioOAuth2Authentication.password() -> str");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_password(PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_password(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const EnginioOAuth2Authentication *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->password());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_password, doc_EnginioOAuth2Authentication_password);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_setUser, "EnginioOAuth2Authentication.setUser(str)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_setUser(PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_setUser(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        EnginioOAuth2Authentication *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setUser(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_setUser, doc_EnginioOAuth2Authentication_setUser);

    return NULL;
}


PyDoc_STRVAR(doc_EnginioOAuth2Authentication_setPassword, "EnginioOAuth2Authentication.setPassword(str)");

extern "C" {static PyObject *meth_EnginioOAuth2Authentication_setPassword(PyObject *, PyObject *);}
static PyObject *meth_EnginioOAuth2Authentication_setPassword(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        EnginioOAuth2Authentication *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_EnginioOAuth2Authentication, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setPassword(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_EnginioOAuth2Authentication, sipName_setPassword, doc_EnginioOAuth2Authentication_setPassword);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_EnginioOAuth2Authentication(void *, const sipTypeDef *);}
static void *cast_EnginioOAuth2Authentication(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_EnginioOAuth2Authentication)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_EnginioIdentity)->ctd_cast((EnginioIdentity *)(EnginioOAuth2Authentication *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_EnginioOAuth2Authentication(void *, int);}
static void release_EnginioOAuth2Authentication(void *sipCppV,int)
{
    EnginioOAuth2Authentication *sipCpp = reinterpret_cast<EnginioOAuth2Authentication *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_EnginioOAuth2Authentication(sipSimpleWrapper *);}
static void dealloc_EnginioOAuth2Authentication(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipEnginioOAuth2Authentication *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_EnginioOAuth2Authentication(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_EnginioOAuth2Authentication(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_EnginioOAuth2Authentication(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipEnginioOAuth2Authentication *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipEnginioOAuth2Authentication(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_EnginioOAuth2Authentication[] = {{7, 255, 1}};


static PyMethodDef methods_EnginioOAuth2Authentication[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_EnginioOAuth2Authentication_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_EnginioOAuth2Authentication_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_EnginioOAuth2Authentication_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_EnginioOAuth2Authentication_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_EnginioOAuth2Authentication_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_password), meth_EnginioOAuth2Authentication_password, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioOAuth2Authentication_password)},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_EnginioOAuth2Authentication_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_EnginioOAuth2Authentication_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_EnginioOAuth2Authentication_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setPassword), meth_EnginioOAuth2Authentication_setPassword, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioOAuth2Authentication_setPassword)},
    {SIP_MLNAME_CAST(sipName_setUser), meth_EnginioOAuth2Authentication_setUser, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioOAuth2Authentication_setUser)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_EnginioOAuth2Authentication_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_user), meth_EnginioOAuth2Authentication_user, METH_VARARGS, SIP_MLDOC_CAST(doc_EnginioOAuth2Authentication_user)}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_EnginioOAuth2Authentication[] = {
    {"passwordChanged(QString)", "\1EnginioOAuth2Authentication.passwordChanged[str]", 0, 0},
    {"userChanged(QString)", "\1EnginioOAuth2Authentication.userChanged[str]", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_EnginioOAuth2Authentication, "\1EnginioOAuth2Authentication(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_Enginio_EnginioOAuth2Authentication = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_EnginioOAuth2Authentication,
        {0}
    },
    {
        sipNameNr_EnginioOAuth2Authentication,
        {0, 0, 1},
        13, methods_EnginioOAuth2Authentication,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_EnginioOAuth2Authentication,
    -1,
    -1,
    supers_EnginioOAuth2Authentication,
    0,
    init_type_EnginioOAuth2Authentication,
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
    dealloc_EnginioOAuth2Authentication,
    0,
    0,
    0,
    release_EnginioOAuth2Authentication,
    cast_EnginioOAuth2Authentication,
    0,
    0,
    0,
    0,
    0,
    0
},
    &EnginioOAuth2Authentication::staticMetaObject,
    0,
    signals_EnginioOAuth2Authentication,
    0
};
