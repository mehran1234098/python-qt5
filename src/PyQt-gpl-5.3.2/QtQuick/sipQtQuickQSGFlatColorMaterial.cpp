/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:08 2014
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

#include "sipAPIQtQuick.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgflatcolormaterial.sip"
#include <qsgflatcolormaterial.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGFlatColorMaterial.cpp"

#line 199 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGFlatColorMaterial.cpp"
#line 30 "sip/QtGui/qcolor.sip"
#include <qcolor.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGFlatColorMaterial.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGFlatColorMaterial.cpp"
#line 192 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGFlatColorMaterial.cpp"
#line 199 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQuick/qsgmaterial.sip"
#include <qsgmaterial.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQuick/sipQtQuickQSGFlatColorMaterial.cpp"


class sipQSGFlatColorMaterial : public QSGFlatColorMaterial
{
public:
    sipQSGFlatColorMaterial();
    virtual ~sipQSGFlatColorMaterial();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    int compare(const QSGMaterial*) const;
    QSGMaterialShader* createShader() const;
    QSGMaterialType* type() const;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQSGFlatColorMaterial(const sipQSGFlatColorMaterial &);
    sipQSGFlatColorMaterial &operator = (const sipQSGFlatColorMaterial &);

    char sipPyMethods[3];
};

sipQSGFlatColorMaterial::sipQSGFlatColorMaterial(): QSGFlatColorMaterial(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQSGFlatColorMaterial::~sipQSGFlatColorMaterial()
{
    sipCommonDtor(sipPySelf);
}

int sipQSGFlatColorMaterial::compare(const QSGMaterial*a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_compare);

    if (!sipMeth)
        return QSGFlatColorMaterial::compare(a0);

    extern int sipVH_QtQuick_2(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const QSGMaterial*);

    return sipVH_QtQuick_2(sipGILState, 0, sipPySelf, sipMeth, a0);
}

QSGMaterialShader* sipQSGFlatColorMaterial::createShader() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_createShader);

    if (!sipMeth)
        return QSGFlatColorMaterial::createShader();

    extern QSGMaterialShader* sipVH_QtQuick_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_0(sipGILState, 0, sipPySelf, sipMeth);
}

QSGMaterialType* sipQSGFlatColorMaterial::type() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[2]),sipPySelf,NULL,sipName_type);

    if (!sipMeth)
        return QSGFlatColorMaterial::type();

    extern QSGMaterialType* sipVH_QtQuick_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtQuick_1(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QSGFlatColorMaterial_type, "QSGFlatColorMaterial.type() -> QSGMaterialType");

extern "C" {static PyObject *meth_QSGFlatColorMaterial_type(PyObject *, PyObject *);}
static PyObject *meth_QSGFlatColorMaterial_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGFlatColorMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGFlatColorMaterial, &sipCpp))
        {
            QSGMaterialType*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGFlatColorMaterial::type() : sipCpp->type());

            return sipConvertFromType(sipRes,sipType_QSGMaterialType,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGFlatColorMaterial, sipName_type, doc_QSGFlatColorMaterial_type);

    return NULL;
}


PyDoc_STRVAR(doc_QSGFlatColorMaterial_createShader, "QSGFlatColorMaterial.createShader() -> QSGMaterialShader");

extern "C" {static PyObject *meth_QSGFlatColorMaterial_createShader(PyObject *, PyObject *);}
static PyObject *meth_QSGFlatColorMaterial_createShader(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGFlatColorMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGFlatColorMaterial, &sipCpp))
        {
            QSGMaterialShader*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGFlatColorMaterial::createShader() : sipCpp->createShader());

            return sipConvertFromNewType(sipRes,sipType_QSGMaterialShader,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGFlatColorMaterial, sipName_createShader, doc_QSGFlatColorMaterial_createShader);

    return NULL;
}


PyDoc_STRVAR(doc_QSGFlatColorMaterial_setColor, "QSGFlatColorMaterial.setColor(QColor)");

extern "C" {static PyObject *meth_QSGFlatColorMaterial_setColor(PyObject *, PyObject *);}
static PyObject *meth_QSGFlatColorMaterial_setColor(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QColor* a0;
        int a0State = 0;
        QSGFlatColorMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QSGFlatColorMaterial, &sipCpp, sipType_QColor, &a0, &a0State))
        {
            sipCpp->setColor(*a0);
            sipReleaseType(const_cast<QColor *>(a0),sipType_QColor,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGFlatColorMaterial, sipName_setColor, doc_QSGFlatColorMaterial_setColor);

    return NULL;
}


PyDoc_STRVAR(doc_QSGFlatColorMaterial_color, "QSGFlatColorMaterial.color() -> QColor");

extern "C" {static PyObject *meth_QSGFlatColorMaterial_color(PyObject *, PyObject *);}
static PyObject *meth_QSGFlatColorMaterial_color(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QSGFlatColorMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QSGFlatColorMaterial, &sipCpp))
        {
            QColor*sipRes;

            sipRes = new QColor(sipCpp->color());

            return sipConvertFromNewType(sipRes,sipType_QColor,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGFlatColorMaterial, sipName_color, doc_QSGFlatColorMaterial_color);

    return NULL;
}


PyDoc_STRVAR(doc_QSGFlatColorMaterial_compare, "QSGFlatColorMaterial.compare(QSGMaterial) -> int");

extern "C" {static PyObject *meth_QSGFlatColorMaterial_compare(PyObject *, PyObject *);}
static PyObject *meth_QSGFlatColorMaterial_compare(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerived((sipSimpleWrapper *)sipSelf));

    {
        const QSGMaterial* a0;
        const QSGFlatColorMaterial *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_QSGFlatColorMaterial, &sipCpp, sipType_QSGMaterial, &a0))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp->QSGFlatColorMaterial::compare(a0) : sipCpp->compare(a0));

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QSGFlatColorMaterial, sipName_compare, doc_QSGFlatColorMaterial_compare);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QSGFlatColorMaterial(void *, const sipTypeDef *);}
static void *cast_QSGFlatColorMaterial(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QSGFlatColorMaterial)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSGMaterial)->ctd_cast((QSGMaterial *)(QSGFlatColorMaterial *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QSGFlatColorMaterial(void *, int);}
static void release_QSGFlatColorMaterial(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQSGFlatColorMaterial *>(sipCppV);
    else
        delete reinterpret_cast<QSGFlatColorMaterial *>(sipCppV);
}


extern "C" {static void dealloc_QSGFlatColorMaterial(sipSimpleWrapper *);}
static void dealloc_QSGFlatColorMaterial(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQSGFlatColorMaterial *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QSGFlatColorMaterial(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QSGFlatColorMaterial(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QSGFlatColorMaterial(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQSGFlatColorMaterial *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQSGFlatColorMaterial();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QSGFlatColorMaterial[] = {{36, 255, 1}};


static PyMethodDef methods_QSGFlatColorMaterial[] = {
    {SIP_MLNAME_CAST(sipName_color), meth_QSGFlatColorMaterial_color, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGFlatColorMaterial_color)},
    {SIP_MLNAME_CAST(sipName_compare), meth_QSGFlatColorMaterial_compare, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGFlatColorMaterial_compare)},
    {SIP_MLNAME_CAST(sipName_createShader), meth_QSGFlatColorMaterial_createShader, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGFlatColorMaterial_createShader)},
    {SIP_MLNAME_CAST(sipName_setColor), meth_QSGFlatColorMaterial_setColor, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGFlatColorMaterial_setColor)},
    {SIP_MLNAME_CAST(sipName_type), meth_QSGFlatColorMaterial_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QSGFlatColorMaterial_type)}
};

PyDoc_STRVAR(doc_QSGFlatColorMaterial, "\1QSGFlatColorMaterial()");


pyqt5ClassTypeDef sipTypeDef_QtQuick_QSGFlatColorMaterial = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QSGFlatColorMaterial,
        {0}
    },
    {
        sipNameNr_QSGFlatColorMaterial,
        {0, 0, 1},
        5, methods_QSGFlatColorMaterial,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QSGFlatColorMaterial,
    -1,
    -1,
    supers_QSGFlatColorMaterial,
    0,
    init_type_QSGFlatColorMaterial,
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
    dealloc_QSGFlatColorMaterial,
    0,
    0,
    0,
    release_QSGFlatColorMaterial,
    cast_QSGFlatColorMaterial,
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
