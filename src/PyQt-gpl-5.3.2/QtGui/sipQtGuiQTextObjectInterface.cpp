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

#line 89 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObjectInterface.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObjectInterface.cpp"
#line 165 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObjectInterface.cpp"
#line 40 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObjectInterface.cpp"
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObjectInterface.cpp"
#line 101 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQTextObjectInterface.cpp"


class sipQTextObjectInterface : public QTextObjectInterface
{
public:
    sipQTextObjectInterface();
    sipQTextObjectInterface(const QTextObjectInterface&);
    virtual ~sipQTextObjectInterface();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void drawObject(QPainter*,const QRectF&,QTextDocument*,int,const QTextFormat&);
    QSizeF intrinsicSize(QTextDocument*,int,const QTextFormat&);

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTextObjectInterface(const sipQTextObjectInterface &);
    sipQTextObjectInterface &operator = (const sipQTextObjectInterface &);

    char sipPyMethods[2];
};

sipQTextObjectInterface::sipQTextObjectInterface(): QTextObjectInterface(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextObjectInterface::sipQTextObjectInterface(const QTextObjectInterface& a0): QTextObjectInterface(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextObjectInterface::~sipQTextObjectInterface()
{
    sipCommonDtor(sipPySelf);
}

void sipQTextObjectInterface::drawObject(QPainter*a0,const QRectF& a1,QTextDocument*a2,int a3,const QTextFormat& a4)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QTextObjectInterface,sipName_drawObject);

    if (!sipMeth)
        return;

    extern void sipVH_QtGui_66(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QPainter*,const QRectF&,QTextDocument*,int,const QTextFormat&);

    sipVH_QtGui_66(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2, a3, a4);
}

QSizeF sipQTextObjectInterface::intrinsicSize(QTextDocument*a0,int a1,const QTextFormat& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QTextObjectInterface,sipName_intrinsicSize);

    if (!sipMeth)
        return QSizeF();

    extern QSizeF sipVH_QtGui_67(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, QTextDocument*,int,const QTextFormat&);

    return sipVH_QtGui_67(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QTextObjectInterface_intrinsicSize, "QTextObjectInterface.intrinsicSize(QTextDocument, int, QTextFormat) -> QSizeF");

extern "C" {static PyObject *meth_QTextObjectInterface_intrinsicSize(PyObject *, PyObject *);}
static PyObject *meth_QTextObjectInterface_intrinsicSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QTextDocument* a0;
        int a1;
        const QTextFormat* a2;
        QTextObjectInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8iJ9", &sipSelf, sipType_QTextObjectInterface, &sipCpp, sipType_QTextDocument, &a0, &a1, sipType_QTextFormat, &a2))
        {
            QSizeF*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextObjectInterface, sipName_intrinsicSize);
                return NULL;
            }

            sipRes = new QSizeF(sipCpp->intrinsicSize(a0,a1,*a2));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObjectInterface, sipName_intrinsicSize, doc_QTextObjectInterface_intrinsicSize);

    return NULL;
}


PyDoc_STRVAR(doc_QTextObjectInterface_drawObject, "QTextObjectInterface.drawObject(QPainter, QRectF, QTextDocument, int, QTextFormat)");

extern "C" {static PyObject *meth_QTextObjectInterface_drawObject(PyObject *, PyObject *);}
static PyObject *meth_QTextObjectInterface_drawObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QPainter* a0;
        const QRectF* a1;
        QTextDocument* a2;
        int a3;
        const QTextFormat* a4;
        QTextObjectInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9J8iJ9", &sipSelf, sipType_QTextObjectInterface, &sipCpp, sipType_QPainter, &a0, sipType_QRectF, &a1, sipType_QTextDocument, &a2, &a3, sipType_QTextFormat, &a4))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextObjectInterface, sipName_drawObject);
                return NULL;
            }

            sipCpp->drawObject(a0,*a1,a2,a3,*a4);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QTextObjectInterface, sipName_drawObject, doc_QTextObjectInterface_drawObject);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QTextObjectInterface(void *, const sipTypeDef *);}
static void *cast_QTextObjectInterface(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QTextObjectInterface)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextObjectInterface(void *, int);}
static void release_QTextObjectInterface(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextObjectInterface *>(sipCppV);
    else
        delete reinterpret_cast<QTextObjectInterface *>(sipCppV);
}


extern "C" {static int mixin_QTextObjectInterface(PyObject *, PyObject *, PyObject *);}
static int mixin_QTextObjectInterface(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    return sipInitMixin(sipSelf, sipArgs, sipKwds, (sipClassTypeDef *)&sipTypeDef_QtGui_QTextObjectInterface);
}


extern "C" {static void dealloc_QTextObjectInterface(sipSimpleWrapper *);}
static void dealloc_QTextObjectInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQTextObjectInterface *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QTextObjectInterface(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QTextObjectInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextObjectInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTextObjectInterface *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQTextObjectInterface();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QTextObjectInterface* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QTextObjectInterface, &a0))
        {
            sipCpp = new sipQTextObjectInterface(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QTextObjectInterface[] = {
    {SIP_MLNAME_CAST(sipName_drawObject), meth_QTextObjectInterface_drawObject, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObjectInterface_drawObject)},
    {SIP_MLNAME_CAST(sipName_intrinsicSize), meth_QTextObjectInterface_intrinsicSize, METH_VARARGS, SIP_MLDOC_CAST(doc_QTextObjectInterface_intrinsicSize)}
};

PyDoc_STRVAR(doc_QTextObjectInterface, "\1QTextObjectInterface()\n"
    "QTextObjectInterface(QTextObjectInterface)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QTextObjectInterface = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QTextObjectInterface,
        {0}
    },
    {
        sipNameNr_QTextObjectInterface,
        {0, 0, 1},
        2, methods_QTextObjectInterface,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QTextObjectInterface,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QTextObjectInterface,
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
    dealloc_QTextObjectInterface,
    0,
    0,
    0,
    release_QTextObjectInterface,
    cast_QTextObjectInterface,
    0,
    0,
    0,
    0,
    0,
    mixin_QTextObjectInterface
},
    0,
    0,
    0,
    "org.qt-project.Qt.QTextObjectInterface"
};
