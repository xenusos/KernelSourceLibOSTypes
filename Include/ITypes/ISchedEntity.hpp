/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedEntity
{
private: 
    sched_entity_k _data;

public: 
    ISchedEntity();
    ISchedEntity(sched_entity_k buffer);

    #include "Macros/VariableSchedEntity.macros"
    #include "Macros/TypedSchedEntity.macros"


    sched_entity_k InternalBuffer() { return _data; }
    bool operator==(const ISchedEntity& other) const;
};

#include "Macros/0_cleanup.macros"
