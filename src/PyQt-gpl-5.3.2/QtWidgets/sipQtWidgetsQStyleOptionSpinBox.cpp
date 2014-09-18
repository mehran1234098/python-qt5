/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:31 2014
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

#include "sipAPIQtWidgets.h"

#line 753 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQStyleOptionSpinBox.cpp"

#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWidgets/qabstractspinbox.sip"
#include <qabstractspinbox.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQStyleOptionSpinBox.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWidgets/qabstractspinbox.sip"
#include <qabstractspinbox.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQStyleOptionSpinBox.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQStyleOptionSpinBox.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QStyleOptionSpinBox(void *, const sipTypeDef *);}
static void *cast_QStyleOptionSpinBox(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QStyleOptionSpinBox)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QStyleOptionComplex)->ctd_cast((QStyleOptionComplex *)(QStyleOptionSpinBox *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionSpinBox(void *, int);}
static void release_QStyleOptionSpinBox(void *sipCppV,int)
{
    delete reinterpret_cast<QStyleOptionSpinBox *>(sipCppV);
}


extern "C" {static void assign_QStyleOptionSpinBox(void *, SIP_SSIZE_T, const void *);}
static void assign_QStyleOptionSpinBox(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QStyleOptionSpinBox *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QStyleOptionSpinBox *>(sipSrc);
}


extern "C" {static void *array_QStyleOptionSpinBox(SIP_SSIZE_T);}
static void *array_QStyleOptionSpinBox(SIP_SSIZE_T sipNrElem)
{
    return new QStyleOptionSpinBox[sipNrElem];
}


extern "C" {static void *copy_QStyleOptionSpinBox(const void *, SIP_SSIZE_T);}
static void *copy_QStyleOptionSpinBox(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QStyleOptionSpinBox(reinterpret_cast<const QStyleOptionSpinBox *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionSpinBox(sipSimpleWrapper *);}
static void dealloc_QStyleOptionSpinBox(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QStyleOptionSpinBox(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QStyleOptionSpinBox(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionSpinBox(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QStyleOptionSpinBox *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QStyleOptionSpinBox();

            return sipCpp;
        }
    }

    {
        const QStyleOptionSpinBox* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QStyleOptionSpinBox, &a0))
        {
            sipCpp = new QStyleOptionSpinBox(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionSpinBox[] = {{319, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionSpinBox[] = {
    {sipName_Type, static_cast<int>(QStyleOptionSpinBox::Type), 363},
    {sipName_Version, static_cast<int>(QStyleOptionSpinBox::Version), 364},
};


extern "C" {static PyObject *varget_QStyleOptionSpinBox_buttonSymbols(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSpinBox_buttonSymbols(void *sipSelf, PyObject *, PyObject *)
{
    QAbstractSpinBox::ButtonSymbols sipVal;
    QStyleOptionSpinBox *sipCpp = reinterpret_cast<QStyleOptionSpinBox *>(sipSelf);

    sipVal = sipCpp->buttonSymbols;

    return sipConvertFromEnum(sipVal, sipType_QAbstractSpinBox_ButtonSymbols);
}


extern "C" {static int varset_QStyleOptionSpinBox_buttonSymbols(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSpinBox_buttonSymbols(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QAbstractSpinBox::ButtonSymbols sipVal;
    QStyleOptionSpinBox *sipCpp = reinterpret_cast<QStyleOptionSpinBox *>(sipSelf);

    sipVal = (QAbstractSpinBox::ButtonSymbols)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->buttonSymbols = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSpinBox_frame(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSpinBox_frame(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
    QStyleOptionSpinBox *sipCpp = reinterpret_cast<QStyleOptionSpinBox *>(sipSelf);

    sipVal = sipCpp->frame;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_QStyleOptionSpinBox_frame(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSpinBox_frame(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
    QStyleOptionSpinBox *sipCpp = reinterpret_cast<QStyleOptionSpinBox *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->frame = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionSpinBox_stepEnabled(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionSpinBox_stepEnabled(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
    QAbstractSpinBox::StepEnabled*sipVal;
    QStyleOptionSpinBox *sipCpp = reinterpret_cast<QStyleOptionSpinBox *>(sipSelf);

    sipVal = &sipCpp->stepEnabled;

    sipPy = sipConvertFromType(sipVal, sipType_QAbstractSpinBox_StepEnabled, NULL);
    sipKeepReference(sipPy, -1, sipPySelf);

    return sipPy;
}


extern "C" {static int varset_QStyleOptionSpinBox_stepEnabled(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionSpinBox_stepEnabled(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QAbstractSpinBox::StepEnabled*sipVal;
    QStyleOptionSpinBox *sipCpp = reinterpret_cast<QStyleOptionSpinBox *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QAbstractSpinBox::StepEnabled *>(sipForceConvertToType(sipPy,sipType_QAbstractSpinBox_StepEnabled,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->stepEnabled = *sipVal;

    sipReleaseType(sipVal, sipType_QAbstractSpinBox_StepEnabled, sipValState);

    return 0;
}

sipVariableDef variables_QStyleOptionSpinBox[] = {
    {InstanceVariable, sipName_buttonSymbols, (PyMethodDef *)varget_QStyleOptionSpinBox_buttonSymbols, (PyMethodDef *)varset_QStyleOptionSpinBox_buttonSymbols, NULL, NULL},
    {InstanceVariable, sipName_frame, (PyMethodDef *)varget_QStyleOptionSpinBox_frame, (PyMethodDef *)varset_QStyleOptionSpinBox_frame, NULL, NULL},
    {InstanceVariable, sipName_stepEnabled, (PyMethodDef *)varget_QStyleOptionSpinBox_stepEnabled, (PyMethodDef *)varset_QStyleOptionSpinBox_stepEnabled, NULL, NULL},
};

PyDoc_STRVAR(doc_QStyleOptionSpinBox, "\1QStyleOptionSpinBox()\n"
    "QStyleOptionSpinBox(QStyleOptionSpinBox)");


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QStyleOptionSpinBox = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionSpinBox,
        {0}
    },
    {
        sipNameNr_QStyleOptionSpinBox,
        {0, 0, 1},
        0, 0,
        2, enummembers_QStyleOptionSpinBox,
        3, variables_QStyleOptionSpinBox,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QStyleOptionSpinBox,
    -1,
    -1,
    supers_QStyleOptionSpinBox,
    0,
    init_type_QStyleOptionSpinBox,
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
    dealloc_QStyleOptionSpinBox,
    assign_QStyleOptionSpinBox,
    array_QStyleOptionSpinBox,
    copy_QStyleOptionSpinBox,
    release_QStyleOptionSpinBox,
    cast_QStyleOptionSpinBox,
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
