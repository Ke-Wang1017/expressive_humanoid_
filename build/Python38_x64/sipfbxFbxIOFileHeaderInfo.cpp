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




class sipFbxIOFileHeaderInfo : public  ::FbxIOFileHeaderInfo
{
public:
    sipFbxIOFileHeaderInfo();
    sipFbxIOFileHeaderInfo(const  ::FbxIOFileHeaderInfo&);
    virtual ~sipFbxIOFileHeaderInfo();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    bool ReadExtendedHeaderInformation( ::FbxIO*);
    void Reset();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipFbxIOFileHeaderInfo(const sipFbxIOFileHeaderInfo &);
    sipFbxIOFileHeaderInfo &operator = (const sipFbxIOFileHeaderInfo &);

    char sipPyMethods[2];
};

sipFbxIOFileHeaderInfo::sipFbxIOFileHeaderInfo():  ::FbxIOFileHeaderInfo(), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxIOFileHeaderInfo::sipFbxIOFileHeaderInfo(const  ::FbxIOFileHeaderInfo& a0):  ::FbxIOFileHeaderInfo(a0), sipPySelf(0)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipFbxIOFileHeaderInfo::~sipFbxIOFileHeaderInfo()
{
    sipInstanceDestroyed(sipPySelf);
}

bool sipFbxIOFileHeaderInfo::ReadExtendedHeaderInformation( ::FbxIO*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[0],sipPySelf,NULL,sipName_ReadExtendedHeaderInformation);

    if (!sipMeth)
        return  ::FbxIOFileHeaderInfo::ReadExtendedHeaderInformation(a0);

    extern bool sipVH_fbx_1(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::FbxIO*);

    return sipVH_fbx_1(sipGILState, 0, sipPySelf, sipMeth, a0);
}

void sipFbxIOFileHeaderInfo::Reset()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

    sipMeth = sipIsPyMethod(&sipGILState,&sipPyMethods[1],sipPySelf,NULL,sipName_Reset);

    if (!sipMeth)
    {
         ::FbxIOFileHeaderInfo::Reset();
        return;
    }

    extern void sipVH_fbx_0(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    sipVH_fbx_0(sipGILState, 0, sipPySelf, sipMeth);
}


PyDoc_STRVAR(doc_FbxIOFileHeaderInfo_Reset, "Reset(self)");

extern "C" {static PyObject *meth_FbxIOFileHeaderInfo_Reset(PyObject *, PyObject *);}
static PyObject *meth_FbxIOFileHeaderInfo_Reset(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxIOFileHeaderInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxIOFileHeaderInfo, &sipCpp))
        {
            (sipSelfWasArg ? sipCpp-> ::FbxIOFileHeaderInfo::Reset() : sipCpp->Reset());

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxIOFileHeaderInfo, sipName_Reset, doc_FbxIOFileHeaderInfo_Reset);

    return NULL;
}


PyDoc_STRVAR(doc_FbxIOFileHeaderInfo_ReadExtendedHeaderInformation, "ReadExtendedHeaderInformation(self, FbxIO) -> bool");

extern "C" {static PyObject *meth_FbxIOFileHeaderInfo_ReadExtendedHeaderInformation(PyObject *, PyObject *);}
static PyObject *meth_FbxIOFileHeaderInfo_ReadExtendedHeaderInformation(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::FbxIO* a0;
         ::FbxIOFileHeaderInfo *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxIOFileHeaderInfo, &sipCpp, sipType_FbxIO, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::FbxIOFileHeaderInfo::ReadExtendedHeaderInformation(a0) : sipCpp->ReadExtendedHeaderInformation(a0));

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxIOFileHeaderInfo, sipName_ReadExtendedHeaderInformation, doc_FbxIOFileHeaderInfo_ReadExtendedHeaderInformation);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxIOFileHeaderInfo(void *, int);}
static void release_FbxIOFileHeaderInfo(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipFbxIOFileHeaderInfo *>(sipCppV);
    else
        delete reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipCppV);
}


extern "C" {static void assign_FbxIOFileHeaderInfo(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxIOFileHeaderInfo(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxIOFileHeaderInfo *>(sipSrc);
}


extern "C" {static void *array_FbxIOFileHeaderInfo(SIP_SSIZE_T);}
static void *array_FbxIOFileHeaderInfo(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxIOFileHeaderInfo[sipNrElem];
}


extern "C" {static void *copy_FbxIOFileHeaderInfo(const void *, SIP_SSIZE_T);}
static void *copy_FbxIOFileHeaderInfo(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxIOFileHeaderInfo(reinterpret_cast<const  ::FbxIOFileHeaderInfo *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxIOFileHeaderInfo(sipSimpleWrapper *);}
static void dealloc_FbxIOFileHeaderInfo(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipFbxIOFileHeaderInfo *>(sipGetAddress(sipSelf))->sipPySelf = NULL;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxIOFileHeaderInfo(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_FbxIOFileHeaderInfo(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxIOFileHeaderInfo(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipFbxIOFileHeaderInfo *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new sipFbxIOFileHeaderInfo();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::FbxIOFileHeaderInfo* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxIOFileHeaderInfo, &a0))
        {
            sipCpp = new sipFbxIOFileHeaderInfo(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return NULL;
}


static PyMethodDef methods_FbxIOFileHeaderInfo[] = {
    {SIP_MLNAME_CAST(sipName_ReadExtendedHeaderInformation), meth_FbxIOFileHeaderInfo_ReadExtendedHeaderInformation, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxIOFileHeaderInfo_ReadExtendedHeaderInformation)},
    {SIP_MLNAME_CAST(sipName_Reset), meth_FbxIOFileHeaderInfo_Reset, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxIOFileHeaderInfo_Reset)}
};


extern "C" {static PyObject *varget_FbxIOFileHeaderInfo_mCreationTimeStamp(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIOFileHeaderInfo_mCreationTimeStamp(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxLocalTime*sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = &sipCpp->mCreationTimeStamp;

    return sipConvertFromType(sipVal, sipType_FbxLocalTime, NULL);
}


extern "C" {static int varset_FbxIOFileHeaderInfo_mCreationTimeStamp(void *, PyObject *, PyObject *);}
static int varset_FbxIOFileHeaderInfo_mCreationTimeStamp(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxLocalTime*sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxLocalTime *>(sipForceConvertToType(sipPy,sipType_FbxLocalTime,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mCreationTimeStamp = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxIOFileHeaderInfo_mCreationTimeStampPresent(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIOFileHeaderInfo_mCreationTimeStampPresent(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = sipCpp->mCreationTimeStampPresent;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_FbxIOFileHeaderInfo_mCreationTimeStampPresent(void *, PyObject *, PyObject *);}
static int varset_FbxIOFileHeaderInfo_mCreationTimeStampPresent(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mCreationTimeStampPresent = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxIOFileHeaderInfo_mCreator(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIOFileHeaderInfo_mCreator(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = &sipCpp->mCreator;

    return sipConvertFromType(sipVal, sipType_FbxString, NULL);
}


extern "C" {static int varset_FbxIOFileHeaderInfo_mCreator(void *, PyObject *, PyObject *);}
static int varset_FbxIOFileHeaderInfo_mCreator(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxString*sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxString *>(sipForceConvertToType(sipPy,sipType_FbxString,NULL,SIP_NOT_NONE,&sipValState,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mCreator = *sipVal;

    sipReleaseType(sipVal, sipType_FbxString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_FbxIOFileHeaderInfo_mDefaultRenderResolution(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIOFileHeaderInfo_mDefaultRenderResolution(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxIODefaultRenderResolution*sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = &sipCpp->mDefaultRenderResolution;

    return sipConvertFromType(sipVal, sipType_FbxIODefaultRenderResolution, NULL);
}


extern "C" {static int varset_FbxIOFileHeaderInfo_mDefaultRenderResolution(void *, PyObject *, PyObject *);}
static int varset_FbxIOFileHeaderInfo_mDefaultRenderResolution(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxIODefaultRenderResolution*sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxIODefaultRenderResolution *>(sipForceConvertToType(sipPy,sipType_FbxIODefaultRenderResolution,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mDefaultRenderResolution = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxIOFileHeaderInfo_mFileVersion(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIOFileHeaderInfo_mFileVersion(void *sipSelf, PyObject *, PyObject *)
{
    int sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = sipCpp->mFileVersion;

    return SIPLong_FromLong(sipVal);
}


extern "C" {static int varset_FbxIOFileHeaderInfo_mFileVersion(void *, PyObject *, PyObject *);}
static int varset_FbxIOFileHeaderInfo_mFileVersion(void *sipSelf, PyObject *sipPy, PyObject *)
{
    int sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = (int)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mFileVersion = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxIOFileHeaderInfo_mIOPlugin(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIOFileHeaderInfo_mIOPlugin(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = sipCpp->mIOPlugin;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_FbxIOFileHeaderInfo_mIOPlugin(void *, PyObject *, PyObject *);}
static int varset_FbxIOFileHeaderInfo_mIOPlugin(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mIOPlugin = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxIOFileHeaderInfo_mPLE(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxIOFileHeaderInfo_mPLE(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = sipCpp->mPLE;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_FbxIOFileHeaderInfo_mPLE(void *, PyObject *, PyObject *);}
static int varset_FbxIOFileHeaderInfo_mPLE(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
     ::FbxIOFileHeaderInfo *sipCpp = reinterpret_cast< ::FbxIOFileHeaderInfo *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mPLE = sipVal;

    return 0;
}

sipVariableDef variables_FbxIOFileHeaderInfo[] = {
    {InstanceVariable, sipName_mCreationTimeStamp, (PyMethodDef *)varget_FbxIOFileHeaderInfo_mCreationTimeStamp, (PyMethodDef *)varset_FbxIOFileHeaderInfo_mCreationTimeStamp, NULL, NULL},
    {InstanceVariable, sipName_mCreationTimeStampPresent, (PyMethodDef *)varget_FbxIOFileHeaderInfo_mCreationTimeStampPresent, (PyMethodDef *)varset_FbxIOFileHeaderInfo_mCreationTimeStampPresent, NULL, NULL},
    {InstanceVariable, sipName_mCreator, (PyMethodDef *)varget_FbxIOFileHeaderInfo_mCreator, (PyMethodDef *)varset_FbxIOFileHeaderInfo_mCreator, NULL, NULL},
    {InstanceVariable, sipName_mDefaultRenderResolution, (PyMethodDef *)varget_FbxIOFileHeaderInfo_mDefaultRenderResolution, (PyMethodDef *)varset_FbxIOFileHeaderInfo_mDefaultRenderResolution, NULL, NULL},
    {InstanceVariable, sipName_mFileVersion, (PyMethodDef *)varget_FbxIOFileHeaderInfo_mFileVersion, (PyMethodDef *)varset_FbxIOFileHeaderInfo_mFileVersion, NULL, NULL},
    {InstanceVariable, sipName_mIOPlugin, (PyMethodDef *)varget_FbxIOFileHeaderInfo_mIOPlugin, (PyMethodDef *)varset_FbxIOFileHeaderInfo_mIOPlugin, NULL, NULL},
    {InstanceVariable, sipName_mPLE, (PyMethodDef *)varget_FbxIOFileHeaderInfo_mPLE, (PyMethodDef *)varset_FbxIOFileHeaderInfo_mPLE, NULL, NULL},
};

PyDoc_STRVAR(doc_FbxIOFileHeaderInfo, "\1FbxIOFileHeaderInfo()\n"
    "FbxIOFileHeaderInfo(FbxIOFileHeaderInfo)");


sipClassTypeDef sipTypeDef_fbx_FbxIOFileHeaderInfo = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxIOFileHeaderInfo,
        {0},
        0
    },
    {
        sipNameNr_FbxIOFileHeaderInfo,
        {0, 0, 1},
        2, methods_FbxIOFileHeaderInfo,
        0, 0,
        7, variables_FbxIOFileHeaderInfo,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxIOFileHeaderInfo,
    -1,
    -1,
    0,
    0,
    init_type_FbxIOFileHeaderInfo,
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
    dealloc_FbxIOFileHeaderInfo,
    assign_FbxIOFileHeaderInfo,
    array_FbxIOFileHeaderInfo,
    copy_FbxIOFileHeaderInfo,
    release_FbxIOFileHeaderInfo,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};