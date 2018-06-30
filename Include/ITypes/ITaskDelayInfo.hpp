/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ITaskDelayInfo
{
private: 
    task_delay_info_k _data;

public: 
    ITaskDelayInfo();
    ITaskDelayInfo(task_delay_info_k buffer);

    #include "Macros/VariableTaskDelayInfo.macros"
    #include "Macros/TypedTaskDelayInfo.macros"


    task_delay_info_k InternalBuffer() { return _data; }
    bool operator==(const ITaskDelayInfo& other) const;
};

#include "Macros/0_cleanup.macros"
