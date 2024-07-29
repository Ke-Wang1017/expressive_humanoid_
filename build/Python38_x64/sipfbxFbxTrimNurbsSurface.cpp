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
#line 44 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxTrimNurbsSurface.cpp"


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_Create, "Create(FbxManager, str) -> FbxTrimNurbsSurface\n"
    "Create(FbxObject, str) -> FbxTrimNurbsSurface");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxTrimNurbsSurface*sipRes;

            sipRes =  ::FbxTrimNurbsSurface::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxTrimNurbsSurface,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxTrimNurbsSurface*sipRes;

            sipRes =  ::FbxTrimNurbsSurface::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxTrimNurbsSurface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_Create, doc_FbxTrimNurbsSurface_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxTrimNurbsSurface::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetClassId, doc_FbxTrimNurbsSurface_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetAttributeType, "GetAttributeType(self) -> FbxNodeAttribute.EType");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetAttributeType(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetAttributeType(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp))
        {
             ::FbxNodeAttribute::EType sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxTrimNurbsSurface::GetAttributeType() : sipCpp->GetAttributeType());

            return sipConvertFromEnum(sipRes,sipType_FbxNodeAttribute_EType);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetAttributeType, doc_FbxTrimNurbsSurface_GetAttributeType);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetTrimRegionCount, "GetTrimRegionCount(self) -> int");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetTrimRegionCount(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetTrimRegionCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetTrimRegionCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetTrimRegionCount, doc_FbxTrimNurbsSurface_GetTrimRegionCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_BeginTrimRegion, "BeginTrimRegion(self)");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_BeginTrimRegion(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_BeginTrimRegion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp))
        {
            sipCpp->BeginTrimRegion();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_BeginTrimRegion, doc_FbxTrimNurbsSurface_BeginTrimRegion);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_EndTrimRegion, "EndTrimRegion(self)");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_EndTrimRegion(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_EndTrimRegion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp))
        {
            sipCpp->EndTrimRegion();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_EndTrimRegion, doc_FbxTrimNurbsSurface_EndTrimRegion);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_AddBoundary, "AddBoundary(self, FbxBoundary) -> bool");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_AddBoundary(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_AddBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxBoundary* a0;
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp, sipType_FbxBoundary, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->AddBoundary(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_AddBoundary, doc_FbxTrimNurbsSurface_AddBoundary);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetBoundary, "GetBoundary(self, int, int = 0) -> FbxBoundary");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetBoundary(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetBoundary(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1 = 0;
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi|i", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp, &a0, &a1))
        {
             ::FbxBoundary*sipRes;

            sipRes = sipCpp->GetBoundary(a0,a1);

            return sipConvertFromType(sipRes,sipType_FbxBoundary,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetBoundary, doc_FbxTrimNurbsSurface_GetBoundary);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetBoundaryCount, "GetBoundaryCount(self, int = 0) -> int");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetBoundaryCount(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetBoundaryCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0 = 0;
        const  ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|i", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp, &a0))
        {
            int sipRes;

            sipRes = sipCpp->GetBoundaryCount(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetBoundaryCount, doc_FbxTrimNurbsSurface_GetBoundaryCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_SetNurbsSurface, "SetNurbsSurface(self, FbxNurbsSurface)");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_SetNurbsSurface(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_SetNurbsSurface(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxNurbsSurface* a0;
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp, sipType_FbxNurbsSurface, &a0))
        {
            sipCpp->SetNurbsSurface(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_SetNurbsSurface, doc_FbxTrimNurbsSurface_SetNurbsSurface);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetNurbsSurface, "GetNurbsSurface(self) -> FbxNurbsSurface");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetNurbsSurface(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetNurbsSurface(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp))
        {
             ::FbxNurbsSurface*sipRes;

            sipRes = sipCpp->GetNurbsSurface();

            return sipConvertFromType(sipRes,sipType_FbxNurbsSurface,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetNurbsSurface, doc_FbxTrimNurbsSurface_GetNurbsSurface);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_SetFlipNormals, "SetFlipNormals(self, bool)");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_SetFlipNormals(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_SetFlipNormals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp, &a0))
        {
            sipCpp->SetFlipNormals(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_SetFlipNormals, doc_FbxTrimNurbsSurface_SetFlipNormals);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetFlipNormals, "GetFlipNormals(self) -> bool");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetFlipNormals(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetFlipNormals(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->GetFlipNormals();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetFlipNormals, doc_FbxTrimNurbsSurface_GetFlipNormals);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetControlPointsCount, "GetControlPointsCount(self) -> int");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetControlPointsCount(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetControlPointsCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp))
        {
            int sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxTrimNurbsSurface::GetControlPointsCount() : sipCpp->GetControlPointsCount());

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetControlPointsCount, doc_FbxTrimNurbsSurface_GetControlPointsCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_SetControlPointAt, "SetControlPointAt(self, FbxVector4, FbxVector4, int, bool = False)\n"
    "SetControlPointAt(self, FbxVector4, int)");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_SetControlPointAt(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_SetControlPointAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxVector4* a0;
         ::FbxVector4* a1;
        int a2;
        bool a3 = 0;
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9J9i|b", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp, sipType_FbxVector4, &a0, sipType_FbxVector4, &a1, &a2, &a3))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxTrimNurbsSurface::SetControlPointAt(*a0,*a1,a2,a3) : sipCpp->SetControlPointAt(*a0,*a1,a2,a3));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    {
        const  ::FbxVector4* a0;
        int a1;
         ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9i", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp, sipType_FbxVector4, &a0, &a1))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxTrimNurbsSurface::SetControlPointAt(*a0,a1) : sipCpp->SetControlPointAt(*a0,a1));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_SetControlPointAt, doc_FbxTrimNurbsSurface_SetControlPointAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxTrimNurbsSurface_GetControlPoints, "GetControlPoints(self, FbxStatus = None) -> FbxVector4");

extern "C" {static PyObject *meth_FbxTrimNurbsSurface_GetControlPoints(PyObject *, PyObject *);}
static PyObject *meth_FbxTrimNurbsSurface_GetControlPoints(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxStatus* a0 = 0;
        const  ::FbxTrimNurbsSurface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|J8", &sipSelf, sipType_FbxTrimNurbsSurface, &sipCpp, sipType_FbxStatus, &a0))
        {
             ::FbxVector4*sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxTrimNurbsSurface::GetControlPoints(a0) : sipCpp->GetControlPoints(a0));

            return sipConvertFromType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxTrimNurbsSurface, sipName_GetControlPoints, doc_FbxTrimNurbsSurface_GetControlPoints);

    return NULL;
}


extern "C" {static PyObject *slot_FbxTrimNurbsSurface___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxTrimNurbsSurface___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxTrimNurbsSurface *sipCpp = reinterpret_cast< ::FbxTrimNurbsSurface *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxTrimNurbsSurface));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxTrimNurbsSurface* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxTrimNurbsSurface, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxTrimNurbsSurface::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxTrimNurbsSurface, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxTrimNurbsSurface___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxTrimNurbsSurface___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxTrimNurbsSurface *sipCpp = reinterpret_cast< ::FbxTrimNurbsSurface *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxTrimNurbsSurface));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxTrimNurbsSurface* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxTrimNurbsSurface, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxTrimNurbsSurface::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxTrimNurbsSurface, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxTrimNurbsSurface(void *, const sipTypeDef *);}
static void *cast_FbxTrimNurbsSurface(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxTrimNurbsSurface *sipCpp = reinterpret_cast< ::FbxTrimNurbsSurface *>(sipCppV);

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
extern "C" {static void release_FbxTrimNurbsSurface(void *, int);}
static void release_FbxTrimNurbsSurface(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxTrimNurbsSurface[] = {{147, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxTrimNurbsSurface[] = {
    {(void *)slot_FbxTrimNurbsSurface___ne__, ne_slot},
    {(void *)slot_FbxTrimNurbsSurface___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxTrimNurbsSurface[] = {
    {SIP_MLNAME_CAST(sipName_AddBoundary), meth_FbxTrimNurbsSurface_AddBoundary, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_AddBoundary)},
    {SIP_MLNAME_CAST(sipName_BeginTrimRegion), meth_FbxTrimNurbsSurface_BeginTrimRegion, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_BeginTrimRegion)},
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxTrimNurbsSurface_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_Create)},
    {SIP_MLNAME_CAST(sipName_EndTrimRegion), meth_FbxTrimNurbsSurface_EndTrimRegion, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_EndTrimRegion)},
    {SIP_MLNAME_CAST(sipName_GetAttributeType), meth_FbxTrimNurbsSurface_GetAttributeType, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetAttributeType)},
    {SIP_MLNAME_CAST(sipName_GetBoundary), meth_FbxTrimNurbsSurface_GetBoundary, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetBoundary)},
    {SIP_MLNAME_CAST(sipName_GetBoundaryCount), meth_FbxTrimNurbsSurface_GetBoundaryCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetBoundaryCount)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxTrimNurbsSurface_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetControlPoints), meth_FbxTrimNurbsSurface_GetControlPoints, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetControlPoints)},
    {SIP_MLNAME_CAST(sipName_GetControlPointsCount), meth_FbxTrimNurbsSurface_GetControlPointsCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetControlPointsCount)},
    {SIP_MLNAME_CAST(sipName_GetFlipNormals), meth_FbxTrimNurbsSurface_GetFlipNormals, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetFlipNormals)},
    {SIP_MLNAME_CAST(sipName_GetNurbsSurface), meth_FbxTrimNurbsSurface_GetNurbsSurface, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetNurbsSurface)},
    {SIP_MLNAME_CAST(sipName_GetTrimRegionCount), meth_FbxTrimNurbsSurface_GetTrimRegionCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_GetTrimRegionCount)},
    {SIP_MLNAME_CAST(sipName_SetControlPointAt), meth_FbxTrimNurbsSurface_SetControlPointAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_SetControlPointAt)},
    {SIP_MLNAME_CAST(sipName_SetFlipNormals), meth_FbxTrimNurbsSurface_SetFlipNormals, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_SetFlipNormals)},
    {SIP_MLNAME_CAST(sipName_SetNurbsSurface), meth_FbxTrimNurbsSurface_SetNurbsSurface, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxTrimNurbsSurface_SetNurbsSurface)}
};


extern "C" {static PyObject *varget_FbxTrimNurbsSurface_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxTrimNurbsSurface_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxTrimNurbsSurface::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxTrimNurbsSurface_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxTrimNurbsSurface_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxTrimNurbsSurface::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxTrimNurbsSurface[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxTrimNurbsSurface_ClassId, (PyMethodDef *)varset_FbxTrimNurbsSurface_ClassId, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxTrimNurbsSurface = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxTrimNurbsSurface,
        {0},
        0
    },
    {
        sipNameNr_FbxTrimNurbsSurface,
        {0, 0, 1},
        16, methods_FbxTrimNurbsSurface,
        0, 0,
        1, variables_FbxTrimNurbsSurface,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxTrimNurbsSurface,
    slots_FbxTrimNurbsSurface,
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
    release_FbxTrimNurbsSurface,
    cast_FbxTrimNurbsSurface,
    0,
    0,
    0,
    0,
    0,
    0
};