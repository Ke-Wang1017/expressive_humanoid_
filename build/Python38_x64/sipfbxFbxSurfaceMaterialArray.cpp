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




PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_GetCount, "GetCount(self) -> int");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_GetCount(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_GetCount(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->GetCount();

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_GetCount, doc_FbxSurfaceMaterialArray_GetCount);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_InsertAt, "InsertAt(self, int, FbxSurfaceMaterial) -> int");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_InsertAt(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_InsertAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxSurfaceMaterialPtr a1;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, &a0, sipType_FbxSurfaceMaterial, &a1))
        {
            int sipRes;

            sipRes = sipCpp->InsertAt(a0,a1);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_InsertAt, doc_FbxSurfaceMaterialArray_InsertAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_Add, "Add(self, FbxSurfaceMaterial) -> int");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_Add(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_Add(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialPtr a0;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, sipType_FbxSurfaceMaterial, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Add(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_Add, doc_FbxSurfaceMaterialArray_Add);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_AddUnique, "AddUnique(self, FbxSurfaceMaterial) -> int");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_AddUnique(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_AddUnique(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialPtr a0;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, sipType_FbxSurfaceMaterial, &a0))
        {
            int sipRes;

            sipRes = sipCpp->AddUnique(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_AddUnique, doc_FbxSurfaceMaterialArray_AddUnique);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_AddArray, "AddArray(self, FbxSurfaceMaterialArray)");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_AddArray(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_AddArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialArray* a0;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, sipType_FbxSurfaceMaterialArray, &a0))
        {
            sipCpp->AddArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_AddArray, doc_FbxSurfaceMaterialArray_AddArray);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_AddArrayNoDuplicate, "AddArrayNoDuplicate(self, FbxSurfaceMaterialArray)");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_AddArrayNoDuplicate(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_AddArrayNoDuplicate(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialArray* a0;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, sipType_FbxSurfaceMaterialArray, &a0))
        {
            sipCpp->AddArrayNoDuplicate(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_AddArrayNoDuplicate, doc_FbxSurfaceMaterialArray_AddArrayNoDuplicate);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_SetAt, "SetAt(self, int, FbxSurfaceMaterial)");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_SetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_SetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxSurfaceMaterialPtr a1;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BiJ8", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, &a0, sipType_FbxSurfaceMaterial, &a1))
        {
            sipCpp->SetAt(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_SetAt, doc_FbxSurfaceMaterialArray_SetAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_SetLast, "SetLast(self, FbxSurfaceMaterial)");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_SetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_SetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialPtr a0;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, sipType_FbxSurfaceMaterial, &a0))
        {
            sipCpp->SetLast(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_SetLast, doc_FbxSurfaceMaterialArray_SetLast);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_GetAt, "GetAt(self, int) -> FbxSurfaceMaterial");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_GetAt(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_GetAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
        const  ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, &a0))
        {
             ::FbxSurfaceMaterialPtr sipRes;

            sipRes = sipCpp->GetAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxSurfaceMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_GetAt, doc_FbxSurfaceMaterialArray_GetAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_GetFirst, "GetFirst(self) -> FbxSurfaceMaterial");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_GetFirst(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_GetFirst(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp))
        {
             ::FbxSurfaceMaterialPtr sipRes;

            sipRes = sipCpp->GetFirst();

            return sipConvertFromType(sipRes,sipType_FbxSurfaceMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_GetFirst, doc_FbxSurfaceMaterialArray_GetFirst);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_GetLast, "GetLast(self) -> FbxSurfaceMaterial");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_GetLast(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_GetLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp))
        {
             ::FbxSurfaceMaterialPtr sipRes;

            sipRes = sipCpp->GetLast();

            return sipConvertFromType(sipRes,sipType_FbxSurfaceMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_GetLast, doc_FbxSurfaceMaterialArray_GetLast);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_RemoveAt, "RemoveAt(self, int) -> FbxSurfaceMaterial");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_RemoveAt(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_RemoveAt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        int a0;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bi", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, &a0))
        {
             ::FbxSurfaceMaterialPtr sipRes;

            sipRes = sipCpp->RemoveAt(a0);

            return sipConvertFromType(sipRes,sipType_FbxSurfaceMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_RemoveAt, doc_FbxSurfaceMaterialArray_RemoveAt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_RemoveLast, "RemoveLast(self) -> FbxSurfaceMaterial");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_RemoveLast(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_RemoveLast(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp))
        {
             ::FbxSurfaceMaterialPtr sipRes;

            sipRes = sipCpp->RemoveLast();

            return sipConvertFromType(sipRes,sipType_FbxSurfaceMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_RemoveLast, doc_FbxSurfaceMaterialArray_RemoveLast);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_RemoveIt, "RemoveIt(self, FbxSurfaceMaterial) -> bool");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_RemoveIt(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_RemoveIt(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialPtr a0;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, sipType_FbxSurfaceMaterial, &a0))
        {
            bool sipRes;

            sipRes = sipCpp->RemoveIt(a0);

            return PyBool_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_RemoveIt, doc_FbxSurfaceMaterialArray_RemoveIt);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_RemoveArray, "RemoveArray(self, FbxSurfaceMaterialArray)");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_RemoveArray(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_RemoveArray(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialArray* a0;
         ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, sipType_FbxSurfaceMaterialArray, &a0))
        {
            sipCpp->RemoveArray(*a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_RemoveArray, doc_FbxSurfaceMaterialArray_RemoveArray);

    return NULL;
}


PyDoc_STRVAR(doc_FbxSurfaceMaterialArray_Find, "Find(self, FbxSurfaceMaterial) -> int");

extern "C" {static PyObject *meth_FbxSurfaceMaterialArray_Find(PyObject *, PyObject *);}
static PyObject *meth_FbxSurfaceMaterialArray_Find(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxSurfaceMaterialPtr a0;
        const  ::FbxSurfaceMaterialArray *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8", &sipSelf, sipType_FbxSurfaceMaterialArray, &sipCpp, sipType_FbxSurfaceMaterial, &a0))
        {
            int sipRes;

            sipRes = sipCpp->Find(a0);

            return SIPLong_FromLong(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName_Find, doc_FbxSurfaceMaterialArray_Find);

    return NULL;
}


extern "C" {static PyObject *slot_FbxSurfaceMaterialArray___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxSurfaceMaterialArray___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxSurfaceMaterialArray *sipCpp = reinterpret_cast< ::FbxSurfaceMaterialArray *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxSurfaceMaterialArray));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
             ::FbxSurfaceMaterialPtr sipRes = 0;
            int sipIsErr = 0;

#line 33 "/home/ke/Documents/expressive-humanoid/sip/fbxarray.sip"
        if (a0 < 0 || a0 >= sipCpp->GetCount())
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            fbxArrayElementCopy(&sipRes, (FbxSurfaceMaterialPtr*)NULL, sipCpp, a0);
        }
#line 529 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxSurfaceMaterialArray.cpp"

            if (sipIsErr)
                return 0;

            return sipConvertFromType(sipRes,sipType_FbxSurfaceMaterial,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxSurfaceMaterialArray, sipName___getitem__, NULL);

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxSurfaceMaterialArray(void *, int);}
static void release_FbxSurfaceMaterialArray(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxSurfaceMaterialArray *>(sipCppV);
}


extern "C" {static void assign_FbxSurfaceMaterialArray(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxSurfaceMaterialArray(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxSurfaceMaterialArray *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxSurfaceMaterialArray *>(sipSrc);
}


extern "C" {static void *array_FbxSurfaceMaterialArray(SIP_SSIZE_T);}
static void *array_FbxSurfaceMaterialArray(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxSurfaceMaterialArray[sipNrElem];
}


extern "C" {static void *copy_FbxSurfaceMaterialArray(const void *, SIP_SSIZE_T);}
static void *copy_FbxSurfaceMaterialArray(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxSurfaceMaterialArray(reinterpret_cast<const  ::FbxSurfaceMaterialArray *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxSurfaceMaterialArray(sipSimpleWrapper *);}
static void dealloc_FbxSurfaceMaterialArray(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxSurfaceMaterialArray(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxSurfaceMaterialArray(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxSurfaceMaterialArray(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxSurfaceMaterialArray *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxSurfaceMaterialArray();

            return sipCpp;
        }
    }

    {
        const  ::FbxSurfaceMaterialArray* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxSurfaceMaterialArray, &a0))
        {
            sipCpp = new  ::FbxSurfaceMaterialArray(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxSurfaceMaterialArray[] = {
    {(void *)slot_FbxSurfaceMaterialArray___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxSurfaceMaterialArray[] = {
    {SIP_MLNAME_CAST(sipName_Add), meth_FbxSurfaceMaterialArray_Add, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_Add)},
    {SIP_MLNAME_CAST(sipName_AddArray), meth_FbxSurfaceMaterialArray_AddArray, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_AddArray)},
    {SIP_MLNAME_CAST(sipName_AddArrayNoDuplicate), meth_FbxSurfaceMaterialArray_AddArrayNoDuplicate, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_AddArrayNoDuplicate)},
    {SIP_MLNAME_CAST(sipName_AddUnique), meth_FbxSurfaceMaterialArray_AddUnique, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_AddUnique)},
    {SIP_MLNAME_CAST(sipName_Find), meth_FbxSurfaceMaterialArray_Find, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_Find)},
    {SIP_MLNAME_CAST(sipName_GetAt), meth_FbxSurfaceMaterialArray_GetAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_GetAt)},
    {SIP_MLNAME_CAST(sipName_GetCount), meth_FbxSurfaceMaterialArray_GetCount, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_GetCount)},
    {SIP_MLNAME_CAST(sipName_GetFirst), meth_FbxSurfaceMaterialArray_GetFirst, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_GetFirst)},
    {SIP_MLNAME_CAST(sipName_GetLast), meth_FbxSurfaceMaterialArray_GetLast, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_GetLast)},
    {SIP_MLNAME_CAST(sipName_InsertAt), meth_FbxSurfaceMaterialArray_InsertAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_InsertAt)},
    {SIP_MLNAME_CAST(sipName_RemoveArray), meth_FbxSurfaceMaterialArray_RemoveArray, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_RemoveArray)},
    {SIP_MLNAME_CAST(sipName_RemoveAt), meth_FbxSurfaceMaterialArray_RemoveAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_RemoveAt)},
    {SIP_MLNAME_CAST(sipName_RemoveIt), meth_FbxSurfaceMaterialArray_RemoveIt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_RemoveIt)},
    {SIP_MLNAME_CAST(sipName_RemoveLast), meth_FbxSurfaceMaterialArray_RemoveLast, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_RemoveLast)},
    {SIP_MLNAME_CAST(sipName_SetAt), meth_FbxSurfaceMaterialArray_SetAt, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_SetAt)},
    {SIP_MLNAME_CAST(sipName_SetLast), meth_FbxSurfaceMaterialArray_SetLast, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxSurfaceMaterialArray_SetLast)}
};

PyDoc_STRVAR(doc_FbxSurfaceMaterialArray, "\1FbxSurfaceMaterialArray()\n"
    "FbxSurfaceMaterialArray(FbxSurfaceMaterialArray)");


sipClassTypeDef sipTypeDef_fbx_FbxSurfaceMaterialArray = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxSurfaceMaterialArray,
        {0},
        0
    },
    {
        sipNameNr_FbxSurfaceMaterialArray,
        {0, 0, 1},
        16, methods_FbxSurfaceMaterialArray,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxSurfaceMaterialArray,
    -1,
    -1,
    0,
    slots_FbxSurfaceMaterialArray,
    init_type_FbxSurfaceMaterialArray,
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
    dealloc_FbxSurfaceMaterialArray,
    assign_FbxSurfaceMaterialArray,
    array_FbxSurfaceMaterialArray,
    copy_FbxSurfaceMaterialArray,
    release_FbxSurfaceMaterialArray,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};