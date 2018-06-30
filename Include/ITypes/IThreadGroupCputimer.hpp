/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IThreadGroupCputimer
{
private: 
    thread_group_cputimer_k _data;

public: 
    IThreadGroupCputimer();
    IThreadGroupCputimer(thread_group_cputimer_k buffer);

    #include "Macros/VariableThreadGroupCputimer.macros"
    #include "Macros/TypedThreadGroupCputimer.macros"


    thread_group_cputimer_k InternalBuffer() { return _data; }
    bool operator==(const IThreadGroupCputimer& other) const;
};

#include "Macros/0_cleanup.macros"
