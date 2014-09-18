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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qicon.sip"
#include <qicon.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"
#line 26 "sip/QtCore/qdatastream.sip"
#include <qdatastream.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"
#line 30 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQIconEngine.cpp"


class sipQIconEngine : public QIconEngine
{
public:
    sipQIconEngine();
    sipQIconEngine(const QIconEngine&);
    virtual ~sipQIconEngine();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    QString iconName() const;
    QList<QSize> availableSizes(QIcon::Mode,QIcon::State) const;
    bool write(QDataStream&) const;
    bool read(QDataStream&);
    QIconEngine* clone() const;
    QString key() const;
    void addFile(const QString&,const QSize&,QIcon::Mode,QIcon::State);
    void addPixmap(const QPixmap&,QIcon::Mode,QIcon::State);
    QPixmap pixmap(const QSize&,QIcon::Mode,QIcon::State);
    QSize actualSize(const QSize&,QIcon::Mode,QIcon::State);
    void paint(QPainter*,const QRect&,QIcon::Mode,QIcon::State);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQIconEngine(const sipQIconEngine &);
    sipQIconEngine &operator = (const sipQIconEngine &);

    char sipPyMethods[11];
};

sipQIconEngine::sipQIconEngine(): QIconEngine(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngine::sipQIconEngine(const QIconEngine& a0): QIconEngine(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngine::~sipQIconEngine()
{
    sipCommonDtor(sipPySelf);
}

QString sipQIconEngine::iconName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_iconName);

    if (!sipMeth)
        return QIconEngine::iconName();

    typedef QString (*sipVH_QtCore_16)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_16)(sipModuleAPI_QtGui_QtCore->em_virthandlers[16]))(sipGILState, 0, sipPySelf, sipMeth);
}

QList<QSize> sipQIconEngine::availableSizes(QIcon::Mode a0,QIcon::State a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_availableSizes);

    if (!sipMeth)
        return QIconEngine::availableSizes(a0,a1);

    extern QList<QSize> sipVH_QtGui_58(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QIcon::Mode,QIcon::State);

    return sipVH_QtGui_58(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

bool sipQIconEngine::write(QDataStream& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_write);

    if (!sipMeth)
        return QIconEngine::write(a0);

    extern bool sipVH_QtGui_59(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QDataStream&);

    return sipVH_QtGui_59(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQIconEngine::read(QDataStream& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_read);

    if (!sipMeth)
        return QIconEngine::read(a0);

    extern bool sipVH_QtGui_59(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QDataStream&);

    return sipVH_QtGui_59(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QIconEngine* sipQIconEngine::clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QIconEngine,sipName_clone);

    if (!sipMeth)
        return 0;

    extern QIconEngine* sipVH_QtGui_60(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_60(sipGILState, 0, sipPySelf, sipMeth);
}

QString sipQIconEngine::key() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[5]),sipPySelf,NULL,sipName_key);

    if (!sipMeth)
        return QIconEngine::key();

    typedef QString (*sipVH_QtCore_16)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return ((sipVH_QtCore_16)(sipModuleAPI_QtGui_QtCore->em_virthandlers[16]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQIconEngine::addFile(const QString& a0,const QSize& a1,QIcon::Mode a2,QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_addFile);

    if (!sipMeth)
    {
        QIconEngine::addFile(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtGui_61(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QString&,const QSize&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_61(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}

void sipQIconEngine::addPixmap(const QPixmap& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[7],sipPySelf,NULL,sipName_addPixmap);

    if (!sipMeth)
    {
        QIconEngine::addPixmap(a0,a1,a2);
        return;
    }

    extern void sipVH_QtGui_62(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QPixmap&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_62(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

QPixmap sipQIconEngine::pixmap(const QSize& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[8],sipPySelf,NULL,sipName_pixmap);

    if (!sipMeth)
        return QIconEngine::pixmap(a0,a1,a2);

    extern QPixmap sipVH_QtGui_63(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSize&,QIcon::Mode,QIcon::State);

    return sipVH_QtGui_63(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

QSize sipQIconEngine::actualSize(const QSize& a0,QIcon::Mode a1,QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_actualSize);

    if (!sipMeth)
        return QIconEngine::actualSize(a0,a1,a2);

    extern QSize sipVH_QtGui_64(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSize&,QIcon::Mode,QIcon::State);

    return sipVH_QtGui_64(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

void sipQIconEngine::paint(QPainter*a0,const QRect& a1,QIcon::Mode a2,QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,sipName_QIconEngine,sipName_paint);

    if (!sipMeth)
        return;

    extern void sipVH_QtGui_65(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPainter*,const QRect&,QIcon::Mode,QIcon::State);

    sipVH_QtGui_65(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3);
}


PyDoc_STRVAR(doc_QIconEngine_paint, "QIconEngine.paint(QPainter, QRect, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_paint(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_paint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPainter* a0;
        const QRect* a1;
        QIcon::Mode a2;
        QIcon::State a3;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QPainter, &a0, sipType_QRect, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QIconEngine, sipName_paint);
                return NULL;
            }

            sipCpp->paint(a0,*a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_paint, doc_QIconEngine_paint);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_actualSize, "QIconEngine.actualSize(QSize, QIcon.Mode, QIcon.State) -> QSize");

extern "C" {static PyObject *meth_QIconEngine_actualSize(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_actualSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSize* a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QSize*sipRes;

            sipRes = new QSize((sipSelfWasArg ? sipCpp->QIconEngine::actualSize(*a0,a1,a2) : sipCpp->actualSize(*a0,a1,a2)));

            return sipConvertFromNewType(sipRes,sipType_QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_actualSize, doc_QIconEngine_actualSize);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_pixmap, "QIconEngine.pixmap(QSize, QIcon.Mode, QIcon.State) -> QPixmap");

extern "C" {static PyObject *meth_QIconEngine_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSize* a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            QPixmap*sipRes;

            sipRes = new QPixmap((sipSelfWasArg ? sipCpp->QIconEngine::pixmap(*a0,a1,a2) : sipCpp->pixmap(*a0,a1,a2)));

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_pixmap, doc_QIconEngine_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_addPixmap, "QIconEngine.addPixmap(QPixmap, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_addPixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_addPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QPixmap* a0;
        QIcon::Mode a1;
        QIcon::State a2;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QPixmap, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            (sipSelfWasArg ? sipCpp->QIconEngine::addPixmap(*a0,a1,a2) : sipCpp->addPixmap(*a0,a1,a2));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_addPixmap, doc_QIconEngine_addPixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_addFile, "QIconEngine.addFile(str, QSize, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_addFile(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_addFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QString* a0;
        int a0State = 0;
        const QSize* a1;
        QIcon::Mode a2;
        QIcon::State a3;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            (sipSelfWasArg ? sipCpp->QIconEngine::addFile(*a0,*a1,a2,a3) : sipCpp->addFile(*a0,*a1,a2,a3));
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_addFile, doc_QIconEngine_addFile);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_key, "QIconEngine.key() -> str");

extern "C" {static PyObject *meth_QIconEngine_key(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngine, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString((sipSelfWasArg ? sipCpp->QIconEngine::key() : sipCpp->key()));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_key, doc_QIconEngine_key);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_clone, "QIconEngine.clone() -> QIconEngine");

extern "C" {static PyObject *meth_QIconEngine_clone(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngine, &sipCpp))
        {
            QIconEngine*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QIconEngine, sipName_clone);
                return NULL;
            }

            sipRes = sipCpp->clone();

            return sipConvertFromNewType(sipRes,sipType_QIconEngine,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_clone, doc_QIconEngine_clone);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_read, "QIconEngine.read(QDataStream) -> bool");

extern "C" {static PyObject *meth_QIconEngine_read(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDataStream* a0;
        QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QDataStream, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QIconEngine::read(*a0) : sipCpp->read(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_read, doc_QIconEngine_read);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_write, "QIconEngine.write(QDataStream) -> bool");

extern "C" {static PyObject *meth_QIconEngine_write(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QDataStream* a0;
        const QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QDataStream, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QIconEngine::write(*a0) : sipCpp->write(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_write, doc_QIconEngine_write);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_availableSizes, "QIconEngine.availableSizes(QIcon.Mode mode=QIcon.Normal, QIcon.State state=QIcon.Off) -> list-of-QSize");

extern "C" {static PyObject *meth_QIconEngine_availableSizes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_availableSizes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QIcon::Mode a0 = QIcon::Normal;
        QIcon::State a1 = QIcon::Off;
        const QIconEngine *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QIcon_Mode, &a0, sipType_QIcon_State, &a1))
        {
            QList<QSize>*sipRes;

            sipRes = new QList<QSize>((sipSelfWasArg ? sipCpp->QIconEngine::availableSizes(a0,a1) : sipCpp->availableSizes(a0,a1)));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSize,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_availableSizes, doc_QIconEngine_availableSizes);

    return NULL;
}


PyDoc_STRVAR(doc_QIconEngine_iconName, "QIconEngine.iconName() -> str");

extern "C" {static PyObject *meth_QIconEngine_iconName(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_iconName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngine, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString((sipSelfWasArg ? sipCpp->QIconEngine::iconName() : sipCpp->iconName()));

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_iconName, doc_QIconEngine_iconName);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QIconEngine(void *, const sipTypeDef *);}
static void *cast_QIconEngine(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QIconEngine)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIconEngine(void *, int);}
static void release_QIconEngine(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQIconEngine *>(sipCppV);
    else
        delete reinterpret_cast<QIconEngine *>(sipCppV);
}


extern "C" {static void dealloc_QIconEngine(sipSimpleWrapper *);}
static void dealloc_QIconEngine(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQIconEngine *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QIconEngine(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QIconEngine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIconEngine(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQIconEngine *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQIconEngine();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QIconEngine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QIconEngine, &a0))
        {
            sipCpp = new sipQIconEngine(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QIconEngine[] = {
    {SIP_MLNAME_CAST(sipName_actualSize), meth_QIconEngine_actualSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_actualSize)},
    {SIP_MLNAME_CAST(sipName_addFile), meth_QIconEngine_addFile, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_addFile)},
    {SIP_MLNAME_CAST(sipName_addPixmap), meth_QIconEngine_addPixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_addPixmap)},
    {SIP_MLNAME_CAST(sipName_availableSizes), (PyCFunction)meth_QIconEngine_availableSizes, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QIconEngine_availableSizes)},
    {SIP_MLNAME_CAST(sipName_clone), meth_QIconEngine_clone, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_clone)},
    {SIP_MLNAME_CAST(sipName_iconName), meth_QIconEngine_iconName, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_iconName)},
    {SIP_MLNAME_CAST(sipName_key), meth_QIconEngine_key, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_key)},
    {SIP_MLNAME_CAST(sipName_paint), meth_QIconEngine_paint, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_paint)},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QIconEngine_pixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_pixmap)},
    {SIP_MLNAME_CAST(sipName_read), meth_QIconEngine_read, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_read)},
    {SIP_MLNAME_CAST(sipName_write), meth_QIconEngine_write, METH_VARARGS, SIP_MLDOC_CAST(doc_QIconEngine_write)}
};

static sipEnumMemberDef enummembers_QIconEngine[] = {
    {sipName_AvailableSizesHook, static_cast<int>(QIconEngine::AvailableSizesHook), 63},
    {sipName_IconNameHook, static_cast<int>(QIconEngine::IconNameHook), 63},
};

PyDoc_STRVAR(doc_QIconEngine, "\1QIconEngine()\n"
    "QIconEngine(QIconEngine)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QIconEngine = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QIconEngine,
        {0}
    },
    {
        sipNameNr_QIconEngine,
        {0, 0, 1},
        11, methods_QIconEngine,
        2, enummembers_QIconEngine,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QIconEngine,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QIconEngine,
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
    dealloc_QIconEngine,
    0,
    0,
    0,
    release_QIconEngine,
    cast_QIconEngine,
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
