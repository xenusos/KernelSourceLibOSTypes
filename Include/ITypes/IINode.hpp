/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IINode
{
private: 
    inode_k _data;

public: 
    IINode();
    IINode(inode_k buffer);

    #include "Macros/VariableINode.macros"
    #include "Macros/TypedINode.macros"


    inode_k InternalBuffer() { return _data; }
    bool operator==(const IINode& other) const;
};

#include "Macros/0_cleanup.macros"
