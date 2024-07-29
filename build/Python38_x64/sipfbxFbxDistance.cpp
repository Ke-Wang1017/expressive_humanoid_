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




PyDoc_STRVAR(doc_FbxDistance_unitName, "unitName(self) -> FbxString");

extern "C" {static PyObject *meth_FbxDistance_unitName(PyObject *, PyObject *);}
static PyObject *meth_FbxDistance_unitName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDistance *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDistance, &sipCpp))
        {
             ::FbxString*sipRes;

            sipRes = new  ::FbxString(sipCpp->unitName());

            return sipConvertFromNewType(sipRes,sipType_FbxString,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDistance, sipName_unitName, doc_FbxDistance_unitName);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDistance_unit, "unit(self) -> FbxSystemUnit");

extern "C" {static PyObject *meth_FbxDistance_unit(PyObject *, PyObject *);}
static PyObject *meth_FbxDistance_unit(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDistance *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDistance, &sipCpp))
        {
             ::FbxSystemUnit*sipRes;

            sipRes = new  ::FbxSystemUnit(sipCpp->unit());

            return sipConvertFromNewType(sipRes,sipType_FbxSystemUnit,NULL);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDistance, sipName_unit, doc_FbxDistance_unit);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDistance_value, "value(self) -> float");

extern "C" {static PyObject *meth_FbxDistance_value(PyObject *, PyObject *);}
static PyObject *meth_FbxDistance_value(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDistance *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDistance, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->value();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDistance, sipName_value, doc_FbxDistance_value);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDistance_internalValue, "internalValue(self) -> float");

extern "C" {static PyObject *meth_FbxDistance_internalValue(PyObject *, PyObject *);}
static PyObject *meth_FbxDistance_internalValue(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDistance *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_FbxDistance, &sipCpp))
        {
            float sipRes;

            sipRes = sipCpp->internalValue();

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDistance, sipName_internalValue, doc_FbxDistance_internalValue);

    return NULL;
}


PyDoc_STRVAR(doc_FbxDistance_valueAs, "valueAs(self, FbxSystemUnit) -> float");

extern "C" {static PyObject *meth_FbxDistance_valueAs(PyObject *, PyObject *);}
static PyObject *meth_FbxDistance_valueAs(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        const  ::FbxSystemUnit* a0;
        const  ::FbxDistance *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_FbxDistance, &sipCpp, sipType_FbxSystemUnit, &a0))
        {
            float sipRes;

            sipRes = sipCpp->valueAs(*a0);

            return PyFloat_FromDouble((double)sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxDistance, sipName_valueAs, doc_FbxDistance_valueAs);

    return NULL;
}


extern "C" {static PyObject *slot_FbxDistance___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxDistance___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDistance *sipCpp = reinterpret_cast< ::FbxDistance *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDistance));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDistance* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxDistance, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxDistance::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxDistance, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxDistance___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxDistance___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxDistance *sipCpp = reinterpret_cast< ::FbxDistance *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxDistance));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxDistance* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxDistance, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxDistance::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxDistance, sipSelf, sipArg);
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxDistance(void *, int);}
static void release_FbxDistance(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxDistance *>(sipCppV);
}


extern "C" {static void assign_FbxDistance(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxDistance(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxDistance *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxDistance *>(sipSrc);
}


extern "C" {static void *array_FbxDistance(SIP_SSIZE_T);}
static void *array_FbxDistance(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxDistance[sipNrElem];
}


extern "C" {static void *copy_FbxDistance(const void *, SIP_SSIZE_T);}
static void *copy_FbxDistance(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxDistance(reinterpret_cast<const  ::FbxDistance *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxDistance(sipSimpleWrapper *);}
static void dealloc_FbxDistance(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxDistance(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxDistance(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxDistance(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxDistance *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxDistance();

            return sipCpp;
        }
    }

    {
        float a0;
         ::FbxSystemUnit* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "fJ9", &a0, sipType_FbxSystemUnit, &a1))
        {
            sipCpp = new  ::FbxDistance(a0,*a1);

            return sipCpp;
        }
    }

    {
        float a0;
        const char* a1;
        PyObject *a1Keep;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "fA8", &a0, &a1Keep, &a1))
        {
            sipCpp = new  ::FbxDistance(a0,a1);
            Py_DECREF(a1Keep);

            return sipCpp;
        }
    }

    {
        const  ::FbxDistance* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxDistance, &a0))
        {
            sipCpp = new  ::FbxDistance(*a0);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxDistance[] = {
    {(void *)slot_FbxDistance___ne__, ne_slot},
    {(void *)slot_FbxDistance___eq__, eq_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxDistance[] = {
    {SIP_MLNAME_CAST(sipName_internalValue), meth_FbxDistance_internalValue, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDistance_internalValue)},
    {SIP_MLNAME_CAST(sipName_unit), meth_FbxDistance_unit, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDistance_unit)},
    {SIP_MLNAME_CAST(sipName_unitName), meth_FbxDistance_unitName, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDistance_unitName)},
    {SIP_MLNAME_CAST(sipName_value), meth_FbxDistance_value, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDistance_value)},
    {SIP_MLNAME_CAST(sipName_valueAs), meth_FbxDistance_valueAs, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxDistance_valueAs)}
};

PyDoc_STRVAR(doc_FbxDistance, "\1FbxDistance()\n"
    "FbxDistance(float, FbxSystemUnit)\n"
    "FbxDistance(float, str)\n"
    "FbxDistance(FbxDistance)");


sipClassTypeDef sipTypeDef_fbx_FbxDistance = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxDistance,
        {0},
        0
    },
    {
        sipNameNr_FbxDistance,
        {0, 0, 1},
        5, methods_FbxDistance,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxDistance,
    -1,
    -1,
    0,
    slots_FbxDistance,
    init_type_FbxDistance,
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
    dealloc_FbxDistance,
    assign_FbxDistance,
    array_FbxDistance,
    copy_FbxDistance,
    release_FbxDistance,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};