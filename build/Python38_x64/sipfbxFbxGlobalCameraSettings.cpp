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
#line 44 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxGlobalCameraSettings.cpp"


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_SetDefaultCamera, "SetDefaultCamera(self, str, FbxStatus = None) -> bool");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_SetDefaultCamera(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_SetDefaultCamera(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const char* a0;
        PyObject *a0Keep;
         ::FbxStatus* a1 = 0;
         ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BA8|J8", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp, &a0Keep, &a0, sipType_FbxStatus, &a1))
        {
            bool sipRes;

            sipRes = sipCpp->SetDefaultCamera(a0,a1);
            Py_DECREF(a0Keep);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_SetDefaultCamera, doc_FbxGlobalCameraSettings_SetDefaultCamera);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetDefaultCamera, "GetDefaultCamera(self) -> str");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetDefaultCamera(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetDefaultCamera(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
            const char*sipRes;

            sipRes = sipCpp->GetDefaultCamera();

            if (sipRes == NULL)
            {
                Py_INCREF(Py_None);
                return Py_None;
            }

#if PY_MAJOR_VERSION >= 3
            return PyUnicode_FromString(sipRes);
#else
            return PyUnicode_DecodeUTF8(sipRes, strlen(sipRes), NULL);
#endif
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetDefaultCamera, doc_FbxGlobalCameraSettings_GetDefaultCamera);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_RestoreDefaultSettings, "RestoreDefaultSettings(self)");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_RestoreDefaultSettings(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_RestoreDefaultSettings(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
            sipCpp->RestoreDefaultSettings();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_RestoreDefaultSettings, doc_FbxGlobalCameraSettings_RestoreDefaultSettings);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_SetDefaultViewingMode, "SetDefaultViewingMode(self, FbxGlobalCameraSettings.EViewingMode)");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_SetDefaultViewingMode(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_SetDefaultViewingMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxGlobalCameraSettings::EViewingMode a0;
         ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BE", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp, sipType_FbxGlobalCameraSettings_EViewingMode, &a0))
        {
            sipCpp->SetDefaultViewingMode(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_SetDefaultViewingMode, doc_FbxGlobalCameraSettings_SetDefaultViewingMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetDefaultViewingMode, "GetDefaultViewingMode(self) -> FbxGlobalCameraSettings.EViewingMode");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetDefaultViewingMode(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetDefaultViewingMode(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxGlobalCameraSettings::EViewingMode sipRes;

            sipRes = sipCpp->GetDefaultViewingMode();

            return sipConvertFromEnum(sipRes,sipType_FbxGlobalCameraSettings_EViewingMode);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetDefaultViewingMode, doc_FbxGlobalCameraSettings_GetDefaultViewingMode);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_CreateProducerCameras, "CreateProducerCameras(self)");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_CreateProducerCameras(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_CreateProducerCameras(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
            sipCpp->CreateProducerCameras();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_CreateProducerCameras, doc_FbxGlobalCameraSettings_CreateProducerCameras);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_DestroyProducerCameras, "DestroyProducerCameras(self)");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_DestroyProducerCameras(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_DestroyProducerCameras(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
            sipCpp->DestroyProducerCameras();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_DestroyProducerCameras, doc_FbxGlobalCameraSettings_DestroyProducerCameras);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_IsProducerCamera, "IsProducerCamera(self, FbxCamera) -> bool");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_IsProducerCamera(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_IsProducerCamera(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxCamera* a0;
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp, sipType_FbxCamera, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->IsProducerCamera(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_IsProducerCamera, doc_FbxGlobalCameraSettings_IsProducerCamera);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetCameraProducerPerspective, "GetCameraProducerPerspective(self) -> FbxCamera");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerPerspective(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerPerspective(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxCamera*sipRes;

            sipRes = sipCpp->GetCameraProducerPerspective();

            return sipConvertFromType(sipRes,sipType_FbxCamera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetCameraProducerPerspective, doc_FbxGlobalCameraSettings_GetCameraProducerPerspective);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetCameraProducerFront, "GetCameraProducerFront(self) -> FbxCamera");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerFront(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerFront(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxCamera*sipRes;

            sipRes = sipCpp->GetCameraProducerFront();

            return sipConvertFromType(sipRes,sipType_FbxCamera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetCameraProducerFront, doc_FbxGlobalCameraSettings_GetCameraProducerFront);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetCameraProducerBack, "GetCameraProducerBack(self) -> FbxCamera");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerBack(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerBack(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxCamera*sipRes;

            sipRes = sipCpp->GetCameraProducerBack();

            return sipConvertFromType(sipRes,sipType_FbxCamera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetCameraProducerBack, doc_FbxGlobalCameraSettings_GetCameraProducerBack);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetCameraProducerLeft, "GetCameraProducerLeft(self) -> FbxCamera");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerLeft(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerLeft(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxCamera*sipRes;

            sipRes = sipCpp->GetCameraProducerLeft();

            return sipConvertFromType(sipRes,sipType_FbxCamera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetCameraProducerLeft, doc_FbxGlobalCameraSettings_GetCameraProducerLeft);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetCameraProducerRight, "GetCameraProducerRight(self) -> FbxCamera");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerRight(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerRight(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxCamera*sipRes;

            sipRes = sipCpp->GetCameraProducerRight();

            return sipConvertFromType(sipRes,sipType_FbxCamera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetCameraProducerRight, doc_FbxGlobalCameraSettings_GetCameraProducerRight);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetCameraProducerTop, "GetCameraProducerTop(self) -> FbxCamera");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerTop(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerTop(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxCamera*sipRes;

            sipRes = sipCpp->GetCameraProducerTop();

            return sipConvertFromType(sipRes,sipType_FbxCamera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetCameraProducerTop, doc_FbxGlobalCameraSettings_GetCameraProducerTop);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetCameraProducerBottom, "GetCameraProducerBottom(self) -> FbxCamera");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerBottom(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetCameraProducerBottom(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxCamera*sipRes;

            sipRes = sipCpp->GetCameraProducerBottom();

            return sipConvertFromType(sipRes,sipType_FbxCamera,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetCameraProducerBottom, doc_FbxGlobalCameraSettings_GetCameraProducerBottom);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_GetCameraSwitcher, "GetCameraSwitcher(self) -> FbxCameraSwitcher");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_GetCameraSwitcher(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_GetCameraSwitcher(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp))
        {
             ::FbxCameraSwitcher*sipRes;

            sipRes = sipCpp->GetCameraSwitcher();

            return sipConvertFromType(sipRes,sipType_FbxCameraSwitcher,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_GetCameraSwitcher, doc_FbxGlobalCameraSettings_GetCameraSwitcher);

    return NULL;
}


PyDoc_STRVAR(doc_FbxGlobalCameraSettings_SetCameraSwitcher, "SetCameraSwitcher(self, FbxCameraSwitcher)");

extern "C" {static PyObject *meth_FbxGlobalCameraSettings_SetCameraSwitcher(PyObject *, PyObject *);}
static PyObject *meth_FbxGlobalCameraSettings_SetCameraSwitcher(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxCameraSwitcher* a0;
         ::FbxGlobalCameraSettings *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxGlobalCameraSettings, &sipCpp, sipType_FbxCameraSwitcher, &a0))
        {
            sipCpp->SetCameraSwitcher(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxGlobalCameraSettings, sipName_SetCameraSwitcher, doc_FbxGlobalCameraSettings_SetCameraSwitcher);

    return NULL;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxGlobalCameraSettings(void *, int);}
static void release_FbxGlobalCameraSettings(void *, int)
{
}


static PyMethodDef methods_FbxGlobalCameraSettings[] = {
    {SIP_MLNAME_CAST(sipName_CreateProducerCameras), meth_FbxGlobalCameraSettings_CreateProducerCameras, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_CreateProducerCameras)},
    {SIP_MLNAME_CAST(sipName_DestroyProducerCameras), meth_FbxGlobalCameraSettings_DestroyProducerCameras, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_DestroyProducerCameras)},
    {SIP_MLNAME_CAST(sipName_GetCameraProducerBack), meth_FbxGlobalCameraSettings_GetCameraProducerBack, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetCameraProducerBack)},
    {SIP_MLNAME_CAST(sipName_GetCameraProducerBottom), meth_FbxGlobalCameraSettings_GetCameraProducerBottom, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetCameraProducerBottom)},
    {SIP_MLNAME_CAST(sipName_GetCameraProducerFront), meth_FbxGlobalCameraSettings_GetCameraProducerFront, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetCameraProducerFront)},
    {SIP_MLNAME_CAST(sipName_GetCameraProducerLeft), meth_FbxGlobalCameraSettings_GetCameraProducerLeft, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetCameraProducerLeft)},
    {SIP_MLNAME_CAST(sipName_GetCameraProducerPerspective), meth_FbxGlobalCameraSettings_GetCameraProducerPerspective, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetCameraProducerPerspective)},
    {SIP_MLNAME_CAST(sipName_GetCameraProducerRight), meth_FbxGlobalCameraSettings_GetCameraProducerRight, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetCameraProducerRight)},
    {SIP_MLNAME_CAST(sipName_GetCameraProducerTop), meth_FbxGlobalCameraSettings_GetCameraProducerTop, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetCameraProducerTop)},
    {SIP_MLNAME_CAST(sipName_GetCameraSwitcher), meth_FbxGlobalCameraSettings_GetCameraSwitcher, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetCameraSwitcher)},
    {SIP_MLNAME_CAST(sipName_GetDefaultCamera), meth_FbxGlobalCameraSettings_GetDefaultCamera, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetDefaultCamera)},
    {SIP_MLNAME_CAST(sipName_GetDefaultViewingMode), meth_FbxGlobalCameraSettings_GetDefaultViewingMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_GetDefaultViewingMode)},
    {SIP_MLNAME_CAST(sipName_IsProducerCamera), meth_FbxGlobalCameraSettings_IsProducerCamera, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_IsProducerCamera)},
    {SIP_MLNAME_CAST(sipName_RestoreDefaultSettings), meth_FbxGlobalCameraSettings_RestoreDefaultSettings, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_RestoreDefaultSettings)},
    {SIP_MLNAME_CAST(sipName_SetCameraSwitcher), meth_FbxGlobalCameraSettings_SetCameraSwitcher, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_SetCameraSwitcher)},
    {SIP_MLNAME_CAST(sipName_SetDefaultCamera), meth_FbxGlobalCameraSettings_SetDefaultCamera, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_SetDefaultCamera)},
    {SIP_MLNAME_CAST(sipName_SetDefaultViewingMode), meth_FbxGlobalCameraSettings_SetDefaultViewingMode, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxGlobalCameraSettings_SetDefaultViewingMode)}
};

static sipEnumMemberDef enummembers_FbxGlobalCameraSettings[] = {
    {sipName_eModelsOnly, static_cast<int>( ::FbxGlobalCameraSettings::eModelsOnly), 153},
    {sipName_eStandard, static_cast<int>( ::FbxGlobalCameraSettings::eStandard), 153},
    {sipName_eXRay, static_cast<int>( ::FbxGlobalCameraSettings::eXRay), 153},
};


sipClassTypeDef sipTypeDef_fbx_FbxGlobalCameraSettings = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxGlobalCameraSettings,
        {0},
        0
    },
    {
        sipNameNr_FbxGlobalCameraSettings,
        {0, 0, 1},
        17, methods_FbxGlobalCameraSettings,
        3, enummembers_FbxGlobalCameraSettings,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    0,
    -1,
    -1,
    0,
    0,
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
    release_FbxGlobalCameraSettings,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};