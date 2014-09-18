/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:33 2014
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

#line 194 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWidgets/qgraphicssceneevent.sip"
#include <qgraphicssceneevent.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"

#line 26 "sip/QtCore/qmimedata.sip"
#include <qmimedata.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"
#line 30 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"
#line 30 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 48 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"
#line 30 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 51 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"
#line 99 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 54 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 57 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWidgets/sipQtWidgetsQGraphicsSceneDragDropEvent.cpp"


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_pos, "QGraphicsSceneDragDropEvent.pos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_pos, doc_QGraphicsSceneDragDropEvent_pos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_scenePos, "QGraphicsSceneDragDropEvent.scenePos() -> QPointF");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_scenePos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_scenePos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            QPointF*sipRes;

            sipRes = new QPointF(sipCpp->scenePos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_scenePos, doc_QGraphicsSceneDragDropEvent_scenePos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_screenPos, "QGraphicsSceneDragDropEvent.screenPos() -> QPoint");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_screenPos(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_screenPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            QPoint*sipRes;

            sipRes = new QPoint(sipCpp->screenPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_screenPos, doc_QGraphicsSceneDragDropEvent_screenPos);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_buttons, "QGraphicsSceneDragDropEvent.buttons() -> Qt.MouseButtons");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_buttons(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_buttons(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::MouseButtons*sipRes;

            sipRes = new Qt::MouseButtons(sipCpp->buttons());

            return sipConvertFromNewType(sipRes,sipType_Qt_MouseButtons,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_buttons, doc_QGraphicsSceneDragDropEvent_buttons);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_modifiers, "QGraphicsSceneDragDropEvent.modifiers() -> Qt.KeyboardModifiers");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_modifiers(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_modifiers(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::KeyboardModifiers*sipRes;

            sipRes = new Qt::KeyboardModifiers(sipCpp->modifiers());

            return sipConvertFromNewType(sipRes,sipType_Qt_KeyboardModifiers,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_modifiers, doc_QGraphicsSceneDragDropEvent_modifiers);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_possibleActions, "QGraphicsSceneDragDropEvent.possibleActions() -> Qt.DropActions");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_possibleActions(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_possibleActions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::DropActions*sipRes;

            sipRes = new Qt::DropActions(sipCpp->possibleActions());

            return sipConvertFromNewType(sipRes,sipType_Qt_DropActions,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_possibleActions, doc_QGraphicsSceneDragDropEvent_possibleActions);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_proposedAction, "QGraphicsSceneDragDropEvent.proposedAction() -> Qt.DropAction");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_proposedAction(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_proposedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::DropAction sipRes;

            sipRes = sipCpp->proposedAction();

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_proposedAction, doc_QGraphicsSceneDragDropEvent_proposedAction);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_acceptProposedAction, "QGraphicsSceneDragDropEvent.acceptProposedAction()");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_acceptProposedAction(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_acceptProposedAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            sipCpp->acceptProposedAction();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_acceptProposedAction, doc_QGraphicsSceneDragDropEvent_acceptProposedAction);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_dropAction, "QGraphicsSceneDragDropEvent.dropAction() -> Qt.DropAction");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_dropAction(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_dropAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            Qt::DropAction sipRes;

            sipRes = sipCpp->dropAction();

            return sipConvertFromEnum(sipRes,sipType_Qt_DropAction);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_dropAction, doc_QGraphicsSceneDragDropEvent_dropAction);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_setDropAction, "QGraphicsSceneDragDropEvent.setDropAction(Qt.DropAction)");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_setDropAction(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_setDropAction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        Qt::DropAction a0;
        QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp, sipType_Qt_DropAction, &a0))
        {
            sipCpp->setDropAction(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_setDropAction, doc_QGraphicsSceneDragDropEvent_setDropAction);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_source, "QGraphicsSceneDragDropEvent.source() -> QWidget");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_source(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_source(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            QWidget*sipRes;

            sipRes = sipCpp->source();

            return sipConvertFromType(sipRes,sipType_QWidget,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_source, doc_QGraphicsSceneDragDropEvent_source);

    return NULL;
}


PyDoc_STRVAR(doc_QGraphicsSceneDragDropEvent_mimeData, "QGraphicsSceneDragDropEvent.mimeData() -> QMimeData");

extern "C" {static PyObject *meth_QGraphicsSceneDragDropEvent_mimeData(PyObject *, PyObject *);}
static PyObject *meth_QGraphicsSceneDragDropEvent_mimeData(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QGraphicsSceneDragDropEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QGraphicsSceneDragDropEvent, &sipCpp))
        {
            const QMimeData*sipRes;

            sipRes = sipCpp->mimeData();

            return sipConvertFromType(const_cast<QMimeData *>(sipRes),sipType_QMimeData,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QGraphicsSceneDragDropEvent, sipName_mimeData, doc_QGraphicsSceneDragDropEvent_mimeData);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QGraphicsSceneDragDropEvent(void *, const sipTypeDef *);}
static void *cast_QGraphicsSceneDragDropEvent(void *ptr, const sipTypeDef *targetType)
{
    void *res;

    if (targetType == sipType_QGraphicsSceneDragDropEvent)
        return ptr;

    if ((res = ((const sipClassTypeDef *)sipType_QGraphicsSceneEvent)->ctd_cast((QGraphicsSceneEvent *)(QGraphicsSceneDragDropEvent *)ptr,targetType)) != NULL)
        return res;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QGraphicsSceneDragDropEvent(void *, int);}
static void release_QGraphicsSceneDragDropEvent(void *sipCppV,int)
{
    delete reinterpret_cast<QGraphicsSceneDragDropEvent *>(sipCppV);
}


extern "C" {static void dealloc_QGraphicsSceneDragDropEvent(sipSimpleWrapper *);}
static void dealloc_QGraphicsSceneDragDropEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QGraphicsSceneDragDropEvent(sipGetAddress(sipSelf),0);
    }
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QGraphicsSceneDragDropEvent[] = {{149, 255, 1}};


static PyMethodDef methods_QGraphicsSceneDragDropEvent[] = {
    {SIP_MLNAME_CAST(sipName_acceptProposedAction), meth_QGraphicsSceneDragDropEvent_acceptProposedAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_acceptProposedAction)},
    {SIP_MLNAME_CAST(sipName_buttons), meth_QGraphicsSceneDragDropEvent_buttons, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_buttons)},
    {SIP_MLNAME_CAST(sipName_dropAction), meth_QGraphicsSceneDragDropEvent_dropAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_dropAction)},
    {SIP_MLNAME_CAST(sipName_mimeData), meth_QGraphicsSceneDragDropEvent_mimeData, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_mimeData)},
    {SIP_MLNAME_CAST(sipName_modifiers), meth_QGraphicsSceneDragDropEvent_modifiers, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_modifiers)},
    {SIP_MLNAME_CAST(sipName_pos), meth_QGraphicsSceneDragDropEvent_pos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_pos)},
    {SIP_MLNAME_CAST(sipName_possibleActions), meth_QGraphicsSceneDragDropEvent_possibleActions, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_possibleActions)},
    {SIP_MLNAME_CAST(sipName_proposedAction), meth_QGraphicsSceneDragDropEvent_proposedAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_proposedAction)},
    {SIP_MLNAME_CAST(sipName_scenePos), meth_QGraphicsSceneDragDropEvent_scenePos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_scenePos)},
    {SIP_MLNAME_CAST(sipName_screenPos), meth_QGraphicsSceneDragDropEvent_screenPos, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_screenPos)},
    {SIP_MLNAME_CAST(sipName_setDropAction), meth_QGraphicsSceneDragDropEvent_setDropAction, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_setDropAction)},
    {SIP_MLNAME_CAST(sipName_source), meth_QGraphicsSceneDragDropEvent_source, METH_VARARGS, SIP_MLDOC_CAST(doc_QGraphicsSceneDragDropEvent_source)}
};


pyqt5ClassTypeDef sipTypeDef_QtWidgets_QGraphicsSceneDragDropEvent = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QGraphicsSceneDragDropEvent,
        {0}
    },
    {
        sipNameNr_QGraphicsSceneDragDropEvent,
        {0, 0, 1},
        12, methods_QGraphicsSceneDragDropEvent,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_QGraphicsSceneDragDropEvent,
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
    dealloc_QGraphicsSceneDragDropEvent,
    0,
    0,
    0,
    release_QGraphicsSceneDragDropEvent,
    cast_QGraphicsSceneDragDropEvent,
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
