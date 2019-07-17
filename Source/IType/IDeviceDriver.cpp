/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDeviceDriver.hpp>

#define CFG_DEFINE_PS_TYPE_NAME device_driver
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDeviceDriver

#include "0_init.macros"

#include <ITypes/Macros/VariableDeviceDriver.macros>
#include <ITypes/Macros/TypedDeviceDriver.macros>

IDeviceDriver::IDeviceDriver() {}

IDeviceDriver::IDeviceDriver(device_driver_k buffer)
{
     _data = buffer;
}


bool IDeviceDriver::operator==(const IDeviceDriver& other) const
{
    return this->_data == other._data;
}
