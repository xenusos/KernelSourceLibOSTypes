/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedStatistics
{
private: 
    sched_statistics_k _data;

public: 
    ISchedStatistics();
    ISchedStatistics(sched_statistics_k buffer);

    #include "Macros/VariableSchedStatistics.macros"
    #include "Macros/TypedSchedStatistics.macros"


    sched_statistics_k InternalBuffer() { return _data; }
    bool operator==(const ISchedStatistics& other) const;
};

#include "Macros/0_cleanup.macros"
