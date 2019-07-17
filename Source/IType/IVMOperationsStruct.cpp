/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IVMOperationsStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME vm_operations_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IVMOperationsStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableVMOperationsStruct.macros>
#include <ITypes/Macros/TypedVMOperationsStruct.macros>

IVMOperationsStruct::IVMOperationsStruct() {}

IVMOperationsStruct::IVMOperationsStruct(vm_operations_struct_k buffer)
{
     _data = buffer;
}


bool IVMOperationsStruct::operator==(const IVMOperationsStruct& other) const
{
    return this->_data == other._data;
}
