/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IVMOperationsStruct
{
private: 
    vm_operations_struct_k _data;

public: 
    IVMOperationsStruct();
    IVMOperationsStruct(vm_operations_struct_k buffer);

    #include "Macros/VariableVMOperationsStruct.macros"
    #include "Macros/TypedVMOperationsStruct.macros"


    vm_operations_struct_k InternalBuffer() { return _data; }
    bool operator==(const IVMOperationsStruct& other) const;
};

#include "Macros/0_cleanup.macros"
