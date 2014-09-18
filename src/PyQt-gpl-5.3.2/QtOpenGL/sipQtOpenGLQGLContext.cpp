/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:02 2014
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

#include "sipAPIQtOpenGL.h"

#line 183 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"

#line 73 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 30 "sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 26 "sip/QtGui/qpaintdevice.sip"
#include <qpaintdevice.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 165 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 30 "sip/QtGui/qimage.sip"
#include <qimage.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 30 "sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"
#line 183 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtOpenGL/qgl.sip"
#include <qgl.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtOpenGL/sipQtOpenGLQGLContext.cpp"


class sipQGLContext : public QGLContext
{
public:
    sipQGLContext(const QGLFormat&);
    virtual ~sipQGLContext();

    /*
     * There is a public method for every protected method visible from
     * this class.
     */
    bool sipProtectVirt_chooseContext(bool,const QGLContext*);
    bool sipProtect_deviceIsPixmap() const;
    bool sipProtect_windowCreated() const;
    void sipProtect_setWindowCreated(bool);
    bool sipProtect_initialized() const;
    void sipProtect_setInitialized(bool);

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool chooseContext(const QGLContext*);
    void swapBuffers() const;
    void doneCurrent();
    void makeCurrent();
    bool create(const QGLContext*);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQGLContext(const sipQGLContext &);
    sipQGLContext &operator = (const sipQGLContext &);

    char sipPyMethods[5];
};

sipQGLContext::sipQGLContext(const QGLFormat& a0): QGLContext(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQGLContext::~sipQGLContext()
{
    sipCommonDtor(sipPySelf);
}

bool sipQGLContext::chooseContext(const QGLContext*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_chooseContext);

    if (!sipMeth)
        return QGLContext::chooseContext(a0);

    extern bool sipVH_QtOpenGL_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QGLContext*);

    return sipVH_QtOpenGL_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipQGLContext::swapBuffers() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_swapBuffers);

    if (!sipMeth)
    {
        QGLContext::swapBuffers();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQGLContext::doneCurrent()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_doneCurrent);

    if (!sipMeth)
    {
        QGLContext::doneCurrent();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQGLContext::makeCurrent()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,NULL,sipName_makeCurrent);

    if (!sipMeth)
    {
        QGLContext::makeCurrent();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtOpenGL_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipQGLContext::create(const QGLContext*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[4],sipPySelf,NULL,sipName_create);

    if (!sipMeth)
        return QGLContext::create(a0);

    extern bool sipVH_QtOpenGL_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QGLContext*);

    return sipVH_QtOpenGL_0(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipQGLContext::sipProtectVirt_chooseContext(bool sipSelfWasArg,const QGLContext*a0)
{
    return (sipSelfWasArg ? QGLContext::chooseContext(a0) : chooseContext(a0));
}

bool sipQGLContext::sipProtect_deviceIsPixmap() const
{
    return QGLContext::deviceIsPixmap();
}

bool sipQGLContext::sipProtect_windowCreated() const
{
    return QGLContext::windowCreated();
}

void sipQGLContext::sipProtect_setWindowCreated(bool a0)
{
    QGLContext::setWindowCreated(a0);
}

bool sipQGLContext::sipProtect_initialized() const
{
    return QGLContext::initialized();
}

void sipQGLContext::sipProtect_setInitialized(bool a0)
{
    QGLContext::setInitialized(a0);
}


PyDoc_STRVAR(doc_QGLContext_create, "QGLContext.create(QGLContext shareContext=None) -> bool");

extern "C" {static PyObject *meth_QGLContext_create(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_create(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QGLContext* a0 = 0;
        QGLContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_shareContext,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J8", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QGLContext, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QGLContext::create(a0) : sipCpp->create(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_create, doc_QGLContext_create);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_isValid, "QGLContext.isValid() -> bool");

extern "C" {static PyObject *meth_QGLContext_isValid(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_isValid(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isValid();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_isValid, doc_QGLContext_isValid);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_isSharing, "QGLContext.isSharing() -> bool");

extern "C" {static PyObject *meth_QGLContext_isSharing(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_isSharing(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isSharing();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_isSharing, doc_QGLContext_isSharing);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_reset, "QGLContext.reset()");

extern "C" {static PyObject *meth_QGLContext_reset(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            sipCpp->reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_reset, doc_QGLContext_reset);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_format, "QGLContext.format() -> QGLFormat");

extern "C" {static PyObject *meth_QGLContext_format(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_format(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            QGLFormat*sipRes;

            sipRes = new QGLFormat(sipCpp->format());

            return sipConvertFromNewType(sipRes,sipType_QGLFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_format, doc_QGLContext_format);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_requestedFormat, "QGLContext.requestedFormat() -> QGLFormat");

extern "C" {static PyObject *meth_QGLContext_requestedFormat(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_requestedFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            QGLFormat*sipRes;

            sipRes = new QGLFormat(sipCpp->requestedFormat());

            return sipConvertFromNewType(sipRes,sipType_QGLFormat,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_requestedFormat, doc_QGLContext_requestedFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_setFormat, "QGLContext.setFormat(QGLFormat)");

extern "C" {static PyObject *meth_QGLContext_setFormat(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_setFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLFormat* a0;
        QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QGLFormat, &a0))
        {
            sipCpp->setFormat(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_setFormat, doc_QGLContext_setFormat);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_makeCurrent, "QGLContext.makeCurrent()");

extern "C" {static PyObject *meth_QGLContext_makeCurrent(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_makeCurrent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QGLContext::makeCurrent() : sipCpp->makeCurrent());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_makeCurrent, doc_QGLContext_makeCurrent);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_doneCurrent, "QGLContext.doneCurrent()");

extern "C" {static PyObject *meth_QGLContext_doneCurrent(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_doneCurrent(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QGLContext::doneCurrent() : sipCpp->doneCurrent());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_doneCurrent, doc_QGLContext_doneCurrent);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_swapBuffers, "QGLContext.swapBuffers()");

extern "C" {static PyObject *meth_QGLContext_swapBuffers(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_swapBuffers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QGLContext::swapBuffers() : sipCpp->swapBuffers());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_swapBuffers, doc_QGLContext_swapBuffers);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_bindTexture, "QGLContext.bindTexture(QImage, int target=GL_TEXTURE_2D, int format=GL_RGBA) -> int\n"
    "QGLContext.bindTexture(QPixmap, int target=GL_TEXTURE_2D, int format=GL_RGBA) -> int\n"
    "QGLContext.bindTexture(str) -> int\n"
    "QGLContext.bindTexture(QImage, int, int, QGLContext.BindOptions) -> int\n"
    "QGLContext.bindTexture(QPixmap, int, int, QGLContext.BindOptions) -> int");

extern "C" {static PyObject *meth_QGLContext_bindTexture(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_bindTexture(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QImage* a0;
        GLenum a1 = GL_TEXTURE_2D;
        GLint a2 = GL_RGBA;
        QGLContext *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_target,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|ui", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QImage, &a0, &a1, &a2))
        {
            GLuint sipRes;

            sipRes = sipCpp->bindTexture(*a0,a1,a2);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        const QPixmap* a0;
        GLenum a1 = GL_TEXTURE_2D;
        GLint a2 = GL_RGBA;
        QGLContext *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            sipName_target,
            sipName_format,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9|ui", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QPixmap, &a0, &a1, &a2))
        {
            GLuint sipRes;

            sipRes = sipCpp->bindTexture(*a0,a1,a2);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        const QString* a0;
        int a0State = 0;
        QGLContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ1", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QString,&a0, &a0State))
        {
            GLuint sipRes;

            sipRes = sipCpp->bindTexture(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        const QImage* a0;
        GLenum a1;
        GLint a2;
        QGLContext::BindOptions* a3;
        int a3State = 0;
        QGLContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9uiJ1", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QImage, &a0, &a1, &a2, sipType_QGLContext_BindOptions, &a3, &a3State))
        {
            GLuint sipRes;

            sipRes = sipCpp->bindTexture(*a0,a1,a2,*a3);
            sipReleaseType(a3,sipType_QGLContext_BindOptions,a3State);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    {
        const QPixmap* a0;
        GLenum a1;
        GLint a2;
        QGLContext::BindOptions* a3;
        int a3State = 0;
        QGLContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "BJ9uiJ1", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QPixmap, &a0, &a1, &a2, sipType_QGLContext_BindOptions, &a3, &a3State))
        {
            GLuint sipRes;

            sipRes = sipCpp->bindTexture(*a0,a1,a2,*a3);
            sipReleaseType(a3,sipType_QGLContext_BindOptions,a3State);

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_bindTexture, doc_QGLContext_bindTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_drawTexture, "QGLContext.drawTexture(QRectF, int, int textureTarget=GL_TEXTURE_2D)\n"
    "QGLContext.drawTexture(QPointF, int, int textureTarget=GL_TEXTURE_2D)");

extern "C" {static PyObject *meth_QGLContext_drawTexture(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_drawTexture(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QRectF* a0;
        GLuint a1;
        GLenum a2 = GL_TEXTURE_2D;
        QGLContext *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_textureTarget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9u|u", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QRectF, &a0, &a1, &a2))
        {
            sipCpp->drawTexture(*a0,a1,a2);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QPointF* a0;
        int a0State = 0;
        GLuint a1;
        GLenum a2 = GL_TEXTURE_2D;
        QGLContext *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_textureTarget,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1u|u", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QPointF, &a0, &a0State, &a1, &a2))
        {
            sipCpp->drawTexture(*a0,a1,a2);
            sipReleaseType(const_cast<QPointF *>(a0),sipType_QPointF,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_drawTexture, doc_QGLContext_drawTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_deleteTexture, "QGLContext.deleteTexture(int)");

extern "C" {static PyObject *meth_QGLContext_deleteTexture(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_deleteTexture(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        GLuint a0;
        QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bu", &sipSelf, sipType_QGLContext, &sipCpp, &a0))
        {
            sipCpp->deleteTexture(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_deleteTexture, doc_QGLContext_deleteTexture);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_setTextureCacheLimit, "QGLContext.setTextureCacheLimit(int)");

extern "C" {static PyObject *meth_QGLContext_setTextureCacheLimit(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_setTextureCacheLimit(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "i", &a0))
        {
            QGLContext::setTextureCacheLimit(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_setTextureCacheLimit, doc_QGLContext_setTextureCacheLimit);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_textureCacheLimit, "QGLContext.textureCacheLimit() -> int");

extern "C" {static PyObject *meth_QGLContext_textureCacheLimit(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_textureCacheLimit(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            int sipRes;

            sipRes = QGLContext::textureCacheLimit();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_textureCacheLimit, doc_QGLContext_textureCacheLimit);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_getProcAddress, "QGLContext.getProcAddress(str) -> sip.voidptr");

extern "C" {static PyObject *meth_QGLContext_getProcAddress(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_getProcAddress(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QFunctionPointer sipRes;

            sipRes = sipCpp->getProcAddress(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromVoidPtr((void *)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_getProcAddress, doc_QGLContext_getProcAddress);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_device, "QGLContext.device() -> QPaintDevice");

extern "C" {static PyObject *meth_QGLContext_device(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_device(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            QPaintDevice*sipRes;

            sipRes = sipCpp->device();

            return sipConvertFromType(sipRes,sipType_QPaintDevice,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_device, doc_QGLContext_device);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_overlayTransparentColor, "QGLContext.overlayTransparentColor() -> QColor");

extern "C" {static PyObject *meth_QGLContext_overlayTransparentColor(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_overlayTransparentColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            QColor*sipRes;

            sipRes = new QColor(sipCpp->overlayTransparentColor());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_overlayTransparentColor, doc_QGLContext_overlayTransparentColor);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_currentContext, "QGLContext.currentContext() -> QGLContext");

extern "C" {static PyObject *meth_QGLContext_currentContext(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_currentContext(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            const QGLContext*sipRes;

            sipRes = QGLContext::currentContext();

            return sipConvertFromType(const_cast<QGLContext *>(sipRes),sipType_QGLContext,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_currentContext, doc_QGLContext_currentContext);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_chooseContext, "QGLContext.chooseContext(QGLContext shareContext=None) -> bool");

extern "C" {static PyObject *meth_QGLContext_chooseContext(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_chooseContext(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QGLContext* a0 = 0;
        sipQGLContext *sipCpp;

        static const char *sipKwdList[] = {
            sipName_shareContext,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "B|J8", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QGLContext, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtectVirt_chooseContext(sipSelfWasArg,a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_chooseContext, doc_QGLContext_chooseContext);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_deviceIsPixmap, "QGLContext.deviceIsPixmap() -> bool");

extern "C" {static PyObject *meth_QGLContext_deviceIsPixmap(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_deviceIsPixmap(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQGLContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_deviceIsPixmap();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_deviceIsPixmap, doc_QGLContext_deviceIsPixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_windowCreated, "QGLContext.windowCreated() -> bool");

extern "C" {static PyObject *meth_QGLContext_windowCreated(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_windowCreated(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQGLContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_windowCreated();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_windowCreated, doc_QGLContext_windowCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_setWindowCreated, "QGLContext.setWindowCreated(bool)");

extern "C" {static PyObject *meth_QGLContext_setWindowCreated(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_setWindowCreated(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        sipQGLContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bb", &sipSelf, sipType_QGLContext, &sipCpp, &a0))
        {
            sipCpp->sipProtect_setWindowCreated(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_setWindowCreated, doc_QGLContext_setWindowCreated);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_initialized, "QGLContext.initialized() -> bool");

extern "C" {static PyObject *meth_QGLContext_initialized(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_initialized(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const sipQGLContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "B", &sipSelf, sipType_QGLContext, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->sipProtect_initialized();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_initialized, doc_QGLContext_initialized);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_setInitialized, "QGLContext.setInitialized(bool)");

extern "C" {static PyObject *meth_QGLContext_setInitialized(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QGLContext_setInitialized(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        sipQGLContext *sipCpp;

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, NULL, NULL, "Bb", &sipSelf, sipType_QGLContext, &sipCpp, &a0))
        {
            sipCpp->sipProtect_setInitialized(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_setInitialized, doc_QGLContext_setInitialized);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_areSharing, "QGLContext.areSharing(QGLContext, QGLContext) -> bool");

extern "C" {static PyObject *meth_QGLContext_areSharing(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_areSharing(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGLContext* a0;
        const QGLContext* a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8J8", sipType_QGLContext, &a0, sipType_QGLContext, &a1))
        {
            bool sipRes;

            sipRes = QGLContext::areSharing(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_areSharing, doc_QGLContext_areSharing);

    return NULL;
}


PyDoc_STRVAR(doc_QGLContext_moveToThread, "QGLContext.moveToThread(QThread)");

extern "C" {static PyObject *meth_QGLContext_moveToThread(PyObject *, PyObject *);}
static PyObject *meth_QGLContext_moveToThread(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QThread* a0;
        QGLContext *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QGLContext, &sipCpp, sipType_QThread, &a0))
        {
            sipCpp->moveToThread(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGLContext, sipName_moveToThread, doc_QGLContext_moveToThread);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGLContext(void *, const sipTypeDef *);}
static void *cast_QGLContext(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QGLContext)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGLContext(void *, int);}
static void release_QGLContext(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQGLContext *>(sipCppV);
    else
        delete reinterpret_cast<QGLContext *>(sipCppV);
}


extern "C" {static void dealloc_QGLContext(sipSimpleWrapper *);}
static void dealloc_QGLContext(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQGLContext *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QGLContext(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QGLContext(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QGLContext(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQGLContext *sipCpp = 0;

    {
        const QGLFormat* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QGLFormat, &a0))
        {
            sipCpp = new sipQGLContext(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QGLContext[] = {
    {SIP_MLNAME_CAST(sipName_areSharing), meth_QGLContext_areSharing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_areSharing)},
    {SIP_MLNAME_CAST(sipName_bindTexture), (PyCFunction)meth_QGLContext_bindTexture, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_bindTexture)},
    {SIP_MLNAME_CAST(sipName_chooseContext), (PyCFunction)meth_QGLContext_chooseContext, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_chooseContext)},
    {SIP_MLNAME_CAST(sipName_create), (PyCFunction)meth_QGLContext_create, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_create)},
    {SIP_MLNAME_CAST(sipName_currentContext), meth_QGLContext_currentContext, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_currentContext)},
    {SIP_MLNAME_CAST(sipName_deleteTexture), meth_QGLContext_deleteTexture, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_deleteTexture)},
    {SIP_MLNAME_CAST(sipName_device), meth_QGLContext_device, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_device)},
    {SIP_MLNAME_CAST(sipName_deviceIsPixmap), (PyCFunction)meth_QGLContext_deviceIsPixmap, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_deviceIsPixmap)},
    {SIP_MLNAME_CAST(sipName_doneCurrent), meth_QGLContext_doneCurrent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_doneCurrent)},
    {SIP_MLNAME_CAST(sipName_drawTexture), (PyCFunction)meth_QGLContext_drawTexture, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_drawTexture)},
    {SIP_MLNAME_CAST(sipName_format), meth_QGLContext_format, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_format)},
    {SIP_MLNAME_CAST(sipName_getProcAddress), meth_QGLContext_getProcAddress, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_getProcAddress)},
    {SIP_MLNAME_CAST(sipName_initialized), (PyCFunction)meth_QGLContext_initialized, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_initialized)},
    {SIP_MLNAME_CAST(sipName_isSharing), meth_QGLContext_isSharing, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_isSharing)},
    {SIP_MLNAME_CAST(sipName_isValid), meth_QGLContext_isValid, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_isValid)},
    {SIP_MLNAME_CAST(sipName_makeCurrent), meth_QGLContext_makeCurrent, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_makeCurrent)},
    {SIP_MLNAME_CAST(sipName_moveToThread), meth_QGLContext_moveToThread, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_moveToThread)},
    {SIP_MLNAME_CAST(sipName_overlayTransparentColor), meth_QGLContext_overlayTransparentColor, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_overlayTransparentColor)},
    {SIP_MLNAME_CAST(sipName_requestedFormat), meth_QGLContext_requestedFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_requestedFormat)},
    {SIP_MLNAME_CAST(sipName_reset), meth_QGLContext_reset, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_reset)},
    {SIP_MLNAME_CAST(sipName_setFormat), meth_QGLContext_setFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_setFormat)},
    {SIP_MLNAME_CAST(sipName_setInitialized), (PyCFunction)meth_QGLContext_setInitialized, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_setInitialized)},
    {SIP_MLNAME_CAST(sipName_setTextureCacheLimit), meth_QGLContext_setTextureCacheLimit, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_setTextureCacheLimit)},
    {SIP_MLNAME_CAST(sipName_setWindowCreated), (PyCFunction)meth_QGLContext_setWindowCreated, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_setWindowCreated)},
    {SIP_MLNAME_CAST(sipName_swapBuffers), meth_QGLContext_swapBuffers, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_swapBuffers)},
    {SIP_MLNAME_CAST(sipName_textureCacheLimit), meth_QGLContext_textureCacheLimit, METH_VARARGS, SIP_MLDOC_CAST(doc_QGLContext_textureCacheLimit)},
    {SIP_MLNAME_CAST(sipName_windowCreated), (PyCFunction)meth_QGLContext_windowCreated, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QGLContext_windowCreated)}
};

static sipEnumMemberDef enummembers_QGLContext[] = {
    {sipName_DefaultBindOption, static_cast<int>(QGLContext::DefaultBindOption), 4},
    {sipName_InvertedYBindOption, static_cast<int>(QGLContext::InvertedYBindOption), 4},
    {sipName_LinearFilteringBindOption, static_cast<int>(QGLContext::LinearFilteringBindOption), 4},
    {sipName_MipmapBindOption, static_cast<int>(QGLContext::MipmapBindOption), 4},
    {sipName_NoBindOption, static_cast<int>(QGLContext::NoBindOption), 4},
    {sipName_PremultipliedAlphaBindOption, static_cast<int>(QGLContext::PremultipliedAlphaBindOption), 4},
};

PyDoc_STRVAR(doc_QGLContext, "\1QGLContext(QGLFormat)");


pyqt5ClassTypeDef sipTypeDef_QtOpenGL_QGLContext = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGLContext,
        {0}
    },
    {
        sipNameNr_QGLContext,
        {0, 0, 1},
        27, methods_QGLContext,
        6, enummembers_QGLContext,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QGLContext,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QGLContext,
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
    dealloc_QGLContext,
    0,
    0,
    0,
    release_QGLContext,
    cast_QGLContext,
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
