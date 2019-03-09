/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDeviceType.hpp>

#define CFG_DEFINE_PS_TYPE_NAME device_type
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDeviceType

#include "0_init.macros"

#include <ITypes/Macros/VariableDeviceType.macros>
#include <ITypes/Macros/TypedDeviceType.macros>

IDeviceType::IDeviceType() {}

IDeviceType::IDeviceType(device_type_k buffer)
{
     _data = buffer;
}


bool IDeviceType::operator==(const IDeviceType& other) const
{
    return this->_data == other._data;
}
