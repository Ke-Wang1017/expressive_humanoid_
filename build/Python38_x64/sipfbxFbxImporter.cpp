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
#line 44 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxImporter.cpp"


class sipFbxImporter : public  ::FbxImporter
{
public:
    sipFbxImporter( ::FbxManager&,const char*);
    virtual ~sipFbxImporter();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::FbxStringList GetTypeFlags() const;
    const char* GetTypeName() const;
    bool SetUrl(char*);
     ::FbxString GetUrl() const;
    const char* Localize(const char*,const char*) const;
    void SetSelected(bool);
    bool GetSelected();
     ::FbxObject* Clone( ::FbxObject::ECloneType, ::FbxObject*) const;
     ::FbxClassId GetClassId() const;
    bool Initialize(const char*,int, ::FbxIOSettings*);
     ::FbxString GetFileName();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxImporter(const sipFbxImporter &);
    sipFbxImporter &operator = (const sipFbxImporter &);

    char sipPyMethods[11];
};

sipFbxImporter::sipFbxImporter( ::FbxManager& a0,const char*a1):  ::FbxImporter(a0,a1), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxImporter::~sipFbxImporter()
{
    sipInstanceDestroyed(sipPySelf);
}

 ::FbxStringList sipFbxImporter::GetTypeFlags() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[0]),sipPySelf,NULL,sipName_GetTypeFlags);

    if (!sipMeth)
        return  ::FbxImporter::GetTypeFlags();

    extern  ::FbxStringList sipVH_fbx_38(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_38(sipGILState, 0, sipPySelf, sipMeth);
}

const char* sipFbxImporter::GetTypeName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[1]),sipPySelf,NULL,sipName_GetTypeName);

    if (!sipMeth)
        return  ::FbxImporter::GetTypeName();

    extern const char* sipVH_fbx_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, int);

    return sipVH_fbx_27(sipGILState, 0, sipPySelf, sipMeth, -48);
}

bool sipFbxImporter::SetUrl(char*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[2],sipPySelf,NULL,sipName_SetUrl);

    if (!sipMeth)
        return  ::FbxImporter::SetUrl(a0);

    extern bool sipVH_fbx_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, char*);

    return sipVH_fbx_16(sipGILState, 0, sipPySelf, sipMeth, a0);
}

 ::FbxString sipFbxImporter::GetUrl() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[3]),sipPySelf,NULL,sipName_GetUrl);

    if (!sipMeth)
        return  ::FbxImporter::GetUrl();

    extern  ::FbxString sipVH_fbx_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_37(sipGILState, 0, sipPySelf, sipMeth);
}

const char* sipFbxImporter::Localize(const char*a0,const char*a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[4]),sipPySelf,NULL,sipName_Localize);

    if (!sipMeth)
        return  ::FbxImporter::Localize(a0,a1);

    extern const char* sipVH_fbx_36(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*,const char*, int);

    return sipVH_fbx_36(sipGILState, 0, sipPySelf, sipMeth, a0, a1, -49);
}

void sipFbxImporter::SetSelected(bool a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[5],sipPySelf,NULL,sipName_SetSelected);

    if (!sipMeth)
    {
         ::FbxImporter::SetSelected(a0);
        return;
    }

    extern void sipVH_fbx_35(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, bool);

    sipVH_fbx_35(sipGILState, 0, sipPySelf, sipMeth, a0);
}

bool sipFbxImporter::GetSelected()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[6],sipPySelf,NULL,sipName_GetSelected);

    if (!sipMeth)
        return  ::FbxImporter::GetSelected();

    extern bool sipVH_fbx_17(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_17(sipGILState, 0, sipPySelf, sipMeth);
}

 ::FbxObject* sipFbxImporter::Clone( ::FbxObject::ECloneType a0, ::FbxObject*a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[7]),sipPySelf,NULL,sipName_Clone);

    if (!sipMeth)
        return  ::FbxImporter::Clone(a0,a1);

    extern  ::FbxObject* sipVH_fbx_34(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxObject::ECloneType, ::FbxObject*);

    return sipVH_fbx_34(sipGILState, 0, sipPySelf, sipMeth, a0, a1);
}

 ::FbxClassId sipFbxImporter::GetClassId() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,const_cast<char *>(&sipPyMethods[8]),sipPySelf,NULL,sipName_GetClassId);

    if (!sipMeth)
        return  ::FbxImporter::GetClassId();

    extern  ::FbxClassId sipVH_fbx_33(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_33(sipGILState, 0, sipPySelf, sipMeth);
}

bool sipFbxImporter::Initialize(const char*a0,int a1, ::FbxIOSettings*a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[9],sipPySelf,NULL,sipName_Initialize);

    if (!sipMeth)
        return  ::FbxImporter::Initialize(a0,a1,a2);

    extern bool sipVH_fbx_74(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const char*,int, ::FbxIOSettings*);

    return sipVH_fbx_74(sipGILState, 0, sipPySelf, sipMeth, a0, a1, a2);
}

 ::FbxString sipFbxImporter::GetFileName()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[10],sipPySelf,NULL,sipName_GetFileName);

    if (!sipMeth)
        return  ::FbxImporter::GetFileName();

    extern  ::FbxString sipVH_fbx_37(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_fbx_37(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxImporter_Create, "Create(FbxManager, str) -> FbxImporter\n"
    "Create(FbxObject, str) -> FbxImporter");

extern "C" {static PyObject *meth_FbxImporter_Create(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_Create(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
             ::FbxImporter*sipRes;

            sipRes =  ::FbxImporter::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxImporter,NULL);
        }
    }

    {
         ::FbxObject* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseArgs(&sipParseErr, sipArgs, "J8A8", sipType_FbxObject, &a0, &a1Keep, &a1))
        {
             ::FbxImporter*sipRes;

            sipRes =  ::FbxImporter::Create(a0,a1);
            Py_DECREF(a1Keep);

            return sipConvertFromType(sipRes,sipType_FbxImporter,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_Create, doc_FbxImporter_Create);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetClassId, "GetClassId(self) -> FbxClassId");

extern "C" {static PyObject *meth_FbxImporter_GetClassId(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetClassId(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
             ::FbxClassId*sipRes;

            sipRes = new  ::FbxClassId((sipSelfWasArg ? sipCpp-> ::FbxImporter::GetClassId() : sipCpp->GetClassId()));

            return sipConvertFromNewType(sipRes,sipType_FbxClassId,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetClassId, doc_FbxImporter_GetClassId);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_Initialize, "Initialize(self, str, int = -1, FbxIOSettings = None) -> bool");

extern "C" {static PyObject *meth_FbxImporter_Initialize(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_Initialize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const char* a0;
        PyObject *a0Keep;
        int a1 = -1;
         ::FbxIOSettings* a2 = 0;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8|iJ8", &sipSelf, sipType_FbxImporter, &sipCpp, &a0Keep, &a0, &a1, sipType_FbxIOSettings, &a2))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxImporter::Initialize(a0,a1,a2) : sipCpp->Initialize(a0,a1,a2));
            Py_DECREF(a0Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_Initialize, doc_FbxImporter_Initialize);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetFileVersion, "GetFileVersion(self) -> Tuple[int, int, int]");

extern "C" {static PyObject *meth_FbxImporter_GetFileVersion(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetFileVersion(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        int a1;
        int a2;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
            sipCpp->GetFileVersion(a0,a1,a2);

            return sipBuildResult(0,"(iii)",a0,a1,a2);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetFileVersion, doc_FbxImporter_GetFileVersion);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetDefaultRenderResolution, "GetDefaultRenderResolution(self, FbxString, FbxString) -> Tuple[bool, float, float]");

extern "C" {static PyObject *meth_FbxImporter_GetDefaultRenderResolution(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetDefaultRenderResolution(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxString* a0;
        int a0State = 0;
         ::FbxString* a1;
        int a1State = 0;
        double a2;
        double a3;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_FbxImporter, &sipCpp, sipType_FbxString, &a0, &a0State, sipType_FbxString, &a1, &a1State))
        {
            bool sipRes;

            sipRes = sipCpp->GetDefaultRenderResolution(*a0,*a1,a2,a3);
            sipReleaseType(a0,sipType_FbxString,a0State);
            sipReleaseType(a1,sipType_FbxString,a1State);

            return sipBuildResult(0,"(bdd)",sipRes,a2,a3);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetDefaultRenderResolution, doc_FbxImporter_GetDefaultRenderResolution);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetFileHeaderInfo, "GetFileHeaderInfo(self) -> FbxIOFileHeaderInfo");

extern "C" {static PyObject *meth_FbxImporter_GetFileHeaderInfo(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetFileHeaderInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
             ::FbxIOFileHeaderInfo*sipRes;

            sipRes = sipCpp->GetFileHeaderInfo();

            return sipConvertFromType(sipRes,sipType_FbxIOFileHeaderInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetFileHeaderInfo, doc_FbxImporter_GetFileHeaderInfo);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetImportOptions, "GetImportOptions(self, FbxImporter.EStreamOptionsGeneration = FbxImporter.eParseFile) -> bool\n"
    "GetImportOptions(self, FbxIO) -> bool");

extern "C" {static PyObject *meth_FbxImporter_GetImportOptions(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetImportOptions(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxImporter::EStreamOptionsGeneration a0 =  ::FbxImporter::eParseFile;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B|E", &sipSelf, sipType_FbxImporter, &sipCpp, sipType_FbxImporter_EStreamOptionsGeneration, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->GetImportOptions(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    {
         ::FbxIO* a0;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxImporter, &sipCpp, sipType_FbxIO, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->GetImportOptions(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetImportOptions, doc_FbxImporter_GetImportOptions);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_Import, "Import(self, FbxDocument, bool = False) -> bool");

extern "C" {static PyObject *meth_FbxImporter_Import(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_Import(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxDocument* a0;
        bool a1 = 0;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8|b", &sipSelf, sipType_FbxImporter, &sipCpp, sipType_FbxDocument, &a0, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->Import(a0,a1);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_Import, doc_FbxImporter_Import);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_IsImporting, "IsImporting(self) -> Tuple[bool, bool]");

extern "C" {static PyObject *meth_FbxImporter_IsImporting(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_IsImporting(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        bool a0;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsImporting(a0);

            return sipBuildResult(0,"(bb)",sipRes,a0);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_IsImporting, doc_FbxImporter_IsImporting);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetIOSettings, "GetIOSettings(self) -> FbxIOSettings");

extern "C" {static PyObject *meth_FbxImporter_GetIOSettings(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetIOSettings(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
             ::FbxIOSettings*sipRes;

            sipRes = sipCpp->GetIOSettings();

            return sipConvertFromType(sipRes,sipType_FbxIOSettings,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetIOSettings, doc_FbxImporter_GetIOSettings);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_SetIOSettings, "SetIOSettings(self, FbxIOSettings)");

extern "C" {static PyObject *meth_FbxImporter_SetIOSettings(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_SetIOSettings(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxIOSettings* a0;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxImporter, &sipCpp, sipType_FbxIOSettings, &a0))
        {
            sipCpp->SetIOSettings(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_SetIOSettings, doc_FbxImporter_SetIOSettings);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetAnimStackCount, "GetAnimStackCount(self) -> int");

extern "C" {static PyObject *meth_FbxImporter_GetAnimStackCount(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetAnimStackCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetAnimStackCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetAnimStackCount, doc_FbxImporter_GetAnimStackCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetTakeInfo, "GetTakeInfo(self, int) -> FbxTakeInfo");

extern "C" {static PyObject *meth_FbxImporter_GetTakeInfo(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetTakeInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxImporter, &sipCpp, &a0))
        {
             ::FbxTakeInfo*sipRes;

            sipRes = sipCpp->GetTakeInfo(a0);

            return sipConvertFromType(sipRes,sipType_FbxTakeInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetTakeInfo, doc_FbxImporter_GetTakeInfo);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetActiveAnimStackName, "GetActiveAnimStackName(self) -> FbxString");

extern "C" {static PyObject *meth_FbxImporter_GetActiveAnimStackName(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetActiveAnimStackName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
             ::FbxString*sipRes;

            sipRes = new  ::FbxString(sipCpp->GetActiveAnimStackName());

            return sipConvertFromNewType(sipRes,sipType_FbxString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetActiveAnimStackName, doc_FbxImporter_GetActiveAnimStackName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetSceneInfo, "GetSceneInfo(self) -> FbxDocumentInfo");

extern "C" {static PyObject *meth_FbxImporter_GetSceneInfo(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetSceneInfo(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
             ::FbxDocumentInfo*sipRes;

            sipRes = sipCpp->GetSceneInfo();

            return sipConvertFromType(sipRes,sipType_FbxDocumentInfo,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetSceneInfo, doc_FbxImporter_GetSceneInfo);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_GetFileFormat, "GetFileFormat(self) -> int");

extern "C" {static PyObject *meth_FbxImporter_GetFileFormat(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_GetFileFormat(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetFileFormat();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_GetFileFormat, doc_FbxImporter_GetFileFormat);

    return NULL;
}


PyDoc_STRVAR(doc_FbxImporter_IsFBX, "IsFBX(self) -> bool");

extern "C" {static PyObject *meth_FbxImporter_IsFBX(PyObject *, PyObject *);}
static PyObject *meth_FbxImporter_IsFBX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxImporter *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxImporter, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->IsFBX();

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxImporter, sipName_IsFBX, doc_FbxImporter_IsFBX);

    return NULL;
}


extern "C" {static PyObject *slot_FbxImporter___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxImporter___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxImporter *sipCpp = reinterpret_cast< ::FbxImporter *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxImporter));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxImporter* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxImporter, &a0))
        {
            bool sipRes;

            sipRes = !sipCpp-> ::FbxImporter::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxImporter, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxImporter___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxImporter___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxImporter *sipCpp = reinterpret_cast< ::FbxImporter *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxImporter));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxImporter* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxImporter, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxImporter::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxImporter, sipSelf, sipArg);
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxImporter(void *, const sipTypeDef *);}
static void *cast_FbxImporter(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxImporter *sipCpp = reinterpret_cast< ::FbxImporter *>(sipCppV);

    if (targetType == sipType_FbxIOBase)
        return static_cast< ::FbxIOBase *>(sipCpp);

    if (targetType == sipType_FbxObject)
        return static_cast< ::FbxObject *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxImporter(void *, int);}
static void release_FbxImporter(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxImporter *>(sipCppV);
}


extern "C" {static void dealloc_FbxImporter(sipSimpleWrapper *);}
static void dealloc_FbxImporter(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxImporter *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxImporter(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxImporter(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxImporter(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxImporter *sipCpp = 0;

    {
         ::FbxManager* a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9A8", sipType_FbxManager, &a0, &a1Keep, &a1))
        {
            sipCpp = new sipFbxImporter(*a0,a1);
            Py_DECREF(a1Keep);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxImporter[] = {{160, 255, 1}};


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxImporter[] = {
    {(void *)slot_FbxImporter___ne__, ne_slot},
    {(void *)slot_FbxImporter___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxImporter[] = {
    {SIP_MLNAME_CAST(sipName_Create), meth_FbxImporter_Create, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_Create)},
    {SIP_MLNAME_CAST(sipName_GetActiveAnimStackName), meth_FbxImporter_GetActiveAnimStackName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetActiveAnimStackName)},
    {SIP_MLNAME_CAST(sipName_GetAnimStackCount), meth_FbxImporter_GetAnimStackCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetAnimStackCount)},
    {SIP_MLNAME_CAST(sipName_GetClassId), meth_FbxImporter_GetClassId, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetClassId)},
    {SIP_MLNAME_CAST(sipName_GetDefaultRenderResolution), meth_FbxImporter_GetDefaultRenderResolution, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetDefaultRenderResolution)},
    {SIP_MLNAME_CAST(sipName_GetFileFormat), meth_FbxImporter_GetFileFormat, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetFileFormat)},
    {SIP_MLNAME_CAST(sipName_GetFileHeaderInfo), meth_FbxImporter_GetFileHeaderInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetFileHeaderInfo)},
    {SIP_MLNAME_CAST(sipName_GetFileVersion), meth_FbxImporter_GetFileVersion, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetFileVersion)},
    {SIP_MLNAME_CAST(sipName_GetIOSettings), meth_FbxImporter_GetIOSettings, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetIOSettings)},
    {SIP_MLNAME_CAST(sipName_GetImportOptions), meth_FbxImporter_GetImportOptions, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetImportOptions)},
    {SIP_MLNAME_CAST(sipName_GetSceneInfo), meth_FbxImporter_GetSceneInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetSceneInfo)},
    {SIP_MLNAME_CAST(sipName_GetTakeInfo), meth_FbxImporter_GetTakeInfo, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_GetTakeInfo)},
    {SIP_MLNAME_CAST(sipName_Import), meth_FbxImporter_Import, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_Import)},
    {SIP_MLNAME_CAST(sipName_Initialize), meth_FbxImporter_Initialize, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_Initialize)},
    {SIP_MLNAME_CAST(sipName_IsFBX), meth_FbxImporter_IsFBX, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_IsFBX)},
    {SIP_MLNAME_CAST(sipName_IsImporting), meth_FbxImporter_IsImporting, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_IsImporting)},
    {SIP_MLNAME_CAST(sipName_SetIOSettings), meth_FbxImporter_SetIOSettings, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxImporter_SetIOSettings)}
};

static sipEnumMemberDef enummembers_FbxImporter[] = {
    {sipName_eDoNotParseFile, static_cast<int>( ::FbxImporter::eDoNotParseFile), 167},
    {sipName_eParseFile, static_cast<int>( ::FbxImporter::eParseFile), 167},
};


extern "C" {static PyObject *varget_FbxImporter_ClassId(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxImporter_ClassId(void *, PyObject *, PyObject *)
{
     ::FbxClassId*sipVal;

    sipVal = & ::FbxImporter::ClassId;

    return sipConvertFromType(sipVal, sipType_FbxClassId, NULL);
}


extern "C" {static int varset_FbxImporter_ClassId(void *, PyObject *, PyObject *);}
static int varset_FbxImporter_ClassId(void *, PyObject *sipPy, PyObject *)
{
     ::FbxClassId*sipVal;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxClassId *>(sipForceConvertToType(sipPy,sipType_FbxClassId,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

     ::FbxImporter::ClassId = *sipVal;

    return 0;
}

sipVariableDef variables_FbxImporter[] = {
    {ClassVariable, sipName_ClassId, (PyMethodDef *)varget_FbxImporter_ClassId, (PyMethodDef *)varset_FbxImporter_ClassId, NULL, NULL},
};

PyDoc_STRVAR(doc_FbxImporter, "\1FbxImporter(FbxManager, str)");


sipClassTypeDef sipTypeDef_fbx_FbxImporter = {
    {
        -1,
        0,
        0,
        SIP_TYPE_SCC|SIP_TYPE_CLASS,
        sipNameNr_FbxImporter,
        {0},
        0
    },
    {
        sipNameNr_FbxImporter,
        {0, 0, 1},
        17, methods_FbxImporter,
        2, enummembers_FbxImporter,
        1, variables_FbxImporter,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxImporter,
    -1,
    -1,
    supers_FbxImporter,
    slots_FbxImporter,
    init_type_FbxImporter,
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
    dealloc_FbxImporter,
    0,
    0,
    0,
    release_FbxImporter,
    cast_FbxImporter,
    0,
    0,
    0,
    0,
    0,
    0
};