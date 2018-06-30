/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedDomain
{
private: 
    sched_domain_k _data;

public: 
    ISchedDomain();
    ISchedDomain(sched_domain_k buffer);

    #include "Macros/VariableSchedDomain.macros"
    #include "Macros/TypedSchedDomain.macros"


    sched_domain_k InternalBuffer() { return _data; }
    bool operator==(const ISchedDomain& other) const;
};

#include "Macros/0_cleanup.macros"
