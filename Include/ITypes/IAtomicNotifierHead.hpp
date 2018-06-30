/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IAtomicNotifierHead
{
private: 
    atomic_notifier_head_k _data;

public: 
    IAtomicNotifierHead();
    IAtomicNotifierHead(atomic_notifier_head_k buffer);

    #include "Macros/VariableAtomicNotifierHead.macros"
    #include "Macros/TypedAtomicNotifierHead.macros"


    atomic_notifier_head_k InternalBuffer() { return _data; }
    bool operator==(const IAtomicNotifierHead& other) const;
};

#include "Macros/0_cleanup.macros"
