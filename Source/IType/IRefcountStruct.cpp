/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IRefcountStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME refcount_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IRefcountStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableRefcountStruct.macros>
#include <ITypes/Macros/TypedRefcountStruct.macros>

IRefcountStruct::IRefcountStruct() {}

IRefcountStruct::IRefcountStruct(refcount_struct_k buffer)
{
     _data = buffer;
}


bool IRefcountStruct::operator==(const IRefcountStruct& other) const
{
    return this->_data == other._data;
}
