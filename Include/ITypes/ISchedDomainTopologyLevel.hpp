/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedDomainTopologyLevel
{
private: 
    sched_domain_topology_level_k _data;

public: 
    ISchedDomainTopologyLevel();
    ISchedDomainTopologyLevel(sched_domain_topology_level_k buffer);

    #include "Macros/VariableSchedDomainTopologyLevel.macros"
    #include "Macros/TypedSchedDomainTopologyLevel.macros"


    sched_domain_topology_level_k InternalBuffer() { return _data; }
    bool operator==(const ISchedDomainTopologyLevel& other) const;
};

#include "Macros/0_cleanup.macros"
