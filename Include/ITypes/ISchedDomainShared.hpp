/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedDomainShared
{
private: 
    sched_domain_shared_k _data;

public: 
    ISchedDomainShared();
    ISchedDomainShared(sched_domain_shared_k buffer);

    #include "Macros/VariableSchedDomainShared.macros"
    #include "Macros/TypedSchedDomainShared.macros"


    sched_domain_shared_k InternalBuffer() { return _data; }
    bool operator==(const ISchedDomainShared& other) const;
};

#include "Macros/0_cleanup.macros"
