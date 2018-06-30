/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IWakeQNode
{
private: 
    wake_q_node_k _data;

public: 
    IWakeQNode();
    IWakeQNode(wake_q_node_k buffer);

    #include "Macros/VariableWakeQNode.macros"
    #include "Macros/TypedWakeQNode.macros"


    wake_q_node_k InternalBuffer() { return _data; }
    bool operator==(const IWakeQNode& other) const;
};

#include "Macros/0_cleanup.macros"
