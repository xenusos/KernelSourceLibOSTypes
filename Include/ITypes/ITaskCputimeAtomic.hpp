/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ITaskCputimeAtomic
{
private: 
    task_cputime_atomic_k _data;

public: 
    ITaskCputimeAtomic();
    ITaskCputimeAtomic(task_cputime_atomic_k buffer);

    #include "Macros/VariableTaskCputimeAtomic.macros"
    #include "Macros/TypedTaskCputimeAtomic.macros"


    task_cputime_atomic_k InternalBuffer() { return _data; }
    bool operator==(const ITaskCputimeAtomic& other) const;
};

#include "Macros/0_cleanup.macros"
