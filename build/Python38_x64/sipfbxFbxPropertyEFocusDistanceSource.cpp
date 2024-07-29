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




PyDoc_STRVAR(doc_FbxPropertyEFocusDistanceSource_Get, "Get(self) -> FbxCamera.EFocusDistanceSource");

extern "C" {static PyObject *meth_FbxPropertyEFocusDistanceSource_Get(PyObject *, PyObject *);}
static PyObject *meth_FbxPropertyEFocusDistanceSource_Get(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxPropertyEFocusDistanceSource *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxPropertyEFocusDistanceSource, &sipCpp))
        {
             ::FbxCamera::EFocusDistanceSource sipRes;

            sipRes = sipCpp->Get();

            return sipConvertFromEnum(sipRes,sipType_FbxCamera_EFocusDistanceSource);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxPropertyEFocusDistanceSource, sipName_Get, doc_FbxPropertyEFocusDistanceSource_Get);

    return NULL;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_FbxPropertyEFocusDistanceSource(void *, const sipTypeDef *);}
static void *cast_FbxPropertyEFocusDistanceSource(void *sipCppV, const sipTypeDef *targetType)
{
     ::FbxPropertyEFocusDistanceSource *sipCpp = reinterpret_cast< ::FbxPropertyEFocusDistanceSource *>(sipCppV);

    if (targetType == sipType_FbxProperty)
        return static_cast< ::FbxProperty *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxPropertyEFocusDistanceSource(void *, int);}
static void release_FbxPropertyEFocusDistanceSource(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxPropertyEFocusDistanceSource *>(sipCppV);
}


extern "C" {static void assign_FbxPropertyEFocusDistanceSource(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxPropertyEFocusDistanceSource(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxPropertyEFocusDistanceSource *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxPropertyEFocusDistanceSource *>(sipSrc);
}


extern "C" {static void *array_FbxPropertyEFocusDistanceSource(SIP_SSIZE_T);}
static void *array_FbxPropertyEFocusDistanceSource(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxPropertyEFocusDistanceSource[sipNrElem];
}


extern "C" {static void *copy_FbxPropertyEFocusDistanceSource(const void *, SIP_SSIZE_T);}
static void *copy_FbxPropertyEFocusDistanceSource(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxPropertyEFocusDistanceSource(reinterpret_cast<const  ::FbxPropertyEFocusDistanceSource *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxPropertyEFocusDistanceSource(sipSimpleWrapper *);}
static void dealloc_FbxPropertyEFocusDistanceSource(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxPropertyEFocusDistanceSource(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxPropertyEFocusDistanceSource(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxPropertyEFocusDistanceSource(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxPropertyEFocusDistanceSource *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxPropertyEFocusDistanceSource();

            return sipCpp;
        }
    }

    {
        const  ::FbxProperty* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxProperty, &a0))
        {
            sipCpp = new  ::FbxPropertyEFocusDistanceSource(*a0);

            return sipCpp;
        }
    }

    {
        const  ::FbxPropertyEFocusDistanceSource* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxPropertyEFocusDistanceSource, &a0))
        {
            sipCpp = new  ::FbxPropertyEFocusDistanceSource(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_FbxPropertyEFocusDistanceSource[] = {{258, 255, 1}};


static PyMethodDef methods_FbxPropertyEFocusDistanceSource[] = {
    {SIP_MLNAME_CAST(sipName_Get), meth_FbxPropertyEFocusDistanceSource_Get, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxPropertyEFocusDistanceSource_Get)}
};

PyDoc_STRVAR(doc_FbxPropertyEFocusDistanceSource, "\1FbxPropertyEFocusDistanceSource()\n"
    "FbxPropertyEFocusDistanceSource(FbxProperty)\n"
    "FbxPropertyEFocusDistanceSource(FbxPropertyEFocusDistanceSource)");


sipClassTypeDef sipTypeDef_fbx_FbxPropertyEFocusDistanceSource = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxPropertyEFocusDistanceSource,
        {0},
        0
    },
    {
        sipNameNr_FbxPropertyEFocusDistanceSource,
        {0, 0, 1},
        1, methods_FbxPropertyEFocusDistanceSource,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxPropertyEFocusDistanceSource,
    -1,
    -1,
    supers_FbxPropertyEFocusDistanceSource,
    0,
    init_type_FbxPropertyEFocusDistanceSource,
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
    dealloc_FbxPropertyEFocusDistanceSource,
    assign_FbxPropertyEFocusDistanceSource,
    array_FbxPropertyEFocusDistanceSource,
    copy_FbxPropertyEFocusDistanceSource,
    release_FbxPropertyEFocusDistanceSource,
    cast_FbxPropertyEFocusDistanceSource,
    0,
    0,
    0,
    0,
    0,
    0
};