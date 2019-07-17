/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IIrqDomain
{
private: 
    irq_domain_k _data;

public: 
    IIrqDomain();
    IIrqDomain(irq_domain_k buffer);

    #include "Macros/VariableIrqDomain.macros"
    #include "Macros/TypedIrqDomain.macros"


    irq_domain_k InternalBuffer() { return _data; }
    bool operator==(const IIrqDomain& other) const;
};

#include "Macros/0_cleanup.macros"
