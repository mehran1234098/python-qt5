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

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qcursor.sip"
#include <qcursor.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQCursor.cpp"

#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQCursor.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qbitmap.sip"
#include <qbitmap.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQCursor.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQCursor.cpp"
#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQCursor.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQCursor.cpp"


PyDoc_STRVAR(doc_QCursor_shape, "QCursor.shape() -> Qt.CursorShape");

extern "C" {static PyObject *meth_QCursor_shape(PyObject *, PyObject *);}
static PyObject *meth_QCursor_shape(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCursor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCursor, &sipCpp))
        {
            Qt::CursorShape sipRes;

            sipRes = sipCpp->shape();

            return sipConvertFromEnum(sipRes,sipType_Qt_CursorShape);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCursor, sipName_shape, doc_QCursor_shape);

    return NULL;
}


PyDoc_STRVAR(doc_QCursor_setShape, "QCursor.setShape(Qt.CursorShape)");

extern "C" {static PyObject *meth_QCursor_setShape(PyObject *, PyObject *);}
static PyObject *meth_QCursor_setShape(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::CursorShape a0;
        QCursor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QCursor, &sipCpp, sipType_Qt_CursorShape, &a0))
        {
            sipCpp->setShape(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCursor, sipName_setShape, doc_QCursor_setShape);

    return NULL;
}


PyDoc_STRVAR(doc_QCursor_bitmap, "QCursor.bitmap() -> QBitmap");

extern "C" {static PyObject *meth_QCursor_bitmap(PyObject *, PyObject *);}
static PyObject *meth_QCursor_bitmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCursor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCursor, &sipCpp))
        {
            const QBitmap*sipRes;

            sipRes = sipCpp->bitmap();

            return sipConvertFromType(const_cast<QBitmap *>(sipRes),sipType_QBitmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCursor, sipName_bitmap, doc_QCursor_bitmap);

    return NULL;
}


PyDoc_STRVAR(doc_QCursor_mask, "QCursor.mask() -> QBitmap");

extern "C" {static PyObject *meth_QCursor_mask(PyObject *, PyObject *);}
static PyObject *meth_QCursor_mask(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCursor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCursor, &sipCpp))
        {
            const QBitmap*sipRes;

            sipRes = sipCpp->mask();

            return sipConvertFromType(const_cast<QBitmap *>(sipRes),sipType_QBitmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCursor, sipName_mask, doc_QCursor_mask);

    return NULL;
}


PyDoc_STRVAR(doc_QCursor_pixmap, "QCursor.pixmap() -> QPixmap");

extern "C" {static PyObject *meth_QCursor_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QCursor_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCursor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCursor, &sipCpp))
        {
            QPixmap*sipRes;

            sipRes = new QPixmap(sipCpp->pixmap());

            return sipConvertFromNewType(sipRes,sipType_QPixmap,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCursor, sipName_pixmap, doc_QCursor_pixmap);

    return NULL;
}


PyDoc_STRVAR(doc_QCursor_hotSpot, "QCursor.hotSpot() -> QPoint");

extern "C" {static PyObject *meth_QCursor_hotSpot(PyObject *, PyObject *);}
static PyObject *meth_QCursor_hotSpot(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QCursor *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QCursor, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->hotSpot());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCursor, sipName_hotSpot, doc_QCursor_hotSpot);

    return NULL;
}


PyDoc_STRVAR(doc_QCursor_pos, "QCursor.pos() -> QPoint");

extern "C" {static PyObject *meth_QCursor_pos(PyObject *, PyObject *);}
static PyObject *meth_QCursor_pos(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        if (sipParseArgs(&sipParseErr, sipArgs, ""))
        {
            QPoint*sipRes;

            sipRes = new QPoint(QCursor::pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCursor, sipName_pos, doc_QCursor_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QCursor_setPos, "QCursor.setPos(int, int)\n"
    "QCursor.setPos(QPoint)");

extern "C" {static PyObject *meth_QCursor_setPos(PyObject *, PyObject *);}
static PyObject *meth_QCursor_setPos(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;

        if (sipParseArgs(&sipParseErr, sipArgs, "ii", &a0, &a1))
        {
            QCursor::setPos(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const QPoint* a0;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9", sipType_QPoint, &a0))
        {
            QCursor::setPos(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QCursor, sipName_setPos, doc_QCursor_setPos);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QCursor(void *, const sipTypeDef *);}
static void *cast_QCursor(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QCursor)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QCursor(void *, int);}
static void release_QCursor(void *sipCppV,int)
{
    delete reinterpret_cast<QCursor *>(sipCppV);
}


extern "C" {static void assign_QCursor(void *, SIP_SSIZE_T, const void *);}
static void assign_QCursor(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QCursor *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QCursor *>(sipSrc);
}


extern "C" {static void *array_QCursor(SIP_SSIZE_T);}
static void *array_QCursor(SIP_SSIZE_T sipNrElem)
{
    return new QCursor[sipNrElem];
}


extern "C" {static void *copy_QCursor(const void *, SIP_SSIZE_T);}
static void *copy_QCursor(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QCursor(reinterpret_cast<const QCursor *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QCursor(sipSimpleWrapper *);}
static void dealloc_QCursor(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QCursor(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QCursor(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QCursor(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QCursor *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QCursor();

            return sipCpp;
        }
    }

    {
        Qt::CursorShape a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "E", sipType_Qt_CursorShape, &a0))
        {
            sipCpp = new QCursor(a0);

            return sipCpp;
        }
    }

    {
        const QBitmap* a0;
        const QBitmap* a1;
        int a2 = -1;
        int a3 = -1;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_hotX,
            sipName_hotY,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9J9|ii", sipType_QBitmap, &a0, sipType_QBitmap, &a1, &a2, &a3))
        {
            sipCpp = new QCursor(*a0,*a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const QPixmap* a0;
        int a1 = -1;
        int a2 = -1;

        static const char *sipKwdList[] = {
            NULL,
            sipName_hotX,
            sipName_hotY,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "J9|ii", sipType_QPixmap, &a0, &a1, &a2))
        {
            sipCpp = new QCursor(*a0,a1,a2);

            return sipCpp;
        }
    }

    {
        const QCursor* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QCursor, &a0, &a0State))
        {
            sipCpp = new QCursor(*a0);
            sipReleaseType(const_cast<QCursor *>(a0),sipType_QCursor,a0State);

            return sipCpp;
        }
    }

    {
        const QVariant* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QVariant, &a0, &a0State))
        {
#line 61 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qcursor.sip"
        sipCpp = new QCursor(a0->value<QCursor>());
#line 411 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQCursor.cpp"
            sipReleaseType(const_cast<QVariant *>(a0),sipType_QVariant,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static int convertTo_QCursor(PyObject *, void **, int *, PyObject *);}
static int convertTo_QCursor(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QCursor **sipCppPtr = reinterpret_cast<QCursor **>(sipCppPtrV);

#line 34 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qcursor.sip"
// SIP doesn't support automatic type convertors so we explicitly allow a
// Qt::CursorShape to be used whenever a QCursor is expected.

if (sipIsErr == NULL)
    return (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_CursorShape)) ||
            sipCanConvertToType(sipPy, sipType_QCursor, SIP_NO_CONVERTORS));

if (PyObject_TypeCheck(sipPy, sipTypeAsPyTypeObject(sipType_Qt_CursorShape)))
{
    *sipCppPtr = new QCursor((Qt::CursorShape)SIPLong_AsLong(sipPy));

    return sipGetState(sipTransferObj);
}

*sipCppPtr = reinterpret_cast<QCursor *>(sipConvertToType(sipPy, sipType_QCursor, sipTransferObj, SIP_NO_CONVERTORS, 0, sipIsErr));

return 0;
#line 445 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQCursor.cpp"
}


static PyMethodDef methods_QCursor[] = {
    {SIP_MLNAME_CAST(sipName_bitmap), meth_QCursor_bitmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QCursor_bitmap)},
    {SIP_MLNAME_CAST(sipName_hotSpot), meth_QCursor_hotSpot, METH_VARARGS, SIP_MLDOC_CAST(doc_QCursor_hotSpot)},
    {SIP_MLNAME_CAST(sipName_mask), meth_QCursor_mask, METH_VARARGS, SIP_MLDOC_CAST(doc_QCursor_mask)},
    {SIP_MLNAME_CAST(sipName_pixmap), meth_QCursor_pixmap, METH_VARARGS, SIP_MLDOC_CAST(doc_QCursor_pixmap)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QCursor_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QCursor_pos)},
    {SIP_MLNAME_CAST(sipName_setPos), meth_QCursor_setPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QCursor_setPos)},
    {SIP_MLNAME_CAST(sipName_setShape), meth_QCursor_setShape, METH_VARARGS, SIP_MLDOC_CAST(doc_QCursor_setShape)},
    {SIP_MLNAME_CAST(sipName_shape), meth_QCursor_shape, METH_VARARGS, SIP_MLDOC_CAST(doc_QCursor_shape)}
};

PyDoc_STRVAR(doc_QCursor, "\1QCursor()\n"
    "QCursor(Qt.CursorShape)\n"
    "QCursor(QBitmap, QBitmap, int hotX=-1, int hotY=-1)\n"
    "QCursor(QPixmap, int hotX=-1, int hotY=-1)\n"
    "QCursor(QCursor)\n"
    "QCursor(QVariant)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QCursor = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QCursor,
        {0}
    },
    {
        sipNameNr_QCursor,
        {0, 0, 1},
        8, methods_QCursor,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QCursor,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QCursor,
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
    dealloc_QCursor,
    assign_QCursor,
    array_QCursor,
    copy_QCursor,
    release_QCursor,
    cast_QCursor,
    convertTo_QCursor,
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
