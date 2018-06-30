/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IVMRegion
{
private: 
    vm_region_k _data;

public: 
    IVMRegion();
    IVMRegion(vm_region_k buffer);

    #include "Macros/VariableVMRegion.macros"
    #include "Macros/TypedVMRegion.macros"


    vm_region_k InternalBuffer() { return _data; }
    bool operator==(const IVMRegion& other) const;
};

#include "Macros/0_cleanup.macros"
