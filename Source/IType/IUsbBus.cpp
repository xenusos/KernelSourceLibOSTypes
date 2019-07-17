/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbBus.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_bus
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbBus

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbBus.macros>
#include <ITypes/Macros/TypedUsbBus.macros>

IUsbBus::IUsbBus() {}

IUsbBus::IUsbBus(usb_bus_k buffer)
{
     _data = buffer;
}


bool IUsbBus::operator==(const IUsbBus& other) const
{
    return this->_data == other._data;
}
