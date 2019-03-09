/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IAddressSpaceOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME address_space_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IAddressSpaceOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableAddressSpaceOperations.macros>
#include <ITypes/Macros/TypedAddressSpaceOperations.macros>

IAddressSpaceOperations::IAddressSpaceOperations() {}

IAddressSpaceOperations::IAddressSpaceOperations(address_space_operations_k buffer)
{
     _data = buffer;
}


bool IAddressSpaceOperations::operator==(const IAddressSpaceOperations& other) const
{
    return this->_data == other._data;
}
