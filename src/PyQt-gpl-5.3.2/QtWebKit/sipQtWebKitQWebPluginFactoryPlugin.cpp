/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:20 2014
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

#include "sipAPIQtWebKit.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 75 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 31 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebPluginFactoryPlugin.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 35 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebPluginFactoryPlugin.cpp"
#line 36 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 38 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebPluginFactoryPlugin.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 62 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWebKit/qwebpluginfactory.sip"
#include <qwebpluginfactory.h>
#line 43 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWebKit/sipQtWebKitQWebPluginFactoryPlugin.cpp"


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWebPluginFactory_Plugin(void *, const sipTypeDef *);}
static void *cast_QWebPluginFactory_Plugin(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWebPluginFactory_Plugin)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWebPluginFactory_Plugin(void *, int);}
static void release_QWebPluginFactory_Plugin(void *sipCppV,int)
{
    delete reinterpret_cast<QWebPluginFactory::Plugin *>(sipCppV);
}


extern "C" {static void assign_QWebPluginFactory_Plugin(void *, SIP_SSIZE_T, const void *);}
static void assign_QWebPluginFactory_Plugin(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QWebPluginFactory::Plugin *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QWebPluginFactory::Plugin *>(sipSrc);
}


extern "C" {static void *array_QWebPluginFactory_Plugin(SIP_SSIZE_T);}
static void *array_QWebPluginFactory_Plugin(SIP_SSIZE_T sipNrElem)
{
    return new QWebPluginFactory::Plugin[sipNrElem];
}


extern "C" {static void *copy_QWebPluginFactory_Plugin(const void *, SIP_SSIZE_T);}
static void *copy_QWebPluginFactory_Plugin(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QWebPluginFactory::Plugin(reinterpret_cast<const QWebPluginFactory::Plugin *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QWebPluginFactory_Plugin(sipSimpleWrapper *);}
static void dealloc_QWebPluginFactory_Plugin(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWebPluginFactory_Plugin(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWebPluginFactory_Plugin(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWebPluginFactory_Plugin(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWebPluginFactory::Plugin *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new QWebPluginFactory::Plugin();

            return sipCpp;
        }
    }

    {
        const QWebPluginFactory::Plugin* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWebPluginFactory_Plugin, &a0))
        {
            sipCpp = new QWebPluginFactory::Plugin(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_description(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_description(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipVal = &sipCpp->description;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QWebPluginFactory_Plugin_description(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_description(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->description = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_mimeTypes(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_mimeTypes(void *sipSelf, PyObject *, PyObject *)
{
    QList<QWebPluginFactory::MimeType>*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipVal = &sipCpp->mimeTypes;

    return sipConvertFromType(sipVal, sipType_QList_0100QWebPluginFactory_MimeType, NULL);
}


extern "C" {static int varset_QWebPluginFactory_Plugin_mimeTypes(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_mimeTypes(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QList<QWebPluginFactory::MimeType>*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QList<QWebPluginFactory::MimeType> *>(sipForceConvertToType(sipPy,sipType_QList_0100QWebPluginFactory_MimeType,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mimeTypes = *sipVal;

    sipReleaseType(sipVal, sipType_QList_0100QWebPluginFactory_MimeType, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QWebPluginFactory_Plugin_name(void *, PyObject *, PyObject *);}
static PyObject *varget_QWebPluginFactory_Plugin_name(void *sipSelf, PyObject *, PyObject *)
{
    QString*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    sipVal = &sipCpp->name;

    return sipConvertFromType(sipVal, sipType_QString, NULL);
}


extern "C" {static int varset_QWebPluginFactory_Plugin_name(void *, PyObject *, PyObject *);}
static int varset_QWebPluginFactory_Plugin_name(void *sipSelf, PyObject *sipPy, PyObject *)
{
    QString*sipVal;
    QWebPluginFactory::Plugin *sipCpp = reinterpret_cast<QWebPluginFactory::Plugin *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast<QString *>(sipForceConvertToType(sipPy,sipType_QString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->name = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}

sipVariableDef variables_QWebPluginFactory_Plugin[] = {
    {InstanceVariable, sipName_description, (PyMethodDef *)varget_QWebPluginFactory_Plugin_description, (PyMethodDef *)varset_QWebPluginFactory_Plugin_description, NULL, NULL},
    {InstanceVariable, sipName_mimeTypes, (PyMethodDef *)varget_QWebPluginFactory_Plugin_mimeTypes, (PyMethodDef *)varset_QWebPluginFactory_Plugin_mimeTypes, NULL, NULL},
    {InstanceVariable, sipName_name, (PyMethodDef *)varget_QWebPluginFactory_Plugin_name, (PyMethodDef *)varset_QWebPluginFactory_Plugin_name, NULL, NULL},
};

PyDoc_STRVAR(doc_QWebPluginFactory_Plugin, "\1QWebPluginFactory.Plugin()\n"
    "QWebPluginFactory.Plugin(QWebPluginFactory.Plugin)");


pyqt5ClassTypeDef sipTypeDef_QtWebKit_QWebPluginFactory_Plugin = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWebPluginFactory__Plugin,
        {0}
    },
    {
        sipNameNr_Plugin,
        {14, 255, 0},
        0, 0,
        0, 0,
        3, variables_QWebPluginFactory_Plugin,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWebPluginFactory_Plugin,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    sipNameNr_sip_simplewrapper,
    0,
    0,
    init_type_QWebPluginFactory_Plugin,
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
    dealloc_QWebPluginFactory_Plugin,
    assign_QWebPluginFactory_Plugin,
    array_QWebPluginFactory_Plugin,
    copy_QWebPluginFactory_Plugin,
    release_QWebPluginFactory_Plugin,
    cast_QWebPluginFactory_Plugin,
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
