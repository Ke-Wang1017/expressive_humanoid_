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




PyDoc_STRVAR(doc_FbxVector4_Set, "Set(self, float, float, float, float = 1)");

extern "C" {static PyObject *meth_FbxVector4_Set(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_Set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        double a1;
        double a2;
        double a3 = 1;
         ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bddd|d", &sipSelf, sipType_FbxVector4, &sipCpp, &a0, &a1, &a2, &a3))
        {
            sipCpp->Set(a0,a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_Set, doc_FbxVector4_Set);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4_DotProduct, "DotProduct(self, FbxVector4) -> float");

extern "C" {static PyObject *meth_FbxVector4_DotProduct(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_DotProduct(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4* a0;
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4, &sipCpp, sipType_FbxVector4, &a0))
        {
            double sipRes;

            sipRes = sipCpp->DotProduct(*a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_DotProduct, doc_FbxVector4_DotProduct);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4_CrossProduct, "CrossProduct(self, FbxVector4) -> FbxVector4");

extern "C" {static PyObject *meth_FbxVector4_CrossProduct(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_CrossProduct(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4* a0;
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4, &sipCpp, sipType_FbxVector4, &a0))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(sipCpp->CrossProduct(*a0));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_CrossProduct, doc_FbxVector4_CrossProduct);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4_AxisAlignmentInEulerAngle, "AxisAlignmentInEulerAngle(FbxVector4, FbxVector4, FbxVector4, FbxVector4) -> bool");

extern "C" {static PyObject *meth_FbxVector4_AxisAlignmentInEulerAngle(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_AxisAlignmentInEulerAngle(PyObject *, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4* a0;
        const  ::FbxVector4* a1;
        const  ::FbxVector4* a2;
         ::FbxVector4* a3;

        if (sipParseArgs(&sipParseErr, sipArgs, "J9J9J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1, sipType_FbxVector4, &a2, sipType_FbxVector4, &a3))
        {
            bool sipRes;

            sipRes =  ::FbxVector4::AxisAlignmentInEulerAngle(*a0,*a1,*a2,*a3);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_AxisAlignmentInEulerAngle, doc_FbxVector4_AxisAlignmentInEulerAngle);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4_Length, "Length(self) -> float");

extern "C" {static PyObject *meth_FbxVector4_Length(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_Length(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->Length();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_Length, doc_FbxVector4_Length);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4_SquareLength, "SquareLength(self) -> float");

extern "C" {static PyObject *meth_FbxVector4_SquareLength(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_SquareLength(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4, &sipCpp))
        {
            double sipRes;

            sipRes = sipCpp->SquareLength();

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_SquareLength, doc_FbxVector4_SquareLength);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4_Distance, "Distance(self, FbxVector4) -> float");

extern "C" {static PyObject *meth_FbxVector4_Distance(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_Distance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4* a0;
        const  ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4, &sipCpp, sipType_FbxVector4, &a0))
        {
            double sipRes;

            sipRes = sipCpp->Distance(*a0);

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_Distance, doc_FbxVector4_Distance);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4_Normalize, "Normalize(self)");

extern "C" {static PyObject *meth_FbxVector4_Normalize(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_Normalize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxVector4, &sipCpp))
        {
            sipCpp->Normalize();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_Normalize, doc_FbxVector4_Normalize);

    return NULL;
}


PyDoc_STRVAR(doc_FbxVector4_SetXYZ, "SetXYZ(self, FbxQuaternion)");

extern "C" {static PyObject *meth_FbxVector4_SetXYZ(PyObject *, PyObject *);}
static PyObject *meth_FbxVector4_SetXYZ(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxQuaternion* a0;
         ::FbxVector4 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxVector4, &sipCpp, sipType_FbxQuaternion, &a0))
        {
            sipCpp->SetXYZ(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName_SetXYZ, doc_FbxVector4_SetXYZ);

    return NULL;
}


extern "C" {static PyObject *slot_FbxVector4___repr__(PyObject *);}
static PyObject *slot_FbxVector4___repr__(PyObject *sipSelf)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 215 "/home/ke/Documents/expressive-humanoid/sip/fbxvector4.sip"
        char buf[256];
        sprintf(buf, "fbx.FbxVector4(%f, %f, %f, %f)", (*sipCpp)[0], (*sipCpp)[1], (*sipCpp)[2], (*sipCpp)[3]);
        sipRes = Py_BuildValue((char *)"s", buf);
#line 321 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxVector4.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxVector4___str__(PyObject *);}
static PyObject *slot_FbxVector4___str__(PyObject *sipSelf)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 209 "/home/ke/Documents/expressive-humanoid/sip/fbxvector4.sip"
        char buf[256];
        sprintf(buf, "fbx.FbxVector4(%f, %f, %f, %f)", (*sipCpp)[0], (*sipCpp)[1], (*sipCpp)[2], (*sipCpp)[3]);
        sipRes = Py_BuildValue((char *)"s", buf);
#line 348 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxVector4.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxVector4___neg__(PyObject *);}
static PyObject *slot_FbxVector4___neg__(PyObject *sipSelf)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;


    {
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4(-(*sipCpp));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxVector4___idiv__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector4::operator/=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            sipCpp-> ::FbxVector4::operator/=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_FbxVector4___imul__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector4::operator*=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            sipCpp-> ::FbxVector4::operator*=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_FbxVector4___isub__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector4::operator-=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            sipCpp-> ::FbxVector4::operator-=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_FbxVector4___iadd__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector4)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector4::operator+=(a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            sipCpp-> ::FbxVector4::operator+=(*a0);

            Py_INCREF(sipSelf);
            return sipSelf;
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    PyErr_Clear();

    Py_INCREF(Py_NotImplemented);
    return Py_NotImplemented;
}


extern "C" {static PyObject *slot_FbxVector4___div__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector4, &a0, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    {
         ::FbxVector4* a0;
        const  ::FbxVector4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 / *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, div_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector4___mul__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector4, &a0, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    {
         ::FbxVector4* a0;
        const  ::FbxVector4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 * *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, mul_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector4___sub__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector4, &a0, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 - a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    {
         ::FbxVector4* a0;
        const  ::FbxVector4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 - *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, sub_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector4___add__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector4* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector4, &a0, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 + a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    {
         ::FbxVector4* a0;
        const  ::FbxVector4* a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9J9", sipType_FbxVector4, &a0, sipType_FbxVector4, &a1))
        {
             ::FbxVector4*sipRes;

            sipRes = new  ::FbxVector4((*a0 + *a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector4,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, add_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector4___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            double sipRes = 0;
            int sipIsErr = 0;

#line 15 "/home/ke/Documents/expressive-humanoid/sip/fbxvector4.sip"
        if (a0 < 0 || a0 >= 4)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            sipRes = (*sipCpp)[a0];
        }
#line 785 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxVector4.cpp"

            if (sipIsErr)
                return 0;

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector4, sipName___getitem__, NULL);

    return 0;
}


extern "C" {static PyObject *slot_FbxVector4___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxVector4::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxVector4, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxVector4___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector4___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector4 *sipCpp = reinterpret_cast< ::FbxVector4 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector4));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector4* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector4, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxVector4::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxVector4, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxVector4(void *, int);}
static void release_FbxVector4(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxVector4 *>(sipCppV);
}


extern "C" {static void assign_FbxVector4(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxVector4(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxVector4 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxVector4 *>(sipSrc);
}


extern "C" {static void *array_FbxVector4(SIP_SSIZE_T);}
static void *array_FbxVector4(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxVector4[sipNrElem];
}


extern "C" {static void *copy_FbxVector4(const void *, SIP_SSIZE_T);}
static void *copy_FbxVector4(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxVector4(reinterpret_cast<const  ::FbxVector4 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxVector4(sipSimpleWrapper *);}
static void dealloc_FbxVector4(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxVector4(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxVector4(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxVector4(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxVector4 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxVector4();

            return sipCpp;
        }
    }

    {
        const  ::FbxVector4* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxVector4, &a0))
        {
            sipCpp = new  ::FbxVector4(*a0);

            return sipCpp;
        }
    }

    {
        double a0;
        double a1;
        double a2;
        double a3 = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "ddd|d", &a0, &a1, &a2, &a3))
        {
            sipCpp = new  ::FbxVector4(a0,a1,a2,a3);

            return sipCpp;
        }
    }

    {
        const  ::FbxDouble3* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxDouble3, &a0))
        {
            sipCpp = new  ::FbxVector4(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxVector4[] = {
    {(void *)slot_FbxVector4___repr__, repr_slot},
    {(void *)slot_FbxVector4___str__, str_slot},
    {(void *)slot_FbxVector4___neg__, neg_slot},
    {(void *)slot_FbxVector4___idiv__, idiv_slot},
    {(void *)slot_FbxVector4___imul__, imul_slot},
    {(void *)slot_FbxVector4___isub__, isub_slot},
    {(void *)slot_FbxVector4___iadd__, iadd_slot},
    {(void *)slot_FbxVector4___div__, div_slot},
    {(void *)slot_FbxVector4___mul__, mul_slot},
    {(void *)slot_FbxVector4___sub__, sub_slot},
    {(void *)slot_FbxVector4___add__, add_slot},
    {(void *)slot_FbxVector4___getitem__, getitem_slot},
    {(void *)slot_FbxVector4___ne__, ne_slot},
    {(void *)slot_FbxVector4___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxVector4[] = {
    {SIP_MLNAME_CAST(sipName_AxisAlignmentInEulerAngle), meth_FbxVector4_AxisAlignmentInEulerAngle, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_AxisAlignmentInEulerAngle)},
    {SIP_MLNAME_CAST(sipName_CrossProduct), meth_FbxVector4_CrossProduct, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_CrossProduct)},
    {SIP_MLNAME_CAST(sipName_Distance), meth_FbxVector4_Distance, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_Distance)},
    {SIP_MLNAME_CAST(sipName_DotProduct), meth_FbxVector4_DotProduct, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_DotProduct)},
    {SIP_MLNAME_CAST(sipName_Length), meth_FbxVector4_Length, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_Length)},
    {SIP_MLNAME_CAST(sipName_Normalize), meth_FbxVector4_Normalize, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_Normalize)},
    {SIP_MLNAME_CAST(sipName_Set), meth_FbxVector4_Set, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_Set)},
    {SIP_MLNAME_CAST(sipName_SetXYZ), meth_FbxVector4_SetXYZ, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_SetXYZ)},
    {SIP_MLNAME_CAST(sipName_SquareLength), meth_FbxVector4_SquareLength, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector4_SquareLength)}
};

PyDoc_STRVAR(doc_FbxVector4, "\1FbxVector4()\n"
    "FbxVector4(FbxVector4)\n"
    "FbxVector4(float, float, float, float = 0)\n"
    "FbxVector4(FbxDouble3)");


sipClassTypeDef sipTypeDef_fbx_FbxVector4 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxVector4,
        {0},
        0
    },
    {
        sipNameNr_FbxVector4,
        {0, 0, 1},
        9, methods_FbxVector4,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxVector4,
    -1,
    -1,
    0,
    slots_FbxVector4,
    init_type_FbxVector4,
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
    dealloc_FbxVector4,
    assign_FbxVector4,
    array_FbxVector4,
    copy_FbxVector4,
    release_FbxVector4,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};