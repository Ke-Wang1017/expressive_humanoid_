/*
 * Interface wrapper code.
 *
 * Generated by SIP 4.19.3
 *
 * Copyright (C) 2009 Autodesk, Inc. and/or its licensors.
 * All Rights Reserved.
 * 
 * The coded instructions, statements, computer programs, and/or related material 
 * (collectively the "Data") in these files contain unpublished information 
 * proprietary to Autodesk, Inc. and/or its licensors, which is protected by 
 * Canada and United States of America federal copyright law and by international 
 * treaties. 
 * 
 * The Data may not be disclosed or distributed to third parties, in whole or in
 * part, without the prior written consent of Autodesk, Inc. ("Autodesk").
 * 
 * THE DATA IS PROVIDED "AS IS" AND WITHOUT WARRANTY.
 * ALL WARRANTIES ARE EXPRESSLY EXCLUDED AND DISCLAIMED. AUTODESK MAKES NO
 * WARRANTY OF ANY KIND WITH RESPECT TO THE DATA, EXPRESS, IMPLIED OR ARISING
 * BY CUSTOM OR TRADE USAGE, AND DISCLAIMS ANY IMPLIED WARRANTIES OF TITLE, 
 * NON-INFRINGEMENT, MERCHANTABILITY OR FITNESS FOR A PARTICULAR PURPOSE OR USE. 
 * WITHOUT LIMITING THE FOREGOING, AUTODESK DOES NOT WARRANT THAT THE OPERATION
 * OF THE DATA WILL BE UNINTERRUPTED OR ERROR FREE. 
 * 
 * IN NO EVENT SHALL AUTODESK, ITS AFFILIATES, PARENT COMPANIES, LICENSORS
 * OR SUPPLIERS ("AUTODESK GROUP") BE LIABLE FOR ANY LOSSES, DAMAGES OR EXPENSES
 * OF ANY KIND (INCLUDING WITHOUT LIMITATION PUNITIVE OR MULTIPLE DAMAGES OR OTHER
 * SPECIAL, DIRECT, INDIRECT, EXEMPLARY, INCIDENTAL, LOSS OF PROFITS, REVENUE
 * OR DATA, COST OF COVER OR CONSEQUENTIAL LOSSES OR DAMAGES OF ANY KIND),
 * HOWEVER CAUSED, AND REGARDLESS OF THE THEORY OF LIABILITY, WHETHER DERIVED
 * FROM CONTRACT, TORT (INCLUDING, BUT NOT LIMITED TO, NEGLIGENCE), OR OTHERWISE,
 * ARISING OUT OF OR RELATING TO THE DATA OR ITS USE OR ANY OTHER PERFORMANCE,
 * WHETHER OR NOT AUTODESK HAS BEEN ADVISED OF THE POSSIBILITY OF SUCH LOSS
 * OR DAMAGE. 
 */

#include "sipAPIfbx.h"




PyDoc_STRVAR(doc_FbxAnimCurveBase_Create, "Create(FbxManager, str) -> FbxAnimCurveBase");

extern "C" {static PyObject *meth_FbxAnimCurveBase_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxAnimCurveBase*sipRes;

            sipRes =  ::FbxAnimCurveBase::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxAnimCurveBase,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_Create, doc_FbxAnimCurveBase_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxAnimCurveBase_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxAnimCurveBase::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_GetClassId, doc_FbxAnimCurveBase_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_KeyClear, "KeyClear(self)");

extern "C" {static PyObject *meth_FbxAnimCurveBase_KeyClear(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_KeyClear(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_KeyClear);
                return NULL;
            }

            sipCpp->KeyClear();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_KeyClear, doc_FbxAnimCurveBase_KeyClear);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_KeyGetCount, "KeyGetCount(self) -> int");

extern "C" {static PyObject *meth_FbxAnimCurveBase_KeyGetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_KeyGetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_KeyGetCount);
                return NULL;
            }

            sipRes = sipCpp->KeyGetCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_KeyGetCount, doc_FbxAnimCurveBase_KeyGetCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_KeyAdd, "KeyAdd(self, FbxTime, FbxAnimCurveKeyBase) -> Tuple[int, int]");

extern "C" {static PyObject *meth_FbxAnimCurveBase_KeyAdd(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_KeyAdd(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::FbxTime* a0;
         ::FbxAnimCurveKeyBase* a1;
        int a2;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, sipType_FbxTime, &a0, sipType_FbxAnimCurveKeyBase, &a1))
        {
            int sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_KeyAdd);
                return NULL;
            }

            sipRes = sipCpp->KeyAdd(*a0,*a1,&a2);

            return sipBuildResult(0,"(ii)",sipRes,a2);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_KeyAdd, doc_FbxAnimCurveBase_KeyAdd);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_KeySet, "KeySet(self, int, FbxAnimCurveKeyBase) -> bool");

extern "C" {static PyObject *meth_FbxAnimCurveBase_KeySet(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_KeySet(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
         ::FbxAnimCurveKeyBase* a1;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, &a0, sipType_FbxAnimCurveKeyBase, &a1))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_KeySet);
                return NULL;
            }

            sipRes = sipCpp->KeySet(a0,*a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_KeySet, doc_FbxAnimCurveBase_KeySet);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_KeyRemove, "KeyRemove(self, int) -> bool\n"
    "KeyRemove(self, int, int) -> bool");

extern "C" {static PyObject *meth_FbxAnimCurveBase_KeyRemove(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_KeyRemove(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, &a0))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_KeyRemove);
                return NULL;
            }

            sipRes = sipCpp->KeyRemove(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
        int a0;
        int a1;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, &a0, &a1))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_KeyRemove);
                return NULL;
            }

            sipRes = sipCpp->KeyRemove(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_KeyRemove, doc_FbxAnimCurveBase_KeyRemove);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_KeyGetTime, "KeyGetTime(self, int) -> FbxTime");

extern "C" {static PyObject *meth_FbxAnimCurveBase_KeyGetTime(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_KeyGetTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        int a0;
        const  ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, &a0))
        {
             ::FbxTime*sipRes;

            sipRes = new  ::FbxTime((sipSelfWasArg ? sipCpp-> ::FbxAnimCurveBase::KeyGetTime(a0) : sipCpp->KeyGetTime(a0)));

            return sipConvertFromNewType(sipRes,sipType_FbxTime,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_KeyGetTime, doc_FbxAnimCurveBase_KeyGetTime);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_KeySetTime, "KeySetTime(self, int, FbxTime)");

extern "C" {static PyObject *meth_FbxAnimCurveBase_KeySetTime(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_KeySetTime(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        int a0;
         ::FbxTime* a1;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ9", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, &a0, sipType_FbxTime, &a1))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_KeySetTime);
                return NULL;
            }

            sipCpp->KeySetTime(a0,*a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_KeySetTime, doc_FbxAnimCurveBase_KeySetTime);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_SetPreExtrapolation, "SetPreExtrapolation(self, FbxAnimCurveBase.EExtrapolationType)");

extern "C" {static PyObject *meth_FbxAnimCurveBase_SetPreExtrapolation(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_SetPreExtrapolation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxAnimCurveBase::EExtrapolationType a0;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, sipType_FbxAnimCurveBase_EExtrapolationType, &a0))
        {
            sipCpp->SetPreExtrapolation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_SetPreExtrapolation, doc_FbxAnimCurveBase_SetPreExtrapolation);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_GetPreExtrapolation, "GetPreExtrapolation(self) -> FbxAnimCurveBase.EExtrapolationType");

extern "C" {static PyObject *meth_FbxAnimCurveBase_GetPreExtrapolation(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_GetPreExtrapolation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp))
        {
             ::FbxAnimCurveBase::EExtrapolationType sipRes;

            sipRes = sipCpp->GetPreExtrapolation();

            return sipConvertFromEnum(sipRes,sipType_FbxAnimCurveBase_EExtrapolationType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_GetPreExtrapolation, doc_FbxAnimCurveBase_GetPreExtrapolation);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_SetPreExtrapolationCount, "SetPreExtrapolationCount(self, int)");

extern "C" {static PyObject *meth_FbxAnimCurveBase_SetPreExtrapolationCount(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_SetPreExtrapolationCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, &a0))
        {
            sipCpp->SetPreExtrapolationCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_SetPreExtrapolationCount, doc_FbxAnimCurveBase_SetPreExtrapolationCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_GetPreExtrapolationCount, "GetPreExtrapolationCount(self) -> int");

extern "C" {static PyObject *meth_FbxAnimCurveBase_GetPreExtrapolationCount(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_GetPreExtrapolationCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp))
        {
            unsigned long sipRes;

            sipRes = sipCpp->GetPreExtrapolationCount();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_GetPreExtrapolationCount, doc_FbxAnimCurveBase_GetPreExtrapolationCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_SetPostExtrapolation, "SetPostExtrapolation(self, FbxAnimCurveBase.EExtrapolationType)");

extern "C" {static PyObject *meth_FbxAnimCurveBase_SetPostExtrapolation(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_SetPostExtrapolation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxAnimCurveBase::EExtrapolationType a0;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, sipType_FbxAnimCurveBase_EExtrapolationType, &a0))
        {
            sipCpp->SetPostExtrapolation(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_SetPostExtrapolation, doc_FbxAnimCurveBase_SetPostExtrapolation);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_GetPostExtrapolation, "GetPostExtrapolation(self) -> FbxAnimCurveBase.EExtrapolationType");

extern "C" {static PyObject *meth_FbxAnimCurveBase_GetPostExtrapolation(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_GetPostExtrapolation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp))
        {
             ::FbxAnimCurveBase::EExtrapolationType sipRes;

            sipRes = sipCpp->GetPostExtrapolation();

            return sipConvertFromEnum(sipRes,sipType_FbxAnimCurveBase_EExtrapolationType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_GetPostExtrapolation, doc_FbxAnimCurveBase_GetPostExtrapolation);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_SetPostExtrapolationCount, "SetPostExtrapolationCount(self, int)");

extern "C" {static PyObject *meth_FbxAnimCurveBase_SetPostExtrapolationCount(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_SetPostExtrapolationCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        unsigned long a0;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bm", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, &a0))
        {
            sipCpp->SetPostExtrapolationCount(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_SetPostExtrapolationCount, doc_FbxAnimCurveBase_SetPostExtrapolationCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_GetPostExtrapolationCount, "GetPostExtrapolationCount(self) -> int");

extern "C" {static PyObject *meth_FbxAnimCurveBase_GetPostExtrapolationCount(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_GetPostExtrapolationCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp))
        {
            unsigned long sipRes;

            sipRes = sipCpp->GetPostExtrapolationCount();

            return PyLong_FromUnsignedLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_GetPostExtrapolationCount, doc_FbxAnimCurveBase_GetPostExtrapolationCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_Evaluate, "Evaluate(self, FbxTime) -> Tuple[float, int]");

extern "C" {static PyObject *meth_FbxAnimCurveBase_Evaluate(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_Evaluate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::FbxTime* a0;
        int a1;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, sipType_FbxTime, &a0))
        {
            float sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_Evaluate);
                return NULL;
            }

            sipRes = sipCpp->Evaluate(*a0,&a1);

            return sipBuildResult(0,"(fi)",sipRes,a1);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_Evaluate, doc_FbxAnimCurveBase_Evaluate);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_EvaluateIndex, "EvaluateIndex(self, float) -> float");

extern "C" {static PyObject *meth_FbxAnimCurveBase_EvaluateIndex(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_EvaluateIndex(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    PyObject *sipOrigSelf = sipSelf;

    {
        double a0;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bd", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, &a0))
        {
            float sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_FbxAnimCurveBase, sipName_EvaluateIndex);
                return NULL;
            }

            sipRes = sipCpp->EvaluateIndex(a0);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_EvaluateIndex, doc_FbxAnimCurveBase_EvaluateIndex);

    return NULL;
}


PyDoc_STRVAR(doc_FbxAnimCurveBase_GetTimeInterval, "GetTimeInterval(self, FbxTimeSpan) -> bool");

extern "C" {static PyObject *meth_FbxAnimCurveBase_GetTimeInterval(PyObject *, PyObject *);}
static PyObject *meth_FbxAnimCurveBase_GetTimeInterval(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxTimeSpan* a0;
         ::FbxAnimCurveBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxAnimCurveBase, &sipCpp, sipType_FbxTimeSpan, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxAnimCurveBase::GetTimeInterval(*a0) : sipCpp->GetTimeInterval(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxAnimCurveBase, sipName_GetTimeInterval, doc_FbxAnimCurveBase_GetTimeInterval);

    return NULL;
}


extern "C" {static PyObject *slot_FbxAnimCurveBase___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxAnimCurveBase___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxAnimCurveBase *sipCpp = reinterpret_cast< ::FbxAnimCurveBase *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxAnimCurveBase));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAnimCurveBase* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxAnimCurveBase, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxAnimCurveBase::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxAnimCurveBase, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxAnimCurveBase___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxAnimCurveBase___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxAnimCurveBase *sipCpp = reinterpret_cast< ::FbxAnimCurveBase *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxAnimCurveBase));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxAnimCurveBase* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxAnimCurveBase, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxAnimCurveBase::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxAnimCurveBase, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxAnimCurveBase(void *, const sipTypeDef *);}
static void *cast_FbxAnimCurveBase(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxAnimCurveBase *sipCpp = reinterpret_cast< ::FbxAnimCurveBase *>(sipCppV);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxAnimCurveBase(void *, int);}
static void release_FbxAnimCurveBase(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxAnimCurveBase[] = {{244, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxAnimCurveBase[] = {
    {(void *)slot_FbxAnimCurveBase___ne__, ne_slot},
    {(void *)slot_FbxAnimCurveBase___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxAnimCurveBase[] = {
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxAnimCurveBase_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_Create)},
    {SIP_MLNAME_CAST(sipName_Evaluate), meth_FbxAnimCurveBase_Evaluate, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_Evaluate)},
    {SIP_MLNAME_CAST(sipName_EvaluateIndex), meth_FbxAnimCurveBase_EvaluateIndex, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_EvaluateIndex)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxAnimCurveBase_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetPostExtrapolation), meth_FbxAnimCurveBase_GetPostExtrapolation, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_GetPostExtrapolation)},
    {SIP_MLNAME_CAST(sipName_GetPostExtrapolationCount), meth_FbxAnimCurveBase_GetPostExtrapolationCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_GetPostExtrapolationCount)},
    {SIP_MLNAME_CAST(sipName_GetPreExtrapolation), meth_FbxAnimCurveBase_GetPreExtrapolation, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_GetPreExtrapolation)},
    {SIP_MLNAME_CAST(sipName_GetPreExtrapolationCount), meth_FbxAnimCurveBase_GetPreExtrapolationCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_GetPreExtrapolationCount)},
    {SIP_MLNAME_CAST(sipName_GetTimeInterval), meth_FbxAnimCurveBase_GetTimeInterval, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_GetTimeInterval)},
    {SIP_MLNAME_CAST(sipName_KeyAdd), meth_FbxAnimCurveBase_KeyAdd, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_KeyAdd)},
    {SIP_MLNAME_CAST(sipName_KeyClear), meth_FbxAnimCurveBase_KeyClear, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_KeyClear)},
    {SIP_MLNAME_CAST(sipName_KeyGetCount), meth_FbxAnimCurveBase_KeyGetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_KeyGetCount)},
    {SIP_MLNAME_CAST(sipName_KeyGetTime), meth_FbxAnimCurveBase_KeyGetTime, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_KeyGetTime)},
    {SIP_MLNAME_CAST(sipName_KeyRemove), meth_FbxAnimCurveBase_KeyRemove, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_KeyRemove)},
    {SIP_MLNAME_CAST(sipName_KeySet), meth_FbxAnimCurveBase_KeySet, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_KeySet)},
    {SIP_MLNAME_CAST(sipName_KeySetTime), meth_FbxAnimCurveBase_KeySetTime, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_KeySetTime)},
    {SIP_MLNAME_CAST(sipName_SetPostExtrapolation), meth_FbxAnimCurveBase_SetPostExtrapolation, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_SetPostExtrapolation)},
    {SIP_MLNAME_CAST(sipName_SetPostExtrapolationCount), meth_FbxAnimCurveBase_SetPostExtrapolationCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_SetPostExtrapolationCount)},
    {SIP_MLNAME_CAST(sipName_SetPreExtrapolation), meth_FbxAnimCurveBase_SetPreExtrapolation, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_SetPreExtrapolation)},
    {SIP_MLNAME_CAST(sipName_SetPreExtrapolationCount), meth_FbxAnimCurveBase_SetPreExtrapolationCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxAnimCurveBase_SetPreExtrapolationCount)}
};

static sipEnumMemberDef enummembers_FbxAnimCurveBase[] = {
    {sipName_eConstant, static_cast<int>( ::FbxAnimCurveBase::eConstant), 8},
    {sipName_eKeepSlope, static_cast<int>( ::FbxAnimCurveBase::eKeepSlope), 8},
    {sipName_eMirrorRepetition, static_cast<int>( ::FbxAnimCurveBase::eMirrorRepetition), 8},
    {sipName_eRepetition, static_cast<int>( ::FbxAnimCurveBase::eRepetition), 8},
};


extern "C" {static PyObject *varget_FbxAnimCurveBase_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxAnimCurveBase_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxAnimCurveBase::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxAnimCurveBase_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxAnimCurveBase_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxAnimCurveBase::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxAnimCurveBase[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxAnimCurveBase_ClassId, (PyMethodDef *)varset_FbxAnimCurveBase_ClassId, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxAnimCurveBase = {
    {
        -1,
        0,
        0,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxAnimCurveBase,
        {0},
        0
    },
    {
        sipNameNr_FbxAnimCurveBase,
        {0, 0, 1},
        20, methods_FbxAnimCurveBase,
        4, enummembers_FbxAnimCurveBase,
        1, variables_FbxAnimCurveBase,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxAnimCurveBase,
    slots_FbxAnimCurveBase,
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
    0,
    0,
    0,
    0,
    release_FbxAnimCurveBase,
    cast_FbxAnimCurveBase,
    0,
    0,
    0,
    0,
    0,
    0
};