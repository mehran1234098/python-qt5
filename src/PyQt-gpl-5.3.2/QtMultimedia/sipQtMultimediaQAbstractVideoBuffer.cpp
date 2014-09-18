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

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtMultimedia/qabstractvideobuffer.sip"
#include <qabstractvideobuffer.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAbstractVideoBuffer.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAbstractVideoBuffer.cpp"


class sipQAbstractVideoBuffer : public QAbstractVideoBuffer
{
public:
    sipQAbstractVideoBuffer(QAbstractVideoBuffer::HandleType);
    virtual ~sipQAbstractVideoBuffer();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void release();
    QVariant handle() const;
    void unmap();
    uchar* map(QAbstractVideoBuffer::MapMode,int*,int*);
    QAbstractVideoBuffer::MapMode mapMode() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQAbstractVideoBuffer(const sipQAbstractVideoBuffer &);
    sipQAbstractVideoBuffer &operator = (const sipQAbstractVideoBuffer &);

    char sipPyMethods[5];
};

sipQAbstractVideoBuffer::sipQAbstractVideoBuffer(QAbstractVideoBuffer::HandleType a0): QAbstractVideoBuffer(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQAbstractVideoBuffer::~sipQAbstractVideoBuffer()
{
    sipCommonDtor(sipPySelf);
}

void sipQAbstractVideoBuffer::release()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_release);

    if (!sipMeth)
    {
        QAbstractVideoBuffer::release();
        return;
    }

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

QVariant sipQAbstractVideoBuffer::handle() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_handle);

    if (!sipMeth)
        return QAbstractVideoBuffer::handle();

    extern QVariant sipVH_QtMultimedia_11(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtMultimedia_11(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQAbstractVideoBuffer::unmap()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,sipName_QAbstractVideoBuffer,sipName_unmap);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtMultimedia_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

uchar* sipQAbstractVideoBuffer::map(QAbstractVideoBuffer::MapMode a0,int*a1,int*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[3],sipPySelf,sipName_QAbstractVideoBuffer,sipName_map);

    if (!sipMeth)
        return 0;

    extern unsigned char* sipVH_QtMultimedia_12(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QAbstractVideoBuffer::MapMode,int*,int*, int);

    return sipVH_QtMultimedia_12(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, -2);
}

QAbstractVideoBuffer::MapMode sipQAbstractVideoBuffer::mapMode() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,sipName_QAbstractVideoBuffer,sipName_mapMode);

    if (!sipMeth)
        return (QAbstractVideoBuffer::MapMode)0;

    extern QAbstractVideoBuffer::MapMode sipVH_QtMultimedia_13(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtMultimedia_13(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QAbstractVideoBuffer_handleType, "QAbstractVideoBuffer.handleType() -> QAbstractVideoBuffer.HandleType");

extern "C" {static PyObject *meth_QAbstractVideoBuffer_handleType(PyObject *, PyObject *);}
static PyObject *meth_QAbstractVideoBuffer_handleType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QAbstractVideoBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractVideoBuffer, &sipCpp))
        {
            QAbstractVideoBuffer::HandleType sipRes;

            sipRes = sipCpp->handleType();

            return sipConvertFromEnum(sipRes,sipType_QAbstractVideoBuffer_HandleType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractVideoBuffer, sipName_handleType, doc_QAbstractVideoBuffer_handleType);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractVideoBuffer_mapMode, "QAbstractVideoBuffer.mapMode() -> QAbstractVideoBuffer.MapMode");

extern "C" {static PyObject *meth_QAbstractVideoBuffer_mapMode(PyObject *, PyObject *);}
static PyObject *meth_QAbstractVideoBuffer_mapMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const QAbstractVideoBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractVideoBuffer, &sipCpp))
        {
            QAbstractVideoBuffer::MapMode sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractVideoBuffer, sipName_mapMode);
                return NULL;
            }

            sipRes = sipCpp->mapMode();

            return sipConvertFromEnum(sipRes,sipType_QAbstractVideoBuffer_MapMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractVideoBuffer, sipName_mapMode, doc_QAbstractVideoBuffer_mapMode);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractVideoBuffer_map, "QAbstractVideoBuffer.map(QAbstractVideoBuffer.MapMode) -> (sip.voidptr, int, int)");

extern "C" {static PyObject *meth_QAbstractVideoBuffer_map(PyObject *, PyObject *);}
static PyObject *meth_QAbstractVideoBuffer_map(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractVideoBuffer::MapMode a0;
        int a1;
        int a2;
        QAbstractVideoBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QAbstractVideoBuffer, &sipCpp, sipType_QAbstractVideoBuffer_MapMode, &a0))
        {
            PyObject * sipRes = 0;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractVideoBuffer, sipName_map);
                return NULL;
            }

#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtMultimedia/qabstractvideobuffer.sip"
        uchar *mem;
        
        Py_BEGIN_ALLOW_THREADS
        mem = sipCpp->map(a0, &a1, &a2);
        Py_END_ALLOW_THREADS
        
        if (mem)
        {
            if (a0 & QAbstractVideoBuffer::WriteOnly)
                sipRes = sipConvertFromVoidPtrAndSize(mem, a1);
            else
                sipRes = sipConvertFromConstVoidPtrAndSize(mem, a1);
        }
        else
        {
            sipRes = Py_None;
            Py_INCREF(sipRes);
        }
#line 256 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtMultimedia/sipQtMultimediaQAbstractVideoBuffer.cpp"

            return sipBuildResult(0,"(Rii)",sipRes,a1,a2);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractVideoBuffer, sipName_map, doc_QAbstractVideoBuffer_map);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractVideoBuffer_unmap, "QAbstractVideoBuffer.unmap()");

extern "C" {static PyObject *meth_QAbstractVideoBuffer_unmap(PyObject *, PyObject *);}
static PyObject *meth_QAbstractVideoBuffer_unmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QAbstractVideoBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractVideoBuffer, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QAbstractVideoBuffer, sipName_unmap);
                return NULL;
            }

            sipCpp->unmap();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractVideoBuffer, sipName_unmap, doc_QAbstractVideoBuffer_unmap);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractVideoBuffer_handle, "QAbstractVideoBuffer.handle() -> QVariant");

extern "C" {static PyObject *meth_QAbstractVideoBuffer_handle(PyObject *, PyObject *);}
static PyObject *meth_QAbstractVideoBuffer_handle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QAbstractVideoBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractVideoBuffer, &sipCpp))
        {
            QVariant*sipRes;

            sipRes = new QVariant((sipSelfWasArg ? sipCpp->QAbstractVideoBuffer::handle() : sipCpp->handle()));

            return sipConvertFromNewType(sipRes,sipType_QVariant,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractVideoBuffer, sipName_handle, doc_QAbstractVideoBuffer_handle);

    return NULL;
}


PyDoc_STRVAR(doc_QAbstractVideoBuffer_release, "QAbstractVideoBuffer.release()");

extern "C" {static PyObject *meth_QAbstractVideoBuffer_release(PyObject *, PyObject *);}
static PyObject *meth_QAbstractVideoBuffer_release(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        QAbstractVideoBuffer *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QAbstractVideoBuffer, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp->QAbstractVideoBuffer::release() : sipCpp->release());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QAbstractVideoBuffer, sipName_release, doc_QAbstractVideoBuffer_release);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QAbstractVideoBuffer(void *, const sipTypeDef *);}
static void *cast_QAbstractVideoBuffer(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QAbstractVideoBuffer)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QAbstractVideoBuffer(void *, int);}
static void release_QAbstractVideoBuffer(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQAbstractVideoBuffer *>(sipCppV);
    else
        delete reinterpret_cast<QAbstractVideoBuffer *>(sipCppV);
}


extern "C" {static void dealloc_QAbstractVideoBuffer(sipSimpleWrapper *);}
static void dealloc_QAbstractVideoBuffer(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQAbstractVideoBuffer *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QAbstractVideoBuffer(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QAbstractVideoBuffer(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QAbstractVideoBuffer(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQAbstractVideoBuffer *sipCpp = 0;

    {
        QAbstractVideoBuffer::HandleType a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_QAbstractVideoBuffer_HandleType, &a0))
        {
            sipCpp = new sipQAbstractVideoBuffer(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QAbstractVideoBuffer[] = {
    {SIP_MLNAME_CAST(sipName_handle), meth_QAbstractVideoBuffer_handle, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractVideoBuffer_handle)},
    {SIP_MLNAME_CAST(sipName_handleType), meth_QAbstractVideoBuffer_handleType, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractVideoBuffer_handleType)},
    {SIP_MLNAME_CAST(sipName_map), meth_QAbstractVideoBuffer_map, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractVideoBuffer_map)},
    {SIP_MLNAME_CAST(sipName_mapMode), meth_QAbstractVideoBuffer_mapMode, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractVideoBuffer_mapMode)},
    {SIP_MLNAME_CAST(sipName_release), meth_QAbstractVideoBuffer_release, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractVideoBuffer_release)},
    {SIP_MLNAME_CAST(sipName_unmap), meth_QAbstractVideoBuffer_unmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QAbstractVideoBuffer_unmap)}
};

static sipEnumMemberDef enummembers_QAbstractVideoBuffer[] = {
    {sipName_CoreImageHandle, static_cast<int>(QAbstractVideoBuffer::CoreImageHandle), 1},
    {sipName_GLTextureHandle, static_cast<int>(QAbstractVideoBuffer::GLTextureHandle), 1},
    {sipName_NoHandle, static_cast<int>(QAbstractVideoBuffer::NoHandle), 1},
    {sipName_NotMapped, static_cast<int>(QAbstractVideoBuffer::NotMapped), 2},
    {sipName_QPixmapHandle, static_cast<int>(QAbstractVideoBuffer::QPixmapHandle), 1},
    {sipName_ReadOnly, static_cast<int>(QAbstractVideoBuffer::ReadOnly), 2},
    {sipName_ReadWrite, static_cast<int>(QAbstractVideoBuffer::ReadWrite), 2},
    {sipName_UserHandle, static_cast<int>(QAbstractVideoBuffer::UserHandle), 1},
    {sipName_WriteOnly, static_cast<int>(QAbstractVideoBuffer::WriteOnly), 2},
    {sipName_XvShmImageHandle, static_cast<int>(QAbstractVideoBuffer::XvShmImageHandle), 1},
};

PyDoc_STRVAR(doc_QAbstractVideoBuffer, "\1QAbstractVideoBuffer(QAbstractVideoBuffer.HandleType)");


pyqt5ClassTypeDef sipTypeDef_QtMultimedia_QAbstractVideoBuffer = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QAbstractVideoBuffer,
        {0}
    },
    {
        sipNameNr_QAbstractVideoBuffer,
        {0, 0, 1},
        6, methods_QAbstractVideoBuffer,
        10, enummembers_QAbstractVideoBuffer,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QAbstractVideoBuffer,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QAbstractVideoBuffer,
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
    dealloc_QAbstractVideoBuffer,
    0,
    0,
    0,
    release_QAbstractVideoBuffer,
    cast_QAbstractVideoBuffer,
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
