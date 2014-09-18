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

#line 432 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQHideEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtGui/sipQtGuiQHideEvent.cpp"


class sipQHideEvent : public QHideEvent
{
public:
    sipQHideEvent();
    sipQHideEvent(const QHideEvent&);
    ~sipQHideEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHideEvent(const sipQHideEvent &);
    sipQHideEvent &operator = (const sipQHideEvent &);
};

sipQHideEvent::sipQHideEvent(): QHideEvent(), sipPySelf(0)
{
}

sipQHideEvent::sipQHideEvent(const QHideEvent& a0): QHideEvent(a0), sipPySelf(0)
{
}

sipQHideEvent::~sipQHideEvent()
{
    sipCommonDtor(sipPySelf);
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QHideEvent(void *, const sipTypeDef *);}
static void *cast_QHideEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QHideEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QEvent)->ctd_cast((QEvent *)(QHideEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHideEvent(void *, int);}
static void release_QHideEvent(void *sipCppV,int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHideEvent *>(sipCppV);
    else
        delete reinterpret_cast<QHideEvent *>(sipCppV);
}


extern "C" {static void assign_QHideEvent(void *, SIP_SSIZE_T, const void *);}
static void assign_QHideEvent(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QHideEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QHideEvent *>(sipSrc);
}


extern "C" {static void *array_QHideEvent(SIP_SSIZE_T);}
static void *array_QHideEvent(SIP_SSIZE_T sipNrElem)
{
    return new QHideEvent[sipNrElem];
}


extern "C" {static void *copy_QHideEvent(const void *, SIP_SSIZE_T);}
static void *copy_QHideEvent(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QHideEvent(reinterpret_cast<const QHideEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHideEvent(sipSimpleWrapper *);}
static void dealloc_QHideEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerived(sipSelf))
        reinterpret_cast<sipQHideEvent *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsPyOwned(sipSelf))
    {
        release_QHideEvent(sipGetAddress(sipSelf),sipSelf->flags);
    }
}


extern "C" {static void *init_type_QHideEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHideEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHideEvent *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipQHideEvent();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const QHideEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_QHideEvent, &a0))
        {
            sipCpp = new sipQHideEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHideEvent[] = {{53, 0, 1}};

PyDoc_STRVAR(doc_QHideEvent, "\1QHideEvent()\n"
    "QHideEvent(QHideEvent)");


pyqt5ClassTypeDef sipTypeDef_QtGui_QHideEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QHideEvent,
        {0}
    },
    {
        sipNameNr_QHideEvent,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QHideEvent,
    -1,
    -1,
    supers_QHideEvent,
    0,
    init_type_QHideEvent,
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
    dealloc_QHideEvent,
    assign_QHideEvent,
    array_QHideEvent,
    copy_QHideEvent,
    release_QHideEvent,
    cast_QHideEvent,
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
