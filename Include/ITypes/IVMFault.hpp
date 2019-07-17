/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IVMFault
{
private: 
    vm_fault_k _data;

public: 
    IVMFault();
    IVMFault(vm_fault_k buffer);

    #include "Macros/VariableVMFault.macros"
    #include "Macros/TypedVMFault.macros"


    vm_fault_k InternalBuffer() { return _data; }
    bool operator==(const IVMFault& other) const;
};

#include "Macros/0_cleanup.macros"
