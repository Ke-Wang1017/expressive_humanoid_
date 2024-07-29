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


#line 4 "/home/ke/Documents/expressive-humanoid/sip/fbxstatus.sip"
#include <fbxsdk.h>
#line 44 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxNurbs.cpp"


PyDoc_STRVAR(doc_FbxNurbs_Create, "Create(FbxManager, str) -> FbxNurbs\n"
    "Create(FbxObject, str) -> FbxNurbs");

extern "C" {static PyObject *meth_FbxNurbs_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxNurbs*sipRes;

            sipRes =  ::FbxNurbs::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxNurbs,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxNurbs*sipRes;

            sipRes =  ::FbxNurbs::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxNurbs,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_Create, doc_FbxNurbs_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxNurbs_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxNurbs::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetClassId, doc_FbxNurbs_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetAttributeType, "GetAttributeType(self) -> FbxNodeAttribute.EType");

extern "C" {static PyObject *meth_FbxNurbs_GetAttributeType(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetAttributeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
             ::FbxNodeAttribute::EType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxNurbs::GetAttributeType() : sipCpp->GetAttributeType());

            return sipConvertFromEnum(sipRes,sipType_FbxNodeAttribute_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetAttributeType, doc_FbxNurbs_GetAttributeType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxNurbs_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            sipCpp->Reset();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_Reset, doc_FbxNurbs_Reset);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_SetSurfaceMode, "SetSurfaceMode(self, FbxGeometry.ESurfaceMode)");

extern "C" {static PyObject *meth_FbxNurbs_SetSurfaceMode(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_SetSurfaceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxGeometry::ESurfaceMode a0;
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxNurbs, &sipCpp, sipType_FbxGeometry_ESurfaceMode, &a0))
        {
            sipCpp->SetSurfaceMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_SetSurfaceMode, doc_FbxNurbs_SetSurfaceMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetSurfaceMode, "GetSurfaceMode(self) -> FbxGeometry.ESurfaceMode");

extern "C" {static PyObject *meth_FbxNurbs_GetSurfaceMode(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetSurfaceMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
             ::FbxGeometry::ESurfaceMode sipRes;

            sipRes = sipCpp->GetSurfaceMode();

            return sipConvertFromEnum(sipRes,sipType_FbxGeometry_ESurfaceMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetSurfaceMode, doc_FbxNurbs_GetSurfaceMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_InitControlPoints, "InitControlPoints(self, int, FbxNurbs.EType, int, FbxNurbs.EType)");

extern "C" {static PyObject *meth_FbxNurbs_InitControlPoints(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_InitControlPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxNurbs::EType a1;
        int a2;
         ::FbxNurbs::EType a3;
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiEiE", &sipSelf, sipType_FbxNurbs, &sipCpp, &a0, sipType_FbxNurbs_EType, &a1, &a2, sipType_FbxNurbs_EType, &a3))
        {
            sipCpp->InitControlPoints(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_InitControlPoints, doc_FbxNurbs_InitControlPoints);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetUCount, "GetUCount(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetUCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetUCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetUCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetUCount, doc_FbxNurbs_GetUCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetVCount, "GetVCount(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetVCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetVCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetVCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetVCount, doc_FbxNurbs_GetVCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetNurbsUType, "GetNurbsUType(self) -> FbxNurbs.EType");

extern "C" {static PyObject *meth_FbxNurbs_GetNurbsUType(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetNurbsUType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
             ::FbxNurbs::EType sipRes;

            sipRes = sipCpp->GetNurbsUType();

            return sipConvertFromEnum(sipRes,sipType_FbxNurbs_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetNurbsUType, doc_FbxNurbs_GetNurbsUType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetNurbsVType, "GetNurbsVType(self) -> FbxNurbs.EType");

extern "C" {static PyObject *meth_FbxNurbs_GetNurbsVType(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetNurbsVType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
             ::FbxNurbs::EType sipRes;

            sipRes = sipCpp->GetNurbsVType();

            return sipConvertFromEnum(sipRes,sipType_FbxNurbs_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetNurbsVType, doc_FbxNurbs_GetNurbsVType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetUKnotCount, "GetUKnotCount(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetUKnotCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetUKnotCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetUKnotCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetUKnotCount, doc_FbxNurbs_GetUKnotCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetUKnotVector, "GetUKnotVector(self) -> List");

extern "C" {static PyObject *meth_FbxNurbs_GetUKnotVector(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetUKnotVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 34 "/home/ke/Documents/expressive-humanoid/sip/fbxnurb.sip"
        double* uknots;
        int ukonts_count;
    
        uknots = sipCpp->GetUKnotVector();
        ukonts_count = sipCpp->GetUKnotCount();
    
        // Create the Python list of the correct length.
        if ((sipRes = PyList_New(ukonts_count)) == NULL)
            return NULL;
    
        // Go through each element in the C++ instance and convert it to the
        // corresponding Python object.
        for (int i = 0; i < ukonts_count; ++i)
        {
            PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*uknots));
            uknots++;
        }
#line 441 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxNurbs.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetUKnotVector, doc_FbxNurbs_GetUKnotVector);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_SetUKnotVector, "SetUKnotVector(self, List)");

extern "C" {static PyObject *meth_FbxNurbs_SetUKnotVector(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_SetUKnotVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BT", &sipSelf, sipType_FbxNurbs, &sipCpp, &PyList_Type, &a0))
        {
#line 54 "/home/ke/Documents/expressive-humanoid/sip/fbxnurb.sip"
        double* uknots = sipCpp->GetUKnotVector();
        int ukonts_count = sipCpp->GetUKnotCount();
        
        for (int i = 0; i < ukonts_count; ++i)
        {
            *uknots = PyFloat_AsDouble(PyList_GET_ITEM(a0, i));
            uknots++;
        }
#line 477 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxNurbs.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_SetUKnotVector, doc_FbxNurbs_SetUKnotVector);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetVKnotCount, "GetVKnotCount(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetVKnotCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetVKnotCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetVKnotCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetVKnotCount, doc_FbxNurbs_GetVKnotCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetVKnotVector, "GetVKnotVector(self) -> List");

extern "C" {static PyObject *meth_FbxNurbs_GetVKnotVector(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetVKnotVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 67 "/home/ke/Documents/expressive-humanoid/sip/fbxnurb.sip"
        double * vknots = sipCpp->GetVKnotVector();
        int vkonts_count = sipCpp->GetVKnotCount();
    
        // Create the Python list of the correct length.
        if ((sipRes = PyList_New(vkonts_count)) == NULL)
            return NULL;
    
        // Go through each element in the C++ instance and convert it to the
        // corresponding Python object.
        for (int i = 0; i < vkonts_count; ++i)
        {
            PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*vknots));
            vknots++;
        }
#line 549 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxNurbs.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetVKnotVector, doc_FbxNurbs_GetVKnotVector);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_SetVKnotVector, "SetVKnotVector(self, List)");

extern "C" {static PyObject *meth_FbxNurbs_SetVKnotVector(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_SetVKnotVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        PyObject * a0;
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BT", &sipSelf, sipType_FbxNurbs, &sipCpp, &PyList_Type, &a0))
        {
#line 84 "/home/ke/Documents/expressive-humanoid/sip/fbxnurb.sip"
        double* vknots;
        int vkonts_count;
    
        vknots = sipCpp->GetVKnotVector();
        vkonts_count = sipCpp->GetVKnotCount();
        
        for (int i = 0; i < vkonts_count; ++i)
        {
            *vknots = PyFloat_AsDouble(PyList_GET_ITEM(a0, i));
            vknots++;
        }
#line 588 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxNurbs.cpp"

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_SetVKnotVector, doc_FbxNurbs_SetVKnotVector);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetUMultiplicityVector, "GetUMultiplicityVector(self) -> List");

extern "C" {static PyObject *meth_FbxNurbs_GetUMultiplicityVector(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetUMultiplicityVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 99 "/home/ke/Documents/expressive-humanoid/sip/fbxnurb.sip"
    int * vector = sipCpp->GetUMultiplicityVector();
    int count = sipCpp->GetUCount();

    if ((sipRes = PyList_New(count)) == NULL)
        return NULL;

    for (int i = 0; i < count; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*vector));
        vector++;
    }
#line 629 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxNurbs.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetUMultiplicityVector, doc_FbxNurbs_GetUMultiplicityVector);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetVMultiplicityVector, "GetVMultiplicityVector(self) -> List");

extern "C" {static PyObject *meth_FbxNurbs_GetVMultiplicityVector(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetVMultiplicityVector(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            PyObject * sipRes = 0;

#line 113 "/home/ke/Documents/expressive-humanoid/sip/fbxnurb.sip"
    int * vector = sipCpp->GetVMultiplicityVector();
    int count = sipCpp->GetVCount();

    if ((sipRes = PyList_New(count)) == NULL)
        return NULL;

    for (int i = 0; i < count; ++i)
    {
        PyList_SET_ITEM(sipRes, i, PyFloat_FromDouble(*vector));
        vector++;
    }
#line 669 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxNurbs.cpp"

            return sipRes;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetVMultiplicityVector, doc_FbxNurbs_GetVMultiplicityVector);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_SetOrder, "SetOrder(self, int, int)");

extern "C" {static PyObject *meth_FbxNurbs_SetOrder(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_SetOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxUInt32 a0;
         ::FbxUInt32 a1;
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Buu", &sipSelf, sipType_FbxNurbs, &sipCpp, &a0, &a1))
        {
            sipCpp->SetOrder(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_SetOrder, doc_FbxNurbs_SetOrder);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetUOrder, "GetUOrder(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetUOrder(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetUOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetUOrder();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetUOrder, doc_FbxNurbs_GetUOrder);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetVOrder, "GetVOrder(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetVOrder(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetVOrder(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetVOrder();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetVOrder, doc_FbxNurbs_GetVOrder);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_SetStep, "SetStep(self, int, int)");

extern "C" {static PyObject *meth_FbxNurbs_SetStep(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_SetStep(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bii", &sipSelf, sipType_FbxNurbs, &sipCpp, &a0, &a1))
        {
            sipCpp->SetStep(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_SetStep, doc_FbxNurbs_SetStep);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetUStep, "GetUStep(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetUStep(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetUStep(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetUStep();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetUStep, doc_FbxNurbs_GetUStep);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetVStep, "GetVStep(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetVStep(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetVStep(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetVStep();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetVStep, doc_FbxNurbs_GetVStep);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetUSpanCount, "GetUSpanCount(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetUSpanCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetUSpanCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetUSpanCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetUSpanCount, doc_FbxNurbs_GetUSpanCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetVSpanCount, "GetVSpanCount(self) -> int");

extern "C" {static PyObject *meth_FbxNurbs_GetVSpanCount(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetVSpanCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetVSpanCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetVSpanCount, doc_FbxNurbs_GetVSpanCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_SetApplyFlipUV, "SetApplyFlipUV(self, bool)");

extern "C" {static PyObject *meth_FbxNurbs_SetApplyFlipUV(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_SetApplyFlipUV(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxNurbs, &sipCpp, &a0))
        {
            sipCpp->SetApplyFlipUV(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_SetApplyFlipUV, doc_FbxNurbs_SetApplyFlipUV);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetApplyFlipUV, "GetApplyFlipUV(self) -> bool");

extern "C" {static PyObject *meth_FbxNurbs_GetApplyFlipUV(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetApplyFlipUV(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetApplyFlipUV();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetApplyFlipUV, doc_FbxNurbs_GetApplyFlipUV);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_SetApplyFlipLinks, "SetApplyFlipLinks(self, bool)");

extern "C" {static PyObject *meth_FbxNurbs_SetApplyFlipLinks(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_SetApplyFlipLinks(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxNurbs, &sipCpp, &a0))
        {
            sipCpp->SetApplyFlipLinks(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_SetApplyFlipLinks, doc_FbxNurbs_SetApplyFlipLinks);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetApplyFlipLinks, "GetApplyFlipLinks(self) -> bool");

extern "C" {static PyObject *meth_FbxNurbs_GetApplyFlipLinks(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetApplyFlipLinks(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetApplyFlipLinks();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetApplyFlipLinks, doc_FbxNurbs_GetApplyFlipLinks);

    return NULL;
}


PyDoc_STRVAR(doc_FbxNurbs_GetApplyFlip, "GetApplyFlip(self) -> bool");

extern "C" {static PyObject *meth_FbxNurbs_GetApplyFlip(PyObject *, PyObject *);}
static PyObject *meth_FbxNurbs_GetApplyFlip(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxNurbs, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetApplyFlip();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxNurbs, sipName_GetApplyFlip, doc_FbxNurbs_GetApplyFlip);

    return NULL;
}


extern "C" {static PyObject *slot_FbxNurbs___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxNurbs___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxNurbs *sipCpp = reinterpret_cast< ::FbxNurbs *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxNurbs));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxNurbs, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxNurbs::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxNurbs, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxNurbs___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxNurbs___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxNurbs *sipCpp = reinterpret_cast< ::FbxNurbs *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxNurbs));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbs* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxNurbs, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxNurbs::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxNurbs, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxNurbs(void *, const sipTypeDef *);}
static void *cast_FbxNurbs(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxNurbs *sipCpp = reinterpret_cast< ::FbxNurbs *>(sipCppV);

    if (targetType == sipType_FbxGeometry)
        return static_cast< ::FbxGeometry *>(sipCpp);

    if (targetType == sipType_FbxGeometryBase)
        return static_cast< ::FbxGeometryBase *>(sipCpp);

    if (targetType == sipType_FbxLayerContainer)
        return static_cast< ::FbxLayerContainer *>(sipCpp);

    if (targetType == sipType_FbxNodeAttribute)
        return static_cast< ::FbxNodeAttribute *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxNurbs(void *, int);}
static void release_FbxNurbs(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxNurbs[] = {{147, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxNurbs[] = {
    {(void *)slot_FbxNurbs___ne__, ne_slot},
    {(void *)slot_FbxNurbs___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxNurbs[] = {
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxNurbs_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_Create)},
    {SIP_MLNAME_CAST(sipName_GetApplyFlip), meth_FbxNurbs_GetApplyFlip, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetApplyFlip)},
    {SIP_MLNAME_CAST(sipName_GetApplyFlipLinks), meth_FbxNurbs_GetApplyFlipLinks, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetApplyFlipLinks)},
    {SIP_MLNAME_CAST(sipName_GetApplyFlipUV), meth_FbxNurbs_GetApplyFlipUV, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetApplyFlipUV)},
    {SIP_MLNAME_CAST(sipName_GetAttributeType), meth_FbxNurbs_GetAttributeType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetAttributeType)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxNurbs_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetNurbsUType), meth_FbxNurbs_GetNurbsUType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetNurbsUType)},
    {SIP_MLNAME_CAST(sipName_GetNurbsVType), meth_FbxNurbs_GetNurbsVType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetNurbsVType)},
    {SIP_MLNAME_CAST(sipName_GetSurfaceMode), meth_FbxNurbs_GetSurfaceMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetSurfaceMode)},
    {SIP_MLNAME_CAST(sipName_GetUCount), meth_FbxNurbs_GetUCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetUCount)},
    {SIP_MLNAME_CAST(sipName_GetUKnotCount), meth_FbxNurbs_GetUKnotCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetUKnotCount)},
    {SIP_MLNAME_CAST(sipName_GetUKnotVector), meth_FbxNurbs_GetUKnotVector, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetUKnotVector)},
    {SIP_MLNAME_CAST(sipName_GetUMultiplicityVector), meth_FbxNurbs_GetUMultiplicityVector, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetUMultiplicityVector)},
    {SIP_MLNAME_CAST(sipName_GetUOrder), meth_FbxNurbs_GetUOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetUOrder)},
    {SIP_MLNAME_CAST(sipName_GetUSpanCount), meth_FbxNurbs_GetUSpanCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetUSpanCount)},
    {SIP_MLNAME_CAST(sipName_GetUStep), meth_FbxNurbs_GetUStep, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetUStep)},
    {SIP_MLNAME_CAST(sipName_GetVCount), meth_FbxNurbs_GetVCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetVCount)},
    {SIP_MLNAME_CAST(sipName_GetVKnotCount), meth_FbxNurbs_GetVKnotCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetVKnotCount)},
    {SIP_MLNAME_CAST(sipName_GetVKnotVector), meth_FbxNurbs_GetVKnotVector, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetVKnotVector)},
    {SIP_MLNAME_CAST(sipName_GetVMultiplicityVector), meth_FbxNurbs_GetVMultiplicityVector, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetVMultiplicityVector)},
    {SIP_MLNAME_CAST(sipName_GetVOrder), meth_FbxNurbs_GetVOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetVOrder)},
    {SIP_MLNAME_CAST(sipName_GetVSpanCount), meth_FbxNurbs_GetVSpanCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetVSpanCount)},
    {SIP_MLNAME_CAST(sipName_GetVStep), meth_FbxNurbs_GetVStep, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_GetVStep)},
    {SIP_MLNAME_CAST(sipName_InitControlPoints), meth_FbxNurbs_InitControlPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_InitControlPoints)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_FbxNurbs_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_Reset)},
    {SIP_MLNAME_CAST(sipName_SetApplyFlipLinks), meth_FbxNurbs_SetApplyFlipLinks, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_SetApplyFlipLinks)},
    {SIP_MLNAME_CAST(sipName_SetApplyFlipUV), meth_FbxNurbs_SetApplyFlipUV, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_SetApplyFlipUV)},
    {SIP_MLNAME_CAST(sipName_SetOrder), meth_FbxNurbs_SetOrder, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_SetOrder)},
    {SIP_MLNAME_CAST(sipName_SetStep), meth_FbxNurbs_SetStep, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_SetStep)},
    {SIP_MLNAME_CAST(sipName_SetSurfaceMode), meth_FbxNurbs_SetSurfaceMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_SetSurfaceMode)},
    {SIP_MLNAME_CAST(sipName_SetUKnotVector), meth_FbxNurbs_SetUKnotVector, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_SetUKnotVector)},
    {SIP_MLNAME_CAST(sipName_SetVKnotVector), meth_FbxNurbs_SetVKnotVector, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxNurbs_SetVKnotVector)}
};

static sipEnumMemberDef enummembers_FbxNurbs[] = {
    {sipName_eClosed, static_cast<int>( ::FbxNurbs::eClosed), 238},
    {sipName_eOpen, static_cast<int>( ::FbxNurbs::eOpen), 238},
    {sipName_ePeriodic, static_cast<int>( ::FbxNurbs::ePeriodic), 238},
};


extern "C" {static PyObject *varget_FbxNurbs_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxNurbs_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxNurbs::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxNurbs_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxNurbs_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxNurbs::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxNurbs[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxNurbs_ClassId, (PyMethodDef *)varset_FbxNurbs_ClassId, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxNurbs = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxNurbs,
        {0},
        0
    },
    {
        sipNameNr_FbxNurbs,
        {0, 0, 1},
        32, methods_FbxNurbs,
        3, enummembers_FbxNurbs,
        1, variables_FbxNurbs,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxNurbs,
    slots_FbxNurbs,
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
    release_FbxNurbs,
    cast_FbxNurbs,
    0,
    0,
    0,
    0,
    0,
    0
};