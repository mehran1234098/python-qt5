/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:06 2014
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

#include "sipAPIQtQml.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtQml/qqmlparserstatus.sip"
#include <qqmlparserstatus.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtQml/sipQtQmlQQmlParserStatus.cpp"



class sipQQmlParserStatus : public QQmlParserStatus
{
public:
    sipQQmlParserStatus();
    sipQQmlParserStatus(const QQmlParserStatus&);
    virtual ~sipQQmlParserStatus();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void componentComplete();
    void classBegin();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQQmlParserStatus(const sipQQmlParserStatus &);
    sipQQmlParserStatus &operator = (const sipQQmlParserStatus &);

    char sipPyMethods[2];
};

sipQQmlParserStatus::sipQQmlParserStatus(): QQmlParserStatus(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlParserStatus::sipQQmlParserStatus(const QQmlParserStatus& a0): QQmlParserStatus(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQQmlParserStatus::~sipQQmlParserStatus()
{
    sipCommonDtor(sipPySelf);
}

void sipQQmlParserStatus::componentComplete()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,sipName_QQmlParserStatus,sipName_componentComplete);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQml_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}

void sipQQmlParserStatus::classBegin()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,sipName_QQmlParserStatus,sipName_classBegin);

    if (!sipMeth)
        return;

    typedef void (*sipVH_QtCore_11)(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    ((sipVH_QtCore_11)(sipModuleAPI_QtQml_QtCore->em_virthandlers[11]))(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_QQmlParserStatus_classBegin, "QQmlParserStatus.classBegin()");

extern "C" {static PyObject *meth_QQmlParserStatus_classBegin(PyObject *, PyObject *);}
static PyObject *meth_QQmlParserStatus_classBegin(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QQmlParserStatus *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlParserStatus, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QQmlParserStatus, sipName_classBegin);
                return NULL;
            }

            sipCpp->classBegin();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlParserStatus, sipName_classBegin, doc_QQmlParserStatus_classBegin);

    return NULL;
}


PyDoc_STRVAR(doc_QQmlParserStatus_componentComplete, "QQmlParserStatus.componentComplete()");

extern "C" {static PyObject *meth_QQmlParserStatus_componentComplete(PyObject *, PyObject *);}
static PyObject *meth_QQmlParserStatus_componentComplete(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        QQmlParserStatus *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QQmlParserStatus, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QQmlParserStatus, sipName_componentComplete);
                return NULL;
            }

            sipCpp->componentComplete();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QQmlParserStatus, sipName_componentComplete, doc_QQmlParserStatus_componentComplete);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QQmlParserStatus(void *, const sipTypeDef *);}
static void *cast_QQmlParserStatus(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QQmlParserStatus)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QQmlParserStatus(void *, int);}
static void release_QQmlParserStatus(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQQmlParserStatus *>(sipCppV);
    else
        delete reinterpret_cast<QQmlParserStatus *>(sipCppV);
}


extern "C" {static int mixin_QQmlParserStatus(PyObject *, PyObject *, PyObject *);}
static int mixin_QQmlParserStatus(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    return sipInitMixin(sipSelf, sipArgs, sipKwds, (sipClassTypeDef *)&sipTypeDef_QtQml_QQmlParserStatus);
}


extern "C" {static void dealloc_QQmlParserStatus(sipSimpleWrapper *);}
static void dealloc_QQmlParserStatus(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQQmlParserStatus *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QQmlParserStatus(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QQmlParserStatus(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QQmlParserStatus(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQQmlParserStatus *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQQmlParserStatus();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QQmlParserStatus* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QQmlParserStatus, &a0))
        {
            sipCpp = new sipQQmlParserStatus(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QQmlParserStatus[] = {
    {SIP_MLNAME_CAST(sipName_classBegin), meth_QQmlParserStatus_classBegin, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlParserStatus_classBegin)},
    {SIP_MLNAME_CAST(sipName_componentComplete), meth_QQmlParserStatus_componentComplete, METH_VARARGS, SIP_MLDOC_CAST(doc_QQmlParserStatus_componentComplete)}
};

PyDoc_STRVAR(doc_QQmlParserStatus, "\1QQmlParserStatus()\n"
    "QQmlParserStatus(QQmlParserStatus)");


pyqt5ClassTypeDef sipTypeDef_QtQml_QQmlParserStatus = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QQmlParserStatus,
        {0}
    },
    {
        sipNameNr_QQmlParserStatus,
        {0, 0, 1},
        2, methods_QQmlParserStatus,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QQmlParserStatus,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QQmlParserStatus,
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
    dealloc_QQmlParserStatus,
    0,
    0,
    0,
    release_QQmlParserStatus,
    cast_QQmlParserStatus,
    0,
    0,
    0,
    0,
    0,
    mixin_QQmlParserStatus
},
    0,
    0,
    0,
    "org.qt-project.Qt.QQmlParserStatus"
};
