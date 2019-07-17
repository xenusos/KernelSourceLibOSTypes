/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IBlockingNotifierHead
{
private: 
    blocking_notifier_head_k _data;

public: 
    IBlockingNotifierHead();
    IBlockingNotifierHead(blocking_notifier_head_k buffer);

    #include "Macros/VariableBlockingNotifierHead.macros"
    #include "Macros/TypedBlockingNotifierHead.macros"


    blocking_notifier_head_k InternalBuffer() { return _data; }
    bool operator==(const IBlockingNotifierHead& other) const;
};

#include "Macros/0_cleanup.macros"
