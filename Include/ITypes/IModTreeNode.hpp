/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IModTreeNode
{
private: 
    mod_tree_node_k _data;

public: 
    IModTreeNode();
    IModTreeNode(mod_tree_node_k buffer);

    #include "Macros/VariableModTreeNode.macros"
    #include "Macros/TypedModTreeNode.macros"


    mod_tree_node_k InternalBuffer() { return _data; }
    bool operator==(const IModTreeNode& other) const;
};

#include "Macros/0_cleanup.macros"
