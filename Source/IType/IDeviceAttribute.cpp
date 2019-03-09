/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDeviceAttribute.hpp>

#define CFG_DEFINE_PS_TYPE_NAME device_attribute
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDeviceAttribute

#include "0_init.macros"

#include <ITypes/Macros/VariableDeviceAttribute.macros>
#include <ITypes/Macros/TypedDeviceAttribute.macros>

IDeviceAttribute::IDeviceAttribute() {}

IDeviceAttribute::IDeviceAttribute(device_attribute_k buffer)
{
     _data = buffer;
}


bool IDeviceAttribute::operator==(const IDeviceAttribute& other) const
{
    return this->_data == other._data;
}
