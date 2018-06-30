/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDeviceNode.hpp>

#define CFG_DEFINE_PS_TYPE_NAME device_node
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDeviceNode

#include "0_init.macros"

#include <ITypes/Macros/VariableDeviceNode.macros>
#include <ITypes/Macros/TypedDeviceNode.macros>

IDeviceNode::IDeviceNode() {}

IDeviceNode::IDeviceNode(device_node_k buffer)
{
     _data = buffer;
}


bool IDeviceNode::operator==(const IDeviceNode& other) const
{
    return this->_data == other._data;
}
