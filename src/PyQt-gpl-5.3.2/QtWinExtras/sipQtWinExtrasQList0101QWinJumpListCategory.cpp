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

#line 144 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 29 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQList0101QWinJumpListCategory.cpp"

#line 26 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\sip/QtWinExtras/qwinjumplistcategory.sip"
#include <qwinjumplistcategory.h>
#line 33 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQList0101QWinJumpListCategory.cpp"


extern "C" {static void assign_QList_0101QWinJumpListCategory(void *, SIP_SSIZE_T, const void *);}
static void assign_QList_0101QWinJumpListCategory(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast<QList<QWinJumpListCategory*> *>(sipDst)[sipDstIdx] = *reinterpret_cast<const QList<QWinJumpListCategory*> *>(sipSrc);
}


extern "C" {static void *array_QList_0101QWinJumpListCategory(SIP_SSIZE_T);}
static void *array_QList_0101QWinJumpListCategory(SIP_SSIZE_T sipNrElem)
{
    return new QList<QWinJumpListCategory*>[sipNrElem];
}


extern "C" {static void *copy_QList_0101QWinJumpListCategory(const void *, SIP_SSIZE_T);}
static void *copy_QList_0101QWinJumpListCategory(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new QList<QWinJumpListCategory*>(reinterpret_cast<const QList<QWinJumpListCategory*> *>(sipSrc)[sipSrcIdx]);
}


/* Call the mapped type's destructor. */
extern "C" {static void release_QList_0101QWinJumpListCategory(void *, int);}
static void release_QList_0101QWinJumpListCategory(void *ptr, int)
{
    delete reinterpret_cast<QList<QWinJumpListCategory*> *>(ptr);
}



extern "C" {static int convertTo_QList_0101QWinJumpListCategory(PyObject *, void **, int *, PyObject *);}
static int convertTo_QList_0101QWinJumpListCategory(PyObject *sipPy,void **sipCppPtrV,int *sipIsErr,PyObject *sipTransferObj)
{
    QList<QWinJumpListCategory*> **sipCppPtr = reinterpret_cast<QList<QWinJumpListCategory*> **>(sipCppPtrV);

#line 175 "sip/QtCore/qpycore_qlist.sip"
    PyObject *iter = PyObject_GetIter(sipPy);

    if (!sipIsErr)
    {
        Py_XDECREF(iter);

        return (iter
#if PY_MAJOR_VERSION < 3
                && !PyString_Check(sipPy)
#endif
                && !PyUnicode_Check(sipPy));
    }

    if (!iter)
    {
        *sipIsErr = 1;

        return 0;
    }

    QList<QWinJumpListCategory *> *ql = new QList<QWinJumpListCategory *>;
 
    for (SIP_SSIZE_T i = 0; ; ++i)
    {
        PyErr_Clear();
        PyObject *itm = PyIter_Next(iter);

        if (!itm)
        {
            if (PyErr_Occurred())
            {
                delete ql;
                Py_DECREF(iter);
                *sipIsErr = 1;

                return 0;
            }

            break;
        }

        QWinJumpListCategory *t = reinterpret_cast<QWinJumpListCategory *>(
                sipForceConvertToType(itm, sipType_QWinJumpListCategory, sipTransferObj, 0,
                        0, sipIsErr));
 
        if (*sipIsErr)
        {
            PyErr_Format(PyExc_TypeError,
                    "index " SIP_SSIZE_T_FORMAT " has type '%s' but 'QWinJumpListCategory' is expected",
                    i, Py_TYPE(itm)->tp_name);

            Py_DECREF(itm);
            delete ql;
            Py_DECREF(iter);

            return 0;
        }

        ql->append(t);

        Py_DECREF(itm);
    }

    Py_DECREF(iter);
 
    *sipCppPtr = ql;
 
    return sipGetState(sipTransferObj);
#line 140 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQList0101QWinJumpListCategory.cpp"
}


extern "C" {static PyObject *convertFrom_QList_0101QWinJumpListCategory(void *, PyObject *);}
static PyObject *convertFrom_QList_0101QWinJumpListCategory(void *sipCppV, PyObject *sipTransferObj)
{
   QList<QWinJumpListCategory*> *sipCpp = reinterpret_cast<QList<QWinJumpListCategory*> *>(sipCppV);

#line 148 "sip/QtCore/qpycore_qlist.sip"
    PyObject *l = PyList_New(sipCpp->size());

    if (!l)
        return 0;

    for (int i = 0; i < sipCpp->size(); ++i)
    {
        QWinJumpListCategory *t = sipCpp->at(i);

        // The explicit (void *) cast allows QWinJumpListCategory to be const.
        PyObject *tobj = sipConvertFromType((void *)t, sipType_QWinJumpListCategory,
                sipTransferObj);

        if (!tobj)
        {
            Py_DECREF(l);

            return 0;
        }

        PyList_SET_ITEM(l, i, tobj);
    }

    return l;
#line 174 "C:\\Users\\marcus\\Downloads\\PyQt-gpl-5.3.2\\QtWinExtras/sipQtWinExtrasQList0101QWinJumpListCategory.cpp"
}


sipMappedTypeDef sipTypeDef_QtWinExtras_QList_0101QWinJumpListCategory = {
    {
        -1,
        0,
        0,
        SIP_TYPE_MAPPED,
        sipNameNr_104,
        {0}
    },
    {
        -1,
        {0, 0, 1},
        0, 0,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0}
    },
    assign_QList_0101QWinJumpListCategory,
    array_QList_0101QWinJumpListCategory,
    copy_QList_0101QWinJumpListCategory,
    release_QList_0101QWinJumpListCategory,
    convertTo_QList_0101QWinJumpListCategory,
    convertFrom_QList_0101QWinJumpListCategory
};
