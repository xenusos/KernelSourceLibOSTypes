/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedRtEntity
{
private: 
    sched_rt_entity_k _data;

public: 
    ISchedRtEntity();
    ISchedRtEntity(sched_rt_entity_k buffer);

    #include "Macros/VariableSchedRtEntity.macros"
    #include "Macros/TypedSchedRtEntity.macros"


    sched_rt_entity_k InternalBuffer() { return _data; }
    bool operator==(const ISchedRtEntity& other) const;
};

#include "Macros/0_cleanup.macros"
