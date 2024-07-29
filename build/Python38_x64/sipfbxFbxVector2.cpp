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




PyDoc_STRVAR(doc_FbxVector2_Set, "Set(self, float, float)");

extern "C" {static PyObject *meth_FbxVector2_Set(PyObject *, PyObject *);}
static PyObject *meth_FbxVector2_Set(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = NULL;

    {
        double a0;
        double a1;
         ::FbxVector2 *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bdd", &sipSelf, sipType_FbxVector2, &sipCpp, &a0, &a1))
        {
            sipCpp->Set(a0,a1);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector2, sipName_Set, doc_FbxVector2_Set);

    return NULL;
}


extern "C" {static PyObject *slot_FbxVector2___repr__(PyObject *);}
static PyObject *slot_FbxVector2___repr__(PyObject *sipSelf)
{
     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 44 "/home/ke/Documents/expressive-humanoid/sip/fbxvector2.sip"
        char buf[256];
        sprintf(buf, "fbx.FbxVector2(%f, %f)", (*sipCpp)[0], (*sipCpp)[1]);
        sipRes = Py_BuildValue((char *)"s", buf);
#line 90 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxVector2.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxVector2___str__(PyObject *);}
static PyObject *slot_FbxVector2___str__(PyObject *sipSelf)
{
     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;


    {
        {
            PyObject * sipRes = 0;

#line 38 "/home/ke/Documents/expressive-humanoid/sip/fbxvector2.sip"
        char buf[256];
        sprintf(buf, "fbx.FbxVector2(%f, %f)", (*sipCpp)[0], (*sipCpp)[1]);
        sipRes = Py_BuildValue((char *)"s", buf);
#line 117 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxVector2.cpp"

            return sipRes;
        }
    }

    return 0;
}


extern "C" {static PyObject *slot_FbxVector2___div__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___div__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector2* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector2, &a0, &a1))
        {
             ::FbxVector2*sipRes;

            sipRes = new  ::FbxVector2((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector2,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, div_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector2___truediv__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___truediv__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector2* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector2, &a0, &a1))
        {
             ::FbxVector2*sipRes;

            sipRes = new  ::FbxVector2((*a0 / a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector2,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, truediv_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector2___ne__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___ne__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector2* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector2, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxVector2::operator!=(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, ne_slot, sipType_FbxVector2, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxVector2___eq__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___eq__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        const  ::FbxVector2* a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1J9", sipType_FbxVector2, &a0))
        {
            bool sipRes;

            sipRes = sipCpp-> ::FbxVector2::operator==(*a0);

            return PyBool_FromLong(sipRes);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, eq_slot, sipType_FbxVector2, sipSelf, sipArg);
}


extern "C" {static PyObject *slot_FbxVector2___idiv__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___idiv__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector2::operator/=(a0);

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


extern "C" {static PyObject *slot_FbxVector2___imul__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___imul__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector2::operator*=(a0);

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


extern "C" {static PyObject *slot_FbxVector2___mul__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___mul__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector2* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector2, &a0, &a1))
        {
             ::FbxVector2*sipRes;

            sipRes = new  ::FbxVector2((*a0 * a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector2,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, mul_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector2___isub__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___isub__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector2::operator-=(a0);

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


extern "C" {static PyObject *slot_FbxVector2___sub__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___sub__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector2* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector2, &a0, &a1))
        {
             ::FbxVector2*sipRes;

            sipRes = new  ::FbxVector2((*a0 - a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector2,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, sub_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector2___iadd__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___iadd__(PyObject *sipSelf,PyObject *sipArg)
{
    if (!PyObject_TypeCheck(sipSelf, sipTypeAsPyTypeObject(sipType_FbxVector2)))
    {
        Py_INCREF(Py_NotImplemented);
        return Py_NotImplemented;
    }

     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        double a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1d", &a0))
        {
            sipCpp-> ::FbxVector2::operator+=(a0);

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


extern "C" {static PyObject *slot_FbxVector2___add__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___add__(PyObject *sipArg0,PyObject *sipArg1)
{
    PyObject *sipParseErr = NULL;

    {
         ::FbxVector2* a0;
        double a1;

        if (sipParsePair(&sipParseErr, sipArg0, sipArg1, "J9d", sipType_FbxVector2, &a0, &a1))
        {
             ::FbxVector2*sipRes;

            sipRes = new  ::FbxVector2((*a0 + a1));

            return sipConvertFromNewType(sipRes,sipType_FbxVector2,NULL);
        }
    }

    Py_XDECREF(sipParseErr);

    if (sipParseErr == Py_None)
        return NULL;

    return sipPySlotExtend(&sipModuleAPI_fbx, add_slot, NULL, sipArg0, sipArg1);
}


extern "C" {static PyObject *slot_FbxVector2___getitem__(PyObject *,PyObject *);}
static PyObject *slot_FbxVector2___getitem__(PyObject *sipSelf,PyObject *sipArg)
{
     ::FbxVector2 *sipCpp = reinterpret_cast< ::FbxVector2 *>(sipGetCppPtr((sipSimpleWrapper *)sipSelf,sipType_FbxVector2));

    if (!sipCpp)
        return 0;

    PyObject *sipParseErr = NULL;

    {
        int a0;

        if (sipParseArgs(&sipParseErr, sipArg, "1i", &a0))
        {
            double sipRes = 0;
            int sipIsErr = 0;

#line 10 "/home/ke/Documents/expressive-humanoid/sip/fbxvector2.sip"
        if (a0 < 0 || a0 >= 2)
        {
            PyErr_Format(PyExc_IndexError, "sequence index out of range");
            sipIsErr = 1;
        }
        else
        {
            sipRes = sipCpp->operator[](a0);
        }
#line 519 "/home/ke/Documents/expressive-humanoid/build/Python38_x64/sipfbxFbxVector2.cpp"

            if (sipIsErr)
                return 0;

            return PyFloat_FromDouble(sipRes);
        }
    }

    /* Raise an exception if the arguments couldn't be parsed. */
    sipNoMethod(sipParseErr, sipName_FbxVector2, sipName___getitem__, NULL);

    return 0;
}


/* Call the instance's destructor. */
extern "C" {static void release_FbxVector2(void *, int);}
static void release_FbxVector2(void *sipCppV, int)
{
    delete reinterpret_cast< ::FbxVector2 *>(sipCppV);
}


extern "C" {static void assign_FbxVector2(void *, SIP_SSIZE_T, const void *);}
static void assign_FbxVector2(void *sipDst, SIP_SSIZE_T sipDstIdx, const void *sipSrc)
{
    reinterpret_cast< ::FbxVector2 *>(sipDst)[sipDstIdx] = *reinterpret_cast<const  ::FbxVector2 *>(sipSrc);
}


extern "C" {static void *array_FbxVector2(SIP_SSIZE_T);}
static void *array_FbxVector2(SIP_SSIZE_T sipNrElem)
{
    return new  ::FbxVector2[sipNrElem];
}


extern "C" {static void *copy_FbxVector2(const void *, SIP_SSIZE_T);}
static void *copy_FbxVector2(const void *sipSrc, SIP_SSIZE_T sipSrcIdx)
{
    return new  ::FbxVector2(reinterpret_cast<const  ::FbxVector2 *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_FbxVector2(sipSimpleWrapper *);}
static void dealloc_FbxVector2(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_FbxVector2(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_FbxVector2(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_FbxVector2(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::FbxVector2 *sipCpp = 0;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, ""))
        {
            sipCpp = new  ::FbxVector2();

            return sipCpp;
        }
    }

    {
        const  ::FbxVector2* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "J9", sipType_FbxVector2, &a0))
        {
            sipCpp = new  ::FbxVector2(*a0);

            return sipCpp;
        }
    }

    {
        double a0;
        double a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, NULL, sipUnused, "dd", &a0, &a1))
        {
            sipCpp = new  ::FbxVector2(a0,a1);

            return sipCpp;
        }
    }

    return NULL;
}


/* Define this type's Python slots. */
static sipPySlotDef slots_FbxVector2[] = {
    {(void *)slot_FbxVector2___repr__, repr_slot},
    {(void *)slot_FbxVector2___str__, str_slot},
    {(void *)slot_FbxVector2___div__, div_slot},
    {(void *)slot_FbxVector2___truediv__, truediv_slot},
    {(void *)slot_FbxVector2___ne__, ne_slot},
    {(void *)slot_FbxVector2___eq__, eq_slot},
    {(void *)slot_FbxVector2___idiv__, idiv_slot},
    {(void *)slot_FbxVector2___imul__, imul_slot},
    {(void *)slot_FbxVector2___mul__, mul_slot},
    {(void *)slot_FbxVector2___isub__, isub_slot},
    {(void *)slot_FbxVector2___sub__, sub_slot},
    {(void *)slot_FbxVector2___iadd__, iadd_slot},
    {(void *)slot_FbxVector2___add__, add_slot},
    {(void *)slot_FbxVector2___getitem__, getitem_slot},
    {0, (sipPySlotType)0}
};


static PyMethodDef methods_FbxVector2[] = {
    {SIP_MLNAME_CAST(sipName_Set), meth_FbxVector2_Set, METH_VARARGS, SIP_MLDOC_CAST(doc_FbxVector2_Set)}
};

PyDoc_STRVAR(doc_FbxVector2, "\1FbxVector2()\n"
    "FbxVector2(FbxVector2)\n"
    "FbxVector2(float, float)");


sipClassTypeDef sipTypeDef_fbx_FbxVector2 = {
    {
        -1,
        0,
        0,
        SIP_TYPE_CLASS,
        sipNameNr_FbxVector2,
        {0},
        0
    },
    {
        sipNameNr_FbxVector2,
        {0, 0, 1},
        1, methods_FbxVector2,
        0, 0,
        0, 0,
        {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    },
    doc_FbxVector2,
    -1,
    -1,
    0,
    slots_FbxVector2,
    init_type_FbxVector2,
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
    dealloc_FbxVector2,
    assign_FbxVector2,
    array_FbxVector2,
    copy_FbxVector2,
    release_FbxVector2,
    0,
    0,
    0,
    0,
    0,
    0,
    0
};