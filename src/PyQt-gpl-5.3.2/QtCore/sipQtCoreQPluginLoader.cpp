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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpluginloader.sip"
#include <qpluginloader.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 27 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qstring.sip"
#include <qstring.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qlibrary.sip"
#include <qlibrary.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 144 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 231 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 219 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 32 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qthread.sip"
#include <qthread.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"


class sipQPluginLoader : public QPluginLoader
{
public:
    sipQPluginLoader(QObject*);
    sipQPluginLoader(const QString&,QObject*);
    virtual ~sipQPluginLoader();

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
    sipQPluginLoader(const sipQPluginLoader &);
    sipQPluginLoader &operator = (const sipQPluginLoader &);

    char sipPyMethods[7];
};

sipQPluginLoader::sipQPluginLoader(QObject*a0): QPluginLoader(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPluginLoader::sipQPluginLoader(const QString& a0,QObject*a1): QPluginLoader(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQPluginLoader::~sipQPluginLoader()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQPluginLoader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtCore_qt_metaobject(sipPySelf,sipType_QPluginLoader);
}

int sipQPluginLoader::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QPluginLoader::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtCore_qt_metacall(sipPySelf,sipType_QPluginLoader,_c,_id,_a);

    return _id;
}

void *sipQPluginLoader::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtCore_qt_metacast(sipPySelf, sipType_QPluginLoader, _clname, &sipCpp) ? sipCpp : QPluginLoader::qt_metacast(_clname));
}

void sipQPluginLoader::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QPluginLoader::disconnectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_46(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    sipVH_QtCore_46(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPluginLoader::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QPluginLoader::connectNotify(a0);
        return;
    }

    extern void sipVH_QtCore_46(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    sipVH_QtCore_46(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPluginLoader::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QPluginLoader::customEvent(a0);
        return;
    }

    extern void sipVH_QtCore_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    sipVH_QtCore_25(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPluginLoader::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QPluginLoader::childEvent(a0);
        return;
    }

    extern void sipVH_QtCore_47(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    sipVH_QtCore_47(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQPluginLoader::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QPluginLoader::timerEvent(a0);
        return;
    }

    extern void sipVH_QtCore_9(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    sipVH_QtCore_9(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQPluginLoader::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QPluginLoader::eventFilter(a0,a1);

    extern bool sipVH_QtCore_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return sipVH_QtCore_26(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQPluginLoader::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QPluginLoader::event(a0);

    extern bool sipVH_QtCore_5(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return sipVH_QtCore_5(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QObject* sipQPluginLoader::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQPluginLoader::sipProtect_receivers(const char*a0) const
{
    return QObject::receivers(a0);
}

void sipQPluginLoader::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent*a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQPluginLoader::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent*a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQPluginLoader::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent*a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQPluginLoader::sipProtectVirt_connectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQPluginLoader::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQPluginLoader::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}

bool sipQPluginLoader::sipProtect_isSignalConnected(const QMetaMethod& a0) const
{
    return QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_QPluginLoader_sender, "QPluginLoader.sender() -> QObject");

extern "C" {static PyObject *meth_QPluginLoader_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            QObject*sipRes = 0;

#line 540 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qobject.sip"
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
#line 375 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_sender, doc_QPluginLoader_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_receivers, "QPluginLoader.receivers(signal) -> int");

extern "C" {static PyObject *meth_QPluginLoader_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QPluginLoader, &sipCpp, &a0))
        {
            int sipRes = 0;
            sipErrorState sipError = sipErrorNone;

#line 569 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtCore/qobject.sip"
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
#line 434 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtCore/sipQtCoreQPluginLoader.cpp"

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
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_receivers, doc_QPluginLoader_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_timerEvent, "QPluginLoader.timerEvent(QTimerEvent)");

extern "C" {static PyObject *meth_QPluginLoader_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent* a0;
        sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_timerEvent, doc_QPluginLoader_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_childEvent, "QPluginLoader.childEvent(QChildEvent)");

extern "C" {static PyObject *meth_QPluginLoader_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent* a0;
        sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_childEvent, doc_QPluginLoader_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_customEvent, "QPluginLoader.customEvent(QEvent)");

extern "C" {static PyObject *meth_QPluginLoader_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_customEvent, doc_QPluginLoader_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_connectNotify, "QPluginLoader.connectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QPluginLoader_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_connectNotify, doc_QPluginLoader_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_disconnectNotify, "QPluginLoader.disconnectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QPluginLoader_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_disconnectNotify, doc_QPluginLoader_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_senderSignalIndex, "QPluginLoader.senderSignalIndex() -> int");

extern "C" {static PyObject *meth_QPluginLoader_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_senderSignalIndex, doc_QPluginLoader_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_isSignalConnected, "QPluginLoader.isSignalConnected(QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QPluginLoader_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;
        const sipQPluginLoader *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_isSignalConnected, doc_QPluginLoader_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_instance, "QPluginLoader.instance() -> QObject");

extern "C" {static PyObject *meth_QPluginLoader_instance(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_instance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            QObject*sipRes;

            sipRes = sipCpp->instance();

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_instance, doc_QPluginLoader_instance);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_staticInstances, "QPluginLoader.staticInstances() -> list-of-QObject");

extern "C" {static PyObject *meth_QPluginLoader_staticInstances(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_staticInstances(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QObjectList*sipRes;

            sipRes = new QObjectList(QPluginLoader::staticInstances());

            return sipConvertFromNewType(sipRes,sipType_QList_0101QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_staticInstances, doc_QPluginLoader_staticInstances);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_load, "QPluginLoader.load() -> bool");

extern "C" {static PyObject *meth_QPluginLoader_load(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_load(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->load();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_load, doc_QPluginLoader_load);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_unload, "QPluginLoader.unload() -> bool");

extern "C" {static PyObject *meth_QPluginLoader_unload(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_unload(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->unload();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_unload, doc_QPluginLoader_unload);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_isLoaded, "QPluginLoader.isLoaded() -> bool");

extern "C" {static PyObject *meth_QPluginLoader_isLoaded(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_isLoaded(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isLoaded();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_isLoaded, doc_QPluginLoader_isLoaded);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_setFileName, "QPluginLoader.setFileName(str)");

extern "C" {static PyObject *meth_QPluginLoader_setFileName(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_setFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setFileName(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_setFileName, doc_QPluginLoader_setFileName);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_fileName, "QPluginLoader.fileName() -> str");

extern "C" {static PyObject *meth_QPluginLoader_fileName(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_fileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->fileName());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_fileName, doc_QPluginLoader_fileName);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_errorString, "QPluginLoader.errorString() -> str");

extern "C" {static PyObject *meth_QPluginLoader_errorString(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_errorString, doc_QPluginLoader_errorString);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_setLoadHints, "QPluginLoader.setLoadHints(QLibrary.LoadHints)");

extern "C" {static PyObject *meth_QPluginLoader_setLoadHints(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_setLoadHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QLibrary::LoadHints* a0;
        int a0State = 0;
        QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QPluginLoader, &sipCpp, sipType_QLibrary_LoadHints, &a0, &a0State))
        {
            sipCpp->setLoadHints(*a0);
            sipReleaseType(a0,sipType_QLibrary_LoadHints,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_setLoadHints, doc_QPluginLoader_setLoadHints);

    return NULL;
}


PyDoc_STRVAR(doc_QPluginLoader_loadHints, "QPluginLoader.loadHints() -> QLibrary.LoadHints");

extern "C" {static PyObject *meth_QPluginLoader_loadHints(PyObject *, PyObject *);}
static PyObject *meth_QPluginLoader_loadHints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QPluginLoader *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QPluginLoader, &sipCpp))
        {
            QLibrary::LoadHints*sipRes;

            sipRes = new QLibrary::LoadHints(sipCpp->loadHints());

            return sipConvertFromNewType(sipRes,sipType_QLibrary_LoadHints,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QPluginLoader, sipName_loadHints, doc_QPluginLoader_loadHints);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QPluginLoader(void *, const sipTypeDef *);}
static void *cast_QPluginLoader(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QPluginLoader)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QPluginLoader *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QPluginLoader(void *, int);}
static void release_QPluginLoader(void *sipCppV,int)
{
    QPluginLoader *sipCpp = reinterpret_cast<QPluginLoader *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QPluginLoader(sipSimpleWrapper *);}
static void dealloc_QPluginLoader(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQPluginLoader *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QPluginLoader(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QPluginLoader(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QPluginLoader(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQPluginLoader *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQPluginLoader(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QObject* a1 = 0;

        static const char *sipKwdList[] = {
            NULL,
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J1|JH", sipType_QString,&a0, &a0State, sipType_QObject, &a1, sipOwner))
        {
            sipCpp = new sipQPluginLoader(*a0,a1);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QPluginLoader[] = {{160, 255, 1}};


static PyMethodDef methods_QPluginLoader[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QPluginLoader_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QPluginLoader_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QPluginLoader_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QPluginLoader_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_errorString), meth_QPluginLoader_errorString, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_errorString)},
    {SIP_MLNAME_CAST(sipName_fileName), meth_QPluginLoader_fileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_fileName)},
    {SIP_MLNAME_CAST(sipName_instance), meth_QPluginLoader_instance, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_instance)},
    {SIP_MLNAME_CAST(sipName_isLoaded), meth_QPluginLoader_isLoaded, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_isLoaded)},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QPluginLoader_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_load), meth_QPluginLoader_load, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_load)},
    {SIP_MLNAME_CAST(sipName_loadHints), meth_QPluginLoader_loadHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_loadHints)},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QPluginLoader_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QPluginLoader_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QPluginLoader_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setFileName), meth_QPluginLoader_setFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_setFileName)},
    {SIP_MLNAME_CAST(sipName_setLoadHints), meth_QPluginLoader_setLoadHints, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_setLoadHints)},
    {SIP_MLNAME_CAST(sipName_staticInstances), meth_QPluginLoader_staticInstances, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_staticInstances)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QPluginLoader_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_unload), meth_QPluginLoader_unload, METH_VARARGS, SIP_MLDOC_CAST(doc_QPluginLoader_unload)}
};

PyDoc_STRVAR(doc_QPluginLoader, "\1QPluginLoader(QObject parent=None)\n"
    "QPluginLoader(str, QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtCore_QPluginLoader = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QPluginLoader,
        {0}
    },
    {
        sipNameNr_QPluginLoader,
        {0, 0, 1},
        19, methods_QPluginLoader,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QPluginLoader,
    -1,
    -1,
    supers_QPluginLoader,
    0,
    init_type_QPluginLoader,
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
    dealloc_QPluginLoader,
    0,
    0,
    0,
    release_QPluginLoader,
    cast_QPluginLoader,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QPluginLoader::staticMetaObject,
    0,
    0,
    0
};
