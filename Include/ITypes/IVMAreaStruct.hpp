/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IVMAreaStruct
{
private: 
    vm_area_struct_k _data;

public: 
    IVMAreaStruct();
    IVMAreaStruct(vm_area_struct_k buffer);

    #include "Macros/VariableVMAreaStruct.macros"
    #include "Macros/TypedVMAreaStruct.macros"


    vm_area_struct_k InternalBuffer() { return _data; }
    bool operator==(const IVMAreaStruct& other) const;
};

#include "Macros/0_cleanup.macros"
