/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDeviceLink.hpp>

#define CFG_DEFINE_PS_TYPE_NAME device_link
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDeviceLink

#include "0_init.macros"

#include <ITypes/Macros/VariableDeviceLink.macros>
#include <ITypes/Macros/TypedDeviceLink.macros>

IDeviceLink::IDeviceLink() {}

IDeviceLink::IDeviceLink(device_link_k buffer)
{
     _data = buffer;
}


bool IDeviceLink::operator==(const IDeviceLink& other) const
{
    return this->_data == other._data;
}
