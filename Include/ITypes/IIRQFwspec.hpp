/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IIRQFwspec
{
private: 
    irq_fwspec_k _data;

public: 
    IIRQFwspec();
    IIRQFwspec(irq_fwspec_k buffer);

    #include "Macros/VariableIRQFwspec.macros"
    #include "Macros/TypedIRQFwspec.macros"


    irq_fwspec_k InternalBuffer() { return _data; }
    bool operator==(const IIRQFwspec& other) const;
};

#include "Macros/0_cleanup.macros"
