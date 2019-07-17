/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class INotifierBlock
{
private: 
    notifier_block_k _data;

public: 
    INotifierBlock();
    INotifierBlock(notifier_block_k buffer);

    #include "Macros/VariableNotifierBlock.macros"
    #include "Macros/TypedNotifierBlock.macros"


    notifier_block_k InternalBuffer() { return _data; }
    bool operator==(const INotifierBlock& other) const;
};

#include "Macros/0_cleanup.macros"
