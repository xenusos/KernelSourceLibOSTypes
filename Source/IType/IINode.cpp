/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IINode.hpp>

#define CFG_DEFINE_PS_TYPE_NAME inode
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IINode

#include "0_init.macros"

#include <ITypes/Macros/VariableINode.macros>
#include <ITypes/Macros/TypedINode.macros>

IINode::IINode() {}

IINode::IINode(inode_k buffer)
{
     _data = buffer;
}


bool IINode::operator==(const IINode& other) const
{
    return this->_data == other._data;
}
