/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.16.3 on Thu Sep 18 06:18:54 2014
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

#include "sipAPIQtWinExtras.h"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWinExtras/qwinjumplistcategory.sip"
#include <qwinjumplistcategory.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQWinJumpListCategory.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQWinJumpListCategory.cpp"
#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWinExtras/qwinjumplistitem.sip"
#include <qwinjumplistitem.h>
#line 36 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQWinJumpListCategory.cpp"
#line 34 "sip/QtCore/qstringlist.sip"
#include <qstringlist.h>
#line 39 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQWinJumpListCategory.cpp"
#line 30 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 42 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQWinJumpListCategory.cpp"
#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 45 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQWinJumpListCategory.cpp"


PyDoc_STRVAR(doc_QWinJumpListCategory_type, "QWinJumpListCategory.type() -> QWinJumpListCategory.Type");

extern "C" {static PyObject *meth_QWinJumpListCategory_type(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWinJumpListCategory, &sipCpp))
        {
            QWinJumpListCategory::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(sipRes,sipType_QWinJumpListCategory_Type);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_type, doc_QWinJumpListCategory_type);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_isVisible, "QWinJumpListCategory.isVisible() -> bool");

extern "C" {static PyObject *meth_QWinJumpListCategory_isVisible(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_isVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWinJumpListCategory, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isVisible();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_isVisible, doc_QWinJumpListCategory_isVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_setVisible, "QWinJumpListCategory.setVisible(bool)");

extern "C" {static PyObject *meth_QWinJumpListCategory_setVisible(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_setVisible(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
        QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QWinJumpListCategory, &sipCpp, &a0))
        {
            sipCpp->setVisible(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_setVisible, doc_QWinJumpListCategory_setVisible);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_title, "QWinJumpListCategory.title() -> str");

extern "C" {static PyObject *meth_QWinJumpListCategory_title(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_title(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWinJumpListCategory, &sipCpp))
        {
            QString*sipRes;

            sipRes = new QString(sipCpp->title());

            return sipConvertFromNewType(sipRes,sipType_QString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_title, doc_QWinJumpListCategory_title);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_setTitle, "QWinJumpListCategory.setTitle(str)");

extern "C" {static PyObject *meth_QWinJumpListCategory_setTitle(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_setTitle(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWinJumpListCategory, &sipCpp, sipType_QString,&a0, &a0State))
        {
            sipCpp->setTitle(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_setTitle, doc_QWinJumpListCategory_setTitle);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_count, "QWinJumpListCategory.count() -> int");

extern "C" {static PyObject *meth_QWinJumpListCategory_count(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_count(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWinJumpListCategory, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->count();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_count, doc_QWinJumpListCategory_count);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_isEmpty, "QWinJumpListCategory.isEmpty() -> bool");

extern "C" {static PyObject *meth_QWinJumpListCategory_isEmpty(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_isEmpty(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWinJumpListCategory, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isEmpty();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_isEmpty, doc_QWinJumpListCategory_isEmpty);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_items, "QWinJumpListCategory.items() -> list-of-QWinJumpListItem");

extern "C" {static PyObject *meth_QWinJumpListCategory_items(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_items(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWinJumpListCategory, &sipCpp))
        {
            QList<QWinJumpListItem*>*sipRes;

            sipRes = new QList<QWinJumpListItem*>(sipCpp->items());

            return sipConvertFromNewType(sipRes,sipType_QList_0101QWinJumpListItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_items, doc_QWinJumpListCategory_items);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_addItem, "QWinJumpListCategory.addItem(QWinJumpListItem)");

extern "C" {static PyObject *meth_QWinJumpListCategory_addItem(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_addItem(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWinJumpListItem* a0;
        QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ:", &sipSelf, sipType_QWinJumpListCategory, &sipCpp, sipType_QWinJumpListItem, &a0))
        {
            sipCpp->addItem(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_addItem, doc_QWinJumpListCategory_addItem);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_addDestination, "QWinJumpListCategory.addDestination(str) -> QWinJumpListItem");

extern "C" {static PyObject *meth_QWinJumpListCategory_addDestination(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_addDestination(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QWinJumpListCategory, &sipCpp, sipType_QString,&a0, &a0State))
        {
            QWinJumpListItem*sipRes;

            sipRes = sipCpp->addDestination(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipConvertFromType(sipRes,sipType_QWinJumpListItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_addDestination, doc_QWinJumpListCategory_addDestination);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_addLink, "QWinJumpListCategory.addLink(str, str, list-of-str arguments=QStringList()) -> QWinJumpListItem\n"
    "QWinJumpListCategory.addLink(QIcon, str, str, list-of-str arguments=QStringList()) -> QWinJumpListItem");

extern "C" {static PyObject *meth_QWinJumpListCategory_addLink(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_addLink(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = NULL;

    {
        const QString* a0;
        int a0State = 0;
        const QString* a1;
        int a1State = 0;
        const QStringList& a2def = QStringList();
        const QStringList* a2 = &a2def;
        int a2State = 0;
        QWinJumpListCategory *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            sipName_arguments,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ1J1|J1", &sipSelf, sipType_QWinJumpListCategory, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QStringList,&a2, &a2State))
        {
            QWinJumpListItem*sipRes;

            sipRes = sipCpp->addLink(*a0,*a1,*a2);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QStringList *>(a2),sipType_QStringList,a2State);

            return sipConvertFromType(sipRes,sipType_QWinJumpListItem,NULL);
        }
    }

    {
        const QIcon* a0;
        const QString* a1;
        int a1State = 0;
        const QString* a2;
        int a2State = 0;
        const QStringList& a3def = QStringList();
        const QStringList* a3 = &a3def;
        int a3State = 0;
        QWinJumpListCategory *sipCpp;

        static const char *sipKwdList[] = {
            NULL,
            NULL,
            NULL,
            sipName_arguments,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, NULL, "BJ9J1J1|J1", &sipSelf, sipType_QWinJumpListCategory, &sipCpp, sipType_QIcon, &a0, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QStringList,&a3, &a3State))
        {
            QWinJumpListItem*sipRes;

            sipRes = sipCpp->addLink(*a0,*a1,*a2,*a3);
            sipReleaseType(const_cast<QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast<QString *>(a2),sipType_QString,a2State);
            sipReleaseType(const_cast<QStringList *>(a3),sipType_QStringList,a3State);

            return sipConvertFromType(sipRes,sipType_QWinJumpListItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_addLink, doc_QWinJumpListCategory_addLink);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_addSeparator, "QWinJumpListCategory.addSeparator() -> QWinJumpListItem");

extern "C" {static PyObject *meth_QWinJumpListCategory_addSeparator(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_addSeparator(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWinJumpListCategory, &sipCpp))
        {
            QWinJumpListItem*sipRes;

            sipRes = sipCpp->addSeparator();

            return sipConvertFromType(sipRes,sipType_QWinJumpListItem,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_addSeparator, doc_QWinJumpListCategory_addSeparator);

    return NULL;
}


PyDoc_STRVAR(doc_QWinJumpListCategory_clear, "QWinJumpListCategory.clear()");

extern "C" {static PyObject *meth_QWinJumpListCategory_clear(PyObject *, PyObject *);}
static PyObject *meth_QWinJumpListCategory_clear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        QWinJumpListCategory *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QWinJumpListCategory, &sipCpp))
        {
            sipCpp->clear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_QWinJumpListCategory, sipName_clear, doc_QWinJumpListCategory_clear);

    return NULL;
}


/* Cast a pointer to a type somewhere in its superclass hierarchy. */
extern "C" {static void *cast_QWinJumpListCategory(void *, const sipTypeDef *);}
static void *cast_QWinJumpListCategory(void *ptr, const sipTypeDef *targetType)
{
    if (targetType == sipType_QWinJumpListCategory)
        return ptr;

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_QWinJumpListCategory(void *, int);}
static void release_QWinJumpListCategory(void *sipCppV,int)
{
    delete reinterpret_cast<QWinJumpListCategory *>(sipCppV);
}


extern "C" {static void dealloc_QWinJumpListCategory(sipSimpleWrapper *);}
static void dealloc_QWinJumpListCategory(sipSimpleWrapper *sipSelf)
{
    if (sipIsPyOwned(sipSelf))
    {
        release_QWinJumpListCategory(sipGetAddress(sipSelf),0);
    }
}


extern "C" {static void *init_type_QWinJumpListCategory(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QWinJumpListCategory(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    QWinJumpListCategory *sipCpp = 0;

    {
        const QString& a0def = QString();
        const QString* a0 = &a0def;
        int a0State = 0;

        static const char *sipKwdList[] = {
            sipName_title,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "|J1", sipType_QString,&a0, &a0State))
        {
            sipCpp = new QWinJumpListCategory(*a0);
            sipReleaseType(const_cast<QString *>(a0),sipType_QString,a0State);

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_QWinJumpListCategory[] = {
    {SIP_MLNAME_CAST(sipName_addDestination), meth_QWinJumpListCategory_addDestination, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_addDestination)},
    {SIP_MLNAME_CAST(sipName_addItem), meth_QWinJumpListCategory_addItem, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_addItem)},
    {SIP_MLNAME_CAST(sipName_addLink), (PyCFunction)meth_QWinJumpListCategory_addLink, METH_VARARGS|METH_KEYWORDS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_addLink)},
    {SIP_MLNAME_CAST(sipName_addSeparator), meth_QWinJumpListCategory_addSeparator, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_addSeparator)},
    {SIP_MLNAME_CAST(sipName_clear), meth_QWinJumpListCategory_clear, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_clear)},
    {SIP_MLNAME_CAST(sipName_count), meth_QWinJumpListCategory_count, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_count)},
    {SIP_MLNAME_CAST(sipName_isEmpty), meth_QWinJumpListCategory_isEmpty, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_isEmpty)},
    {SIP_MLNAME_CAST(sipName_isVisible), meth_QWinJumpListCategory_isVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_isVisible)},
    {SIP_MLNAME_CAST(sipName_items), meth_QWinJumpListCategory_items, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_items)},
    {SIP_MLNAME_CAST(sipName_setTitle), meth_QWinJumpListCategory_setTitle, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_setTitle)},
    {SIP_MLNAME_CAST(sipName_setVisible), meth_QWinJumpListCategory_setVisible, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_setVisible)},
    {SIP_MLNAME_CAST(sipName_title), meth_QWinJumpListCategory_title, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_title)},
    {SIP_MLNAME_CAST(sipName_type), meth_QWinJumpListCategory_type, METH_VARARGS, SIP_MLDOC_CAST(doc_QWinJumpListCategory_type)}
};

static sipEnumMemberDef enummembers_QWinJumpListCategory[] = {
    {sipName_Custom, static_cast<int>(QWinJumpListCategory::Custom), 5},
    {sipName_Frequent, static_cast<int>(QWinJumpListCategory::Frequent), 5},
    {sipName_Recent, static_cast<int>(QWinJumpListCategory::Recent), 5},
    {sipName_Tasks, static_cast<int>(QWinJumpListCategory::Tasks), 5},
};

PyDoc_STRVAR(doc_QWinJumpListCategory, "\1QWinJumpListCategory(str title=QString())");


pyqt5ClassTypeDef sipTypeDef_QtWinExtras_QWinJumpListCategory = {
{
    {
        -1,
        0,
        0,
        SIP_TYPE_SUPER_INIT|SIP_TYPE_CLASS,
        sipNameNr_QWinJumpListCategory,
        {0}
    },
    {
        sipNameNr_QWinJumpListCategory,
        {0, 0, 1},
        13, methods_QWinJumpListCategory,
        4, enummembers_QWinJumpListCategory,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_QWinJumpListCategory,
    sipNameNr_PyQt5_QtCore_pyqtWrapperType,
    -1,
    0,
    0,
    init_type_QWinJumpListCategory,
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
    dealloc_QWinJumpListCategory,
    0,
    0,
    0,
    release_QWinJumpListCategory,
    cast_QWinJumpListCategory,
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
