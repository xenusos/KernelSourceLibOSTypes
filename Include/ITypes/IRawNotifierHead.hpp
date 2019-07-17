/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IRawNotifierHead
{
private: 
    raw_notifier_head_k _data;

public: 
    IRawNotifierHead();
    IRawNotifierHead(raw_notifier_head_k buffer);

    #include "Macros/VariableRawNotifierHead.macros"
    #include "Macros/TypedRawNotifierHead.macros"


    raw_notifier_head_k InternalBuffer() { return _data; }
    bool operator==(const IRawNotifierHead& other) const;
};

#include "Macros/0_cleanup.macros"
