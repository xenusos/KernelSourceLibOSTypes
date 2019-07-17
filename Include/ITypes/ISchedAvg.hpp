/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedAvg
{
private: 
    sched_avg_k _data;

public: 
    ISchedAvg();
    ISchedAvg(sched_avg_k buffer);

    #include "Macros/VariableSchedAvg.macros"
    #include "Macros/TypedSchedAvg.macros"


    sched_avg_k InternalBuffer() { return _data; }
    bool operator==(const ISchedAvg& other) const;
};

#include "Macros/0_cleanup.macros"
