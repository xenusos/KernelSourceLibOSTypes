/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbDeviceDriver.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_device_driver
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbDeviceDriver

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbDeviceDriver.macros>
#include <ITypes/Macros/TypedUsbDeviceDriver.macros>

IUsbDeviceDriver::IUsbDeviceDriver() {}

IUsbDeviceDriver::IUsbDeviceDriver(usb_device_driver_k buffer)
{
     _data = buffer;
}


bool IUsbDeviceDriver::operator==(const IUsbDeviceDriver& other) const
{
    return this->_data == other._data;
}
