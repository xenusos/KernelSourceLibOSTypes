/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFWNodeOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME fwnode_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFWNodeOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableFWNodeOperations.macros>
#include <ITypes/Macros/TypedFWNodeOperations.macros>

IFWNodeOperations::IFWNodeOperations() {}

IFWNodeOperations::IFWNodeOperations(fwnode_operations_k buffer)
{
     _data = buffer;
}


bool IFWNodeOperations::operator==(const IFWNodeOperations& other) const
{
    return this->_data == other._data;
}
