/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IAddressSpace.hpp>

#define CFG_DEFINE_PS_TYPE_NAME address_space
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IAddressSpace

#include "0_init.macros"

#include <ITypes/Macros/VariableAddressSpace.macros>
#include <ITypes/Macros/TypedAddressSpace.macros>

IAddressSpace::IAddressSpace() {}

IAddressSpace::IAddressSpace(address_space_k buffer)
{
     _data = buffer;
}


bool IAddressSpace::operator==(const IAddressSpace& other) const
{
    return this->_data == other._data;
}
