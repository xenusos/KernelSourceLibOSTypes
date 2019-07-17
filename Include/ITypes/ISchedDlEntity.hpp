/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedDlEntity
{
private: 
    sched_dl_entity_k _data;

public: 
    ISchedDlEntity();
    ISchedDlEntity(sched_dl_entity_k buffer);

    #include "Macros/VariableSchedDlEntity.macros"
    #include "Macros/TypedSchedDlEntity.macros"


    sched_dl_entity_k InternalBuffer() { return _data; }
    bool operator==(const ISchedDlEntity& other) const;
};

#include "Macros/0_cleanup.macros"
