/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IINodeOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME inode_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IINodeOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableINodeOperations.macros>
#include <ITypes/Macros/TypedINodeOperations.macros>

IINodeOperations::IINodeOperations() {}

IINodeOperations::IINodeOperations(inode_operations_k buffer)
{
     _data = buffer;
}


bool IINodeOperations::operator==(const IINodeOperations& other) const
{
    return this->_data == other._data;
}
