/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IBusAttribute.hpp>

#define CFG_DEFINE_PS_TYPE_NAME bus_attribute
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IBusAttribute

#include "0_init.macros"

#include <ITypes/Macros/VariableBusAttribute.macros>
#include <ITypes/Macros/TypedBusAttribute.macros>

IBusAttribute::IBusAttribute() {}

IBusAttribute::IBusAttribute(bus_attribute_k buffer)
{
     _data = buffer;
}


bool IBusAttribute::operator==(const IBusAttribute& other) const
{
    return this->_data == other._data;
}
