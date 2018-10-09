/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISchedAttr
{
private: 
    sched_attr_k _data;

public: 
    ISchedAttr();
    ISchedAttr(sched_attr_k buffer);

    #include "Macros/VariableSchedAttr.macros"
    #include "Macros/TypedSchedAttr.macros"


    sched_attr_k InternalBuffer() { return _data; }
    bool operator==(const ISchedAttr& other) const;
};

#include "Macros/0_cleanup.macros"
