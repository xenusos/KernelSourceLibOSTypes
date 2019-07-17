/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IWakeQNode.hpp>

#define CFG_DEFINE_PS_TYPE_NAME wake_q_node
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IWakeQNode

#include "0_init.macros"

#include <ITypes/Macros/VariableWakeQNode.macros>
#include <ITypes/Macros/TypedWakeQNode.macros>

IWakeQNode::IWakeQNode() {}

IWakeQNode::IWakeQNode(wake_q_node_k buffer)
{
     _data = buffer;
}


bool IWakeQNode::operator==(const IWakeQNode& other) const
{
    return this->_data == other._data;
}
