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
#line 44 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxIOBase.cpp"


PyDoc_STRVAR(doc_FbxIOBase_Create, "Create(FbxManager, str) -> FbxIOBase\n"
    "Create(FbxObject, str) -> FbxIOBase");

extern "C" {static PyObject *meth_FbxIOBase_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxIOBase_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxIOBase*sipRes;

            sipRes =  ::FbxIOBase::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxIOBase,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxIOBase*sipRes;

            sipRes =  ::FbxIOBase::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxIOBase,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxIOBase, sipName_Create, doc_FbxIOBase_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxIOBase_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxIOBase_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxIOBase_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxIOBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIOBase, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxIOBase::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxIOBase, sipName_GetClassId, doc_FbxIOBase_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxIOBase_Initialize, "Initialize(self, str, int = -1, FbxIOSettings = None) -> bool");

extern "C" {static PyObject *meth_FbxIOBase_Initialize(PyObject *, PyObject *);}
static PyObject *meth_FbxIOBase_Initialize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const char* a0;
        PyObject *a0Keep;
        int a1 = -1;
         ::FbxIOSettings* a2 = 0;
         ::FbxIOBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8|iJ8", &sipSelf, sipType_FbxIOBase, &sipCpp, &a0Keep, &a0, &a1, sipType_FbxIOSettings, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxIOBase::Initialize(a0,a1,a2) : sipCpp->Initialize(a0,a1,a2));
            Py_DECREF(a0Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxIOBase, sipName_Initialize, doc_FbxIOBase_Initialize);

    return NULL;
}


PyDoc_STRVAR(doc_FbxIOBase_GetFileName, "GetFileName(self) -> FbxString");

extern "C" {static PyObject *meth_FbxIOBase_GetFileName(PyObject *, PyObject *);}
static PyObject *meth_FbxIOBase_GetFileName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxIOBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIOBase, &sipCpp))
        {
             ::FbxString*sipRes;

            sipRes = new  ::FbxString((sipSelfWasArg ? sipCpp-> ::FbxIOBase::GetFileName() : sipCpp->GetFileName()));

            return sipConvertFromNewType(sipRes,sipType_FbxString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxIOBase, sipName_GetFileName, doc_FbxIOBase_GetFileName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxIOBase_GetStatus, "GetStatus(self) -> FbxStatus");

extern "C" {static PyObject *meth_FbxIOBase_GetStatus(PyObject *, PyObject *);}
static PyObject *meth_FbxIOBase_GetStatus(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxIOBase *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIOBase, &sipCpp))
        {
             ::FbxStatus*sipRes;

            sipRes = &sipCpp->GetStatus();

            return sipConvertFromType(sipRes,sipType_FbxStatus,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxIOBase, sipName_GetStatus, doc_FbxIOBase_GetStatus);

    return NULL;
}


extern "C" {static PyObject *slot_FbxIOBase___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxIOBase___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxIOBase *sipCpp = reinterpret_cast< ::FbxIOBase *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxIOBase));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxIOBase* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxIOBase, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxIOBase::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxIOBase, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxIOBase___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxIOBase___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxIOBase *sipCpp = reinterpret_cast< ::FbxIOBase *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxIOBase));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxIOBase* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxIOBase, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxIOBase::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxIOBase, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxIOBase(void *, const sipTypeDef *);}
static void *cast_FbxIOBase(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxIOBase *sipCpp = reinterpret_cast< ::FbxIOBase *>(sipCppV);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxIOBase(void *, int);}
static void release_FbxIOBase(void *, int)
{
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxIOBase[] = {{244, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxIOBase[] = {
    {(void *)slot_FbxIOBase___ne__, ne_slot},
    {(void *)slot_FbxIOBase___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxIOBase[] = {
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxIOBase_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxIOBase_Create)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxIOBase_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxIOBase_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetFileName), meth_FbxIOBase_GetFileName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxIOBase_GetFileName)},
    {SIP_MLNAME_CAST(sipName_GetStatus), meth_FbxIOBase_GetStatus, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxIOBase_GetStatus)},
    {SIP_MLNAME_CAST(sipName_Initialize), meth_FbxIOBase_Initialize, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxIOBase_Initialize)}
};


extern "C" {static PyObject *varget_FbxIOBase_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIOBase_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxIOBase::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxIOBase_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxIOBase_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxIOBase::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxIOBase[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxIOBase_ClassId, (PyMethodDef *)varset_FbxIOBase_ClassId, NULL, NULL},
};


sipClassTypeDef sipTypeDef_fbx_FbxIOBase = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxIOBase,
        {0},
        0
    },
    {
        sipNameNr_FbxIOBase,
        {0, 0, 1},
        5, methods_FbxIOBase,
        0, 0,
        1, variables_FbxIOBase,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    supers_FbxIOBase,
    slots_FbxIOBase,
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
    release_FbxIOBase,
    cast_FbxIOBase,
    0,
    0,
    0,
    0,
    0,
    0
};