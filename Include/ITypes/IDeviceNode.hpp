/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDeviceNode
{
private: 
    device_node_k _data;

public: 
    IDeviceNode();
    IDeviceNode(device_node_k buffer);

    #include "Macros/VariableDeviceNode.macros"
    #include "Macros/TypedDeviceNode.macros"


    device_node_k InternalBuffer() { return _data; }
    bool operator==(const IDeviceNode& other) const;
};

#include "Macros/0_cleanup.macros"
