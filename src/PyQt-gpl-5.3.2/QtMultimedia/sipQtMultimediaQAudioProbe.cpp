/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:17:51 2014
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

#include "sipAPIQtMultimedia.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtMultimedia/qaudioprobe.sip"
#include <qaudioprobe.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"

#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtMultimedia/qaudiobuffer.sip"
#include <qaudiobuffer.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtMultimedia/qmediaobject.sip"
#include <qmediaobject.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtMultimedia/qmediarecorder.sip"
#include <qmediarecorder.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 81 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 84 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 87 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"


class sipQAudioProbe : public QAudioProbe
{
public:
    sipQAudioProbe(QObject*);
    virtual ~sipQAudioProbe();

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
    sipQAudioProbe(const sipQAudioProbe &);
    sipQAudioProbe &operator = (const sipQAudioProbe &);

    char sipPyMethods[7];
};

sipQAudioProbe::sipQAudioProbe(QObject*a0): QAudioProbe(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAudioProbe::~sipQAudioProbe()
{
    sipCommonDtor(sipPySelf);
}

const QMetaObject *sipQAudioProbe::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : sip_QtMultimedia_qt_metaobject(sipPySelf,sipType_QAudioProbe);
}

int sipQAudioProbe::qt_metacall(QMetaObject::Call _c,int _id,void **_a)
{
    _id = QAudioProbe::qt_metacall(_c,_id,_a);

    if (_id >= 0)
        _id = sip_QtMultimedia_qt_metacall(sipPySelf,sipType_QAudioProbe,_c,_id,_a);

    return _id;
}

void *sipQAudioProbe::qt_metacast(const char *_clname)
{
    void *sipCpp;

    return (sip_QtMultimedia_qt_metacast(sipPySelf, sipType_QAudioProbe, _clname, &sipCpp) ? sipCpp : QAudioProbe::qt_metacast(_clname));
}

void sipQAudioProbe::disconnectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_disconnectNotify);

    if (!sipMeth)
    {
        QAudioProbe::disconnectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioProbe::connectNotify(const QMetaMethod& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_connectNotify);

    if (!sipMeth)
    {
        QAudioProbe::connectNotify(a0);
        return;
    }

    typedef void (*sipVH_QtCore_46)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QMetaMethod&);

    ((sipVH_QtCore_46)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[46]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioProbe::customEvent(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_customEvent);

    if (!sipMeth)
    {
        QAudioProbe::customEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_25)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    ((sipVH_QtCore_25)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[25]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioProbe::childEvent(QChildEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_childEvent);

    if (!sipMeth)
    {
        QAudioProbe::childEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_47)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QChildEvent*);

    ((sipVH_QtCore_47)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[47]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQAudioProbe::timerEvent(QTimerEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_timerEvent);

    if (!sipMeth)
    {
        QAudioProbe::timerEvent(a0);
        return;
    }

    typedef void (*sipVH_QtCore_9)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTimerEvent*);

    ((sipVH_QtCore_9)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[9]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQAudioProbe::eventFilter(QObject*a0,QEvent*a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_eventFilter);

    if (!sipMeth)
        return QAudioProbe::eventFilter(a0,a1);

    typedef bool (*sipVH_QtCore_26)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QObject*,QEvent*);

    return ((sipVH_QtCore_26)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[26]))(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQAudioProbe::event(QEvent*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_event);

    if (!sipMeth)
        return QAudioProbe::event(a0);

    typedef bool (*sipVH_QtCore_5)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QEvent*);

    return ((sipVH_QtCore_5)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[5]))(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QObject* sipQAudioProbe::sipProtect_sender() const
{
    return QObject::sender();
}

int sipQAudioProbe::sipProtect_receivers(const char*a0) const
{
    return QObject::receivers(a0);
}

void sipQAudioProbe::sipProtectVirt_timerEvent(bool sipSelfWasArg,QTimerEvent*a0)
{
    (sipSelfWasArg ? QObject::timerEvent(a0) : timerEvent(a0));
}

void sipQAudioProbe::sipProtectVirt_childEvent(bool sipSelfWasArg,QChildEvent*a0)
{
    (sipSelfWasArg ? QObject::childEvent(a0) : childEvent(a0));
}

void sipQAudioProbe::sipProtectVirt_customEvent(bool sipSelfWasArg,QEvent*a0)
{
    (sipSelfWasArg ? QObject::customEvent(a0) : customEvent(a0));
}

void sipQAudioProbe::sipProtectVirt_connectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::connectNotify(a0) : connectNotify(a0));
}

void sipQAudioProbe::sipProtectVirt_disconnectNotify(bool sipSelfWasArg,const QMetaMethod& a0)
{
    (sipSelfWasArg ? QObject::disconnectNotify(a0) : disconnectNotify(a0));
}

int sipQAudioProbe::sipProtect_senderSignalIndex() const
{
    return QObject::senderSignalIndex();
}

bool sipQAudioProbe::sipProtect_isSignalConnected(const QMetaMethod& a0) const
{
    return QObject::isSignalConnected(a0);
}


PyDoc_STRVAR(doc_QAudioProbe_sender, "QAudioProbe.sender() -> QObject");

extern "C" {static PyObject *meth_QAudioProbe_sender(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_sender(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QAudioProbe, &sipCpp))
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
#line 375 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"

            return sipConvertFromType(sipRes,sipType_QObject,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_sender, doc_QAudioProbe_sender);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_receivers, "QAudioProbe.receivers(signal) -> int");

extern "C" {static PyObject *meth_QAudioProbe_receivers(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_receivers(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
        const sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BP0", &sipSelf, sipType_QAudioProbe, &sipCpp, &a0))
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
#line 434 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAudioProbe.cpp"

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
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_receivers, doc_QAudioProbe_receivers);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_timerEvent, "QAudioProbe.timerEvent(QTimerEvent)");

extern "C" {static PyObject *meth_QAudioProbe_timerEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_timerEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QTimerEvent* a0;
        sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QAudioProbe, &sipCpp, sipType_QTimerEvent, &a0))
        {
            sipCpp->sipProtectVirt_timerEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_timerEvent, doc_QAudioProbe_timerEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_childEvent, "QAudioProbe.childEvent(QChildEvent)");

extern "C" {static PyObject *meth_QAudioProbe_childEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_childEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QChildEvent* a0;
        sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QAudioProbe, &sipCpp, sipType_QChildEvent, &a0))
        {
            sipCpp->sipProtectVirt_childEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_childEvent, doc_QAudioProbe_childEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_customEvent, "QAudioProbe.customEvent(QEvent)");

extern "C" {static PyObject *meth_QAudioProbe_customEvent(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_customEvent(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QEvent* a0;
        sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ8", &sipSelf, sipType_QAudioProbe, &sipCpp, sipType_QEvent, &a0))
        {
            sipCpp->sipProtectVirt_customEvent(sipSelfWasArg,a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_customEvent, doc_QAudioProbe_customEvent);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_connectNotify, "QAudioProbe.connectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QAudioProbe_connectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_connectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QAudioProbe, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_connectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_connectNotify, doc_QAudioProbe_connectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_disconnectNotify, "QAudioProbe.disconnectNotify(QMetaMethod)");

extern "C" {static PyObject *meth_QAudioProbe_disconnectNotify(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_disconnectNotify(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QMetaMethod* a0;
        sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QAudioProbe, &sipCpp, sipType_QMetaMethod, &a0))
        {
            sipCpp->sipProtectVirt_disconnectNotify(sipSelfWasArg,*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_disconnectNotify, doc_QAudioProbe_disconnectNotify);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_senderSignalIndex, "QAudioProbe.senderSignalIndex() -> int");

extern "C" {static PyObject *meth_QAudioProbe_senderSignalIndex(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_senderSignalIndex(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QAudioProbe, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->sipProtect_senderSignalIndex();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_senderSignalIndex, doc_QAudioProbe_senderSignalIndex);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_isSignalConnected, "QAudioProbe.isSignalConnected(QMetaMethod) -> bool");

extern "C" {static PyObject *meth_QAudioProbe_isSignalConnected(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_isSignalConnected(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QMetaMethod* a0;
        const sipQAudioProbe *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9", &sipSelf, sipType_QAudioProbe, &sipCpp, sipType_QMetaMethod, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_isSignalConnected(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_isSignalConnected, doc_QAudioProbe_isSignalConnected);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_setSource, "QAudioProbe.setSource(QMediaObject) -> bool\n"
    "QAudioProbe.setSource(QMediaRecorder) -> bool");

extern "C" {static PyObject *meth_QAudioProbe_setSource(PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_setSource(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QMediaObject* a0;
        QAudioProbe *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAudioProbe, &sipCpp, sipType_QMediaObject, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setSource(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        QMediaRecorder* a0;
        QAudioProbe *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QAudioProbe, &sipCpp, sipType_QMediaRecorder, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->setSource(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_setSource, doc_QAudioProbe_setSource);

    return NULL;
}


PyDoc_STRVAR(doc_QAudioProbe_isActive, "QAudioProbe.isActive() -> bool");

extern "C" {static PyObject *meth_QAudioProbe_isActive(PyObject *, PyObject *);}
static PyObject *meth_QAudioProbe_isActive(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAudioProbe *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAudioProbe, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isActive();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAudioProbe, sipName_isActive, doc_QAudioProbe_isActive);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAudioProbe(void *, const sipTypeDef *);}
static void *cast_QAudioProbe(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QAudioProbe)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QObject)->ctd_cast((QObject *)(QAudioProbe *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAudioProbe(void *, int);}
static void release_QAudioProbe(void *sipCppV,int)
{
    QAudioProbe *sipCpp = reinterpret_cast<QAudioProbe *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QAudioProbe(sipSimpleWrapper *);}
static void dealloc_QAudioProbe(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAudioProbe *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAudioProbe(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAudioProbe(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAudioProbe(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **sipOwner, PyObject **sipParseErr)
{
    sipQAudioProbe *sipCpp = 0;

    {
        QObject* a0 = 0;

        static const char *sipKwdList[] = {
            sipName_parent,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|JH", sipType_QObject, &a0, sipOwner))
        {
            sipCpp = new sipQAudioProbe(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QAudioProbe[] = {{160, 0, 1}};


static PyMethodDef methods_QAudioProbe[] = {
    {SIP_MLNAME_CAST(sipName_childEvent), (PyCFunction)meth_QAudioProbe_childEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_connectNotify), (PyCFunction)meth_QAudioProbe_connectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_customEvent), (PyCFunction)meth_QAudioProbe_customEvent, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_disconnectNotify), (PyCFunction)meth_QAudioProbe_disconnectNotify, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_isActive), meth_QAudioProbe_isActive, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioProbe_isActive)},
    {SIP_MLNAME_CAST(sipName_isSignalConnected), (PyCFunction)meth_QAudioProbe_isSignalConnected, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_receivers), (PyCFunction)meth_QAudioProbe_receivers, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_sender), (PyCFunction)meth_QAudioProbe_sender, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_senderSignalIndex), (PyCFunction)meth_QAudioProbe_senderSignalIndex, METH_VARARGS|METH_KEYWORDS, NULL},
    {SIP_MLNAME_CAST(sipName_setSource), meth_QAudioProbe_setSource, METH_VARARGS, SIP_MLDOC_CAST(doc_QAudioProbe_setSource)},
    {SIP_MLNAME_CAST(sipName_timerEvent), (PyCFunction)meth_QAudioProbe_timerEvent, METH_VARARGS|METH_KEYWORDS, NULL}
};


/* Define this type's signals. */
static const pyqt5QtSignal signals_QAudioProbe[] = {
    {"flush()", "\1QAudioProbe.flush", 0, 0},
    {"audioBufferProbed(QAudioBuffer)", "\1QAudioProbe.audioBufferProbed[QAudioBuffer]", 0, 0},
    {0, 0, 0, 0}
};

PyDoc_STRVAR(doc_QAudioProbe, "\1QAudioProbe(QObject parent=None)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QAudioProbe = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAudioProbe,
        {0}
    },
    {
        sipNameNr_QAudioProbe,
        {0, 0, 1},
        11, methods_QAudioProbe,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAudioProbe,
    -1,
    -1,
    supers_QAudioProbe,
    0,
    init_type_QAudioProbe,
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
    dealloc_QAudioProbe,
    0,
    0,
    0,
    release_QAudioProbe,
    cast_QAudioProbe,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QAudioProbe::staticMetaObject,
    0,
    signals_QAudioProbe,
    0
};
