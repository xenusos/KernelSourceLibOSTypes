/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IVMAreaStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME vm_area_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IVMAreaStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableVMAreaStruct.macros>
#include <ITypes/Macros/TypedVMAreaStruct.macros>

IVMAreaStruct::IVMAreaStruct() {}

IVMAreaStruct::IVMAreaStruct(vm_area_struct_k buffer)
{
     _data = buffer;
}


bool IVMAreaStruct::operator==(const IVMAreaStruct& other) const
{
    return this->_data == other._data;
}
