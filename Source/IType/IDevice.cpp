/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDevice.hpp>

#define CFG_DEFINE_PS_TYPE_NAME device
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDevice

#include "0_init.macros"

#include <ITypes/Macros/VariableDevice.macros>
#include <ITypes/Macros/TypedDevice.macros>

IDevice::IDevice() {}

IDevice::IDevice(device_k buffer)
{
     _data = buffer;
}


bool IDevice::operator==(const IDevice& other) const
{
    return this->_data == other._data;
}
