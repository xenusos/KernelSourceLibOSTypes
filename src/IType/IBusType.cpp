/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IBusType.hpp>

#define CFG_DEFINE_PS_TYPE_NAME bus_type
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IBusType

#include "0_init.macros"

#include <ITypes/Macros/VariableBusType.macros>
#include <ITypes/Macros/TypedBusType.macros>

IBusType::IBusType() {}

IBusType::IBusType(bus_type_k buffer)
{
     _data = buffer;
}


bool IBusType::operator==(const IBusType& other) const
{
    return this->_data == other._data;
}
