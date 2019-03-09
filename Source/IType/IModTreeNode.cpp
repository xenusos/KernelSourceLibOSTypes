/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IModTreeNode.hpp>

#define CFG_DEFINE_PS_TYPE_NAME mod_tree_node
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IModTreeNode

#include "0_init.macros"

#include <ITypes/Macros/VariableModTreeNode.macros>
#include <ITypes/Macros/TypedModTreeNode.macros>

IModTreeNode::IModTreeNode() {}

IModTreeNode::IModTreeNode(mod_tree_node_k buffer)
{
     _data = buffer;
}


bool IModTreeNode::operator==(const IModTreeNode& other) const
{
    return this->_data == other._data;
}
