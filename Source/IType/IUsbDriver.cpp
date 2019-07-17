/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbDriver.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_driver
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbDriver

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbDriver.macros>
#include <ITypes/Macros/TypedUsbDriver.macros>

IUsbDriver::IUsbDriver() {}

IUsbDriver::IUsbDriver(usb_driver_k buffer)
{
     _data = buffer;
}


bool IUsbDriver::operator==(const IUsbDriver& other) const
{
    return this->_data == other._data;
}
