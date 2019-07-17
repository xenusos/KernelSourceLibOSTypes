/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IVMSpecialMapping
{
private: 
    vm_special_mapping_k _data;

public: 
    IVMSpecialMapping();
    IVMSpecialMapping(vm_special_mapping_k buffer);

    #include "Macros/VariableVMSpecialMapping.macros"
    #include "Macros/TypedVMSpecialMapping.macros"


    vm_special_mapping_k InternalBuffer() { return _data; }
    bool operator==(const IVMSpecialMapping& other) const;
};

#include "Macros/0_cleanup.macros"
