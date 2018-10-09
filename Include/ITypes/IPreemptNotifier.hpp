/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPreemptNotifier
{
private: 
    preempt_notifier_k _data;

public: 
    IPreemptNotifier();
    IPreemptNotifier(preempt_notifier_k buffer);

    #include "Macros/VariablePreemptNotifier.macros"
    #include "Macros/TypedPreemptNotifier.macros"


    preempt_notifier_k InternalBuffer() { return _data; }
    bool operator==(const IPreemptNotifier& other) const;
};

#include "Macros/0_cleanup.macros"
