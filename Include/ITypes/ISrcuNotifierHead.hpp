/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISrcuNotifierHead
{
private: 
    srcu_notifier_head_k _data;

public: 
    ISrcuNotifierHead();
    ISrcuNotifierHead(srcu_notifier_head_k buffer);

    #include "Macros/VariableSrcuNotifierHead.macros"
    #include "Macros/TypedSrcuNotifierHead.macros"


    srcu_notifier_head_k InternalBuffer() { return _data; }
    bool operator==(const ISrcuNotifierHead& other) const;
};

#include "Macros/0_cleanup.macros"
