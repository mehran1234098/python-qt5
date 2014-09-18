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

#line 614 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQWhatsThisClickedEvent.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQWhatsThisClickedEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQWhatsThisClickedEvent.cpp"


class sipQWhatsThisClickedEvent : public QWhatsThisClickedEvent
{
public:
    sipQWhatsThisClickedEvent(const QString&);
    sipQWhatsThisClickedEvent(const QWhatsThisClickedEvent&);
    ~sipQWhatsThisClickedEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQWhatsThisClickedEvent(const sipQWhatsThisClickedEvent &);
    sipQWhatsThisClickedEvent &operator = (const sipQWhatsThisClickedEvent &);
};

sipQWhatsThisClickedEvent::sipQWhatsThisClickedEvent(const QString& a0): QWhatsThisClickedEvent(a0), sipPySelf(0)
{
}

sipQWhatsThisClickedEvent::sipQWhatsThisClickedEvent(const QWhatsThisClickedEvent& a0): QWhatsThisClickedEvent(a0), sipPySelf(0)
{
}

sipQWhatsThisClickedEvent::~sipQWhatsThisClickedEvent()
{
    sipCommonDtor(sipPySelf);
}


PyDoc_STRVAR(doc_QWhatsThisClickedEvent_href, "QWhatsThisClickedEvent.href() -> str");

extern "C" {static PyObject *meth_QWhatsThisClickedEvent_href(PyObject *, PyObject *);}
static PyObject *meth_QWhatsThisClickedEvent_href(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWhatsThisClickedEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWhatsThisClickedEvent, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->href());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWhatsThisClickedEvent, sipName_href, doc_QWhatsThisClickedEvent_href);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWhatsThisClickedEvent(void *, const sipTypeDef *);}
static void *cast_QWhatsThisClickedEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QWhatsThisClickedEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QWhatsThisClickedEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWhatsThisClickedEvent(void *, int);}
static void release_QWhatsThisClickedEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQWhatsThisClickedEvent *>(sipCppV);
    else
        delete reinterpret_cast<QWhatsThisClickedEvent *>(sipCppV);
}


extern "C" {static void dealloc_QWhatsThisClickedEvent(sipSimpleWrapper *);}
static void dealloc_QWhatsThisClickedEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQWhatsThisClickedEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QWhatsThisClickedEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QWhatsThisClickedEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWhatsThisClickedEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQWhatsThisClickedEvent *sipCpp = 0;

    {
        const QString* a0;
        int a0State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new sipQWhatsThisClickedEvent(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QWhatsThisClickedEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QWhatsThisClickedEvent, &a0))
        {
            sipCpp = new sipQWhatsThisClickedEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QWhatsThisClickedEvent[] = {{53, 0, 1}};


static PyMethodDef methods_QWhatsThisClickedEvent[] = {
    {SIP_MLNAME_CAST(sipName_href), meth_QWhatsThisClickedEvent_href, METH_VARARGS, SIP_MLDOC_CAST(doc_QWhatsThisClickedEvent_href)}
};

PyDoc_STRVAR(doc_QWhatsThisClickedEvent, "\1QWhatsThisClickedEvent(str)\n"
    "QWhatsThisClickedEvent(QWhatsThisClickedEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QWhatsThisClickedEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWhatsThisClickedEvent,
        {0}
    },
    {
        sipNameNr_QWhatsThisClickedEvent,
        {0, 0, 1},
        1, methods_QWhatsThisClickedEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWhatsThisClickedEvent,
    -1,
    -1,
    supers_QWhatsThisClickedEvent,
    0,
    init_type_QWhatsThisClickedEvent,
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
    dealloc_QWhatsThisClickedEvent,
    0,
    0,
    0,
    release_QWhatsThisClickedEvent,
    cast_QWhatsThisClickedEvent,
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
