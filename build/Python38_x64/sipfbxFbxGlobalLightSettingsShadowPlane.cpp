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




/* Call the instance's destructor. */
extern "C" {static void release_FbxGlobalLightSettings_ShadowPlane(void *, int);}
static void release_FbxGlobalLightSettings_ShadowPlane(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxGlobalLightSettings::ShadowPlane *>(sipCppV);
}


extern "C" {static void assign_FbxGlobalLightSettings_ShadowPlane(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxGlobalLightSettings_ShadowPlane(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxGlobalLightSettings::ShadowPlane *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxGlobalLightSettings::ShadowPlane *>(sipSrc);
}


extern "C" {static void *array_FbxGlobalLightSettings_ShadowPlane(SIP_SSIZE_T);}
static void *array_FbxGlobalLightSettings_ShadowPlane(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxGlobalLightSettings::ShadowPlane[sipNrElem];
}


extern "C" {static void *copy_FbxGlobalLightSettings_ShadowPlane(const void *, SIP_SSIZE_T);}
static void *copy_FbxGlobalLightSettings_ShadowPlane(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxGlobalLightSettings::ShadowPlane(reinterpret_cast<const  ::FbxGlobalLightSettings::ShadowPlane *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxGlobalLightSettings_ShadowPlane(sipSimpleWrapper *);}
static void dealloc_FbxGlobalLightSettings_ShadowPlane(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxGlobalLightSettings_ShadowPlane(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxGlobalLightSettings_ShadowPlane(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxGlobalLightSettings_ShadowPlane(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxGlobalLightSettings::ShadowPlane *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxGlobalLightSettings::ShadowPlane();

            return sipCpp;
        }
    }

    {
        const  ::FbxGlobalLightSettings::ShadowPlane* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxGlobalLightSettings_ShadowPlane, &a0))
        {
            sipCpp = new  ::FbxGlobalLightSettings::ShadowPlane(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


extern "C" {static PyObject *varget_FbxGlobalLightSettings_ShadowPlane_mEnable(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxGlobalLightSettings_ShadowPlane_mEnable(void *sipSelf, PyObject *, PyObject *)
{
    bool sipVal;
     ::FbxGlobalLightSettings::ShadowPlane *sipCpp = reinterpret_cast< ::FbxGlobalLightSettings::ShadowPlane *>(sipSelf);

    sipVal = sipCpp->mEnable;

    return PyBool_FromLong(sipVal);
}


extern "C" {static int varset_FbxGlobalLightSettings_ShadowPlane_mEnable(void *, PyObject *, PyObject *);}
static int varset_FbxGlobalLightSettings_ShadowPlane_mEnable(void *sipSelf, PyObject *sipPy, PyObject *)
{
    bool sipVal;
     ::FbxGlobalLightSettings::ShadowPlane *sipCpp = reinterpret_cast< ::FbxGlobalLightSettings::ShadowPlane *>(sipSelf);

    sipVal = (bool)SIPLong_AsLong(sipPy);

    if (PyErr_Occurred() != NULL)
        return -1;

    sipCpp->mEnable = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxGlobalLightSettings_ShadowPlane_mNormal(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxGlobalLightSettings_ShadowPlane_mNormal(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxVector4*sipVal;
     ::FbxGlobalLightSettings::ShadowPlane *sipCpp = reinterpret_cast< ::FbxGlobalLightSettings::ShadowPlane *>(sipSelf);

    sipVal = &sipCpp->mNormal;

    return sipConvertFromType(sipVal, sipType_FbxVector4, NULL);
}


extern "C" {static int varset_FbxGlobalLightSettings_ShadowPlane_mNormal(void *, PyObject *, PyObject *);}
static int varset_FbxGlobalLightSettings_ShadowPlane_mNormal(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxVector4*sipVal;
     ::FbxGlobalLightSettings::ShadowPlane *sipCpp = reinterpret_cast< ::FbxGlobalLightSettings::ShadowPlane *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxVector4 *>(sipForceConvertToType(sipPy,sipType_FbxVector4,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mNormal = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_FbxGlobalLightSettings_ShadowPlane_mOrigin(void *, PyObject *, PyObject *);}
static PyObject *varget_FbxGlobalLightSettings_ShadowPlane_mOrigin(void *sipSelf, PyObject *, PyObject *)
{
     ::FbxVector4*sipVal;
     ::FbxGlobalLightSettings::ShadowPlane *sipCpp = reinterpret_cast< ::FbxGlobalLightSettings::ShadowPlane *>(sipSelf);

    sipVal = &sipCpp->mOrigin;

    return sipConvertFromType(sipVal, sipType_FbxVector4, NULL);
}


extern "C" {static int varset_FbxGlobalLightSettings_ShadowPlane_mOrigin(void *, PyObject *, PyObject *);}
static int varset_FbxGlobalLightSettings_ShadowPlane_mOrigin(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::FbxVector4*sipVal;
     ::FbxGlobalLightSettings::ShadowPlane *sipCpp = reinterpret_cast< ::FbxGlobalLightSettings::ShadowPlane *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::FbxVector4 *>(sipForceConvertToType(sipPy,sipType_FbxVector4,NULL,SIP_NOT_NONE,NULL,&sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->mOrigin = *sipVal;

    return 0;
}

sipVariableDef variables_FbxGlobalLightSettings_ShadowPlane[] = {
    {InstanceVariable, sipName_mEnable, (PyMethodDef *)varget_FbxGlobalLightSettings_ShadowPlane_mEnable, (PyMethodDef *)varset_FbxGlobalLightSettings_ShadowPlane_mEnable, NULL, NULL},
    {InstanceVariable, sipName_mNormal, (PyMethodDef *)varget_FbxGlobalLightSettings_ShadowPlane_mNormal, (PyMethodDef *)varset_FbxGlobalLightSettings_ShadowPlane_mNormal, NULL, NULL},
    {InstanceVariable, sipName_mOrigin, (PyMethodDef *)varget_FbxGlobalLightSettings_ShadowPlane_mOrigin, (PyMethodDef *)varset_FbxGlobalLightSettings_ShadowPlane_mOrigin, NULL, NULL},
};

PyDoc_STRVAR(doc_FbxGlobalLightSettings_ShadowPlane, "\1FbxGlobalLightSettings.ShadowPlane()\n"
    "FbxGlobalLightSettings.ShadowPlane(FbxGlobalLightSettings.ShadowPlane)");


sipClassTypeDef sipTypeDef_fbx_FbxGlobalLightSettings_ShadowPlane = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxGlobalLightSettings__ShadowPlane,
        {0},
        0
    },
    {
        sipNameNr_ShadowPlane,
        {154, 255, 0},
        0, 0,
        0, 0,
        3, variables_FbxGlobalLightSettings_ShadowPlane,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxGlobalLightSettings_ShadowPlane,
    -1,
    -1,
    0,
    0,
    init_type_FbxGlobalLightSettings_ShadowPlane,
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
    dealloc_FbxGlobalLightSettings_ShadowPlane,
    assign_FbxGlobalLightSettings_ShadowPlane,
    array_FbxGlobalLightSettings_ShadowPlane,
    copy_FbxGlobalLightSettings_ShadowPlane,
    release_FbxGlobalLightSettings_ShadowPlane,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};