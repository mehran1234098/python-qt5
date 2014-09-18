/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:48 2014
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

#include "sipAPIQtSensors.h"

#line 28 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtSensors/qirproximitysensor.sip"
#include <qirproximitysensor.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"

#line 30 "sip/QtCore/qvariant.sip"
#include <qvariant.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 30 "sip/QtCore/qmetaobject.sip"
#include <qmetaobject.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 231 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 219 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 28 "sip/QtCore/qobject.sip"
#include <qobject.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 32 "sip/QtCore/qbytearray.sip"
#include <qbytearray.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 60 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 63 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 26 "sip/QtCore/qthread.sip"
#include <qthread.h>
#line 66 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 69 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 30 "sip/QtCore/qregexp.sip"
#include <qregexp.h>
#line 72 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 30 "sip/QtCore/qregularexpression.sip"
#include <qregularexpression.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"
#line 26 "sip/QtCore/qobjectdefs.sip"
#include <qobjectdefs.h>
#line 78 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtSensors/sipQtSensorsQIRProximityReading.cpp"


PyDoc_STRVAR(doc_QIRProximityReading_reflectance, "QIRProximityReading.reflectance() -> float");

extern "C" {static PyObject *meth_QIRProximityReading_reflectance(PyObject *, PyObject *);}
static PyObject *meth_QIRProximityReading_reflectance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QIRProximityReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIRProximityReading, &sipCpp))
        {
            qreal sipRes;

            sipRes = sipCpp->reflectance();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIRProximityReading, sipName_reflectance, doc_QIRProximityReading_reflectance);

    return NULL;
}


PyDoc_STRVAR(doc_QIRProximityReading_setReflectance, "QIRProximityReading.setReflectance(float)");

extern "C" {static PyObject *meth_QIRProximityReading_setReflectance(PyObject *, PyObject *);}
static PyObject *meth_QIRProximityReading_setReflectance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        qreal a0;
        QIRProximityReading *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_QIRProximityReading, &sipCpp, &a0))
        {
            sipCpp->setReflectance(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QIRProximityReading, sipName_setReflectance, doc_QIRProximityReading_setReflectance);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QIRProximityReading(void *, const sipTypeDef *);}
static void *cast_QIRProximityReading(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QIRProximityReading)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QSensorReading)->ctd_cast((QSensorReading *)(QIRProximityReading *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIRProximityReading(void *, int);}
static void release_QIRProximityReading(void *sipCppV,int)
{
    QIRProximityReading *sipCpp = reinterpret_cast<QIRProximityReading *>(sipCppV);

    if (QThread::currentThread() == sipCpp->thread())
        delete sipCpp;
    else
        sipCpp->deleteLater();
}


extern "C" {static void dealloc_QIRProximityReading(sipSimpleWrapper *);}
static void dealloc_QIRProximityReading(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QIRProximityReading(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QIRProximityReading[] = {{51, 255, 1}};


static PyMethodDef methods_QIRProximityReading[] = {
    {SIP_MLNAME_CAST(sipName_reflectance), meth_QIRProximityReading_reflectance, METH_VARARGS, SIP_MLDOC_CAST(doc_QIRProximityReading_reflectance)},
    {SIP_MLNAME_CAST(sipName_setReflectance), meth_QIRProximityReading_setReflectance, METH_VARARGS, SIP_MLDOC_CAST(doc_QIRProximityReading_setReflectance)}
};


pyqt5ClassTypeDef sipTypeDef_QtSensors_QIRProximityReading = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QIRProximityReading,
        {0}
    },
    {
        sipNameNr_QIRProximityReading,
        {0, 0, 1},
        2, methods_QIRProximityReading,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QIRProximityReading,
    0,
    0,
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
    dealloc_QIRProximityReading,
    0,
    0,
    0,
    release_QIRProximityReading,
    cast_QIRProximityReading,
    0,
    0,
    0,
    0,
    0,
    0
},
    &QIRProximityReading::staticMetaObject,
    0,
    0,
    0
};
