/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbInterface.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_interface
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbInterface

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbInterface.macros>
#include <ITypes/Macros/TypedUsbInterface.macros>

IUsbInterface::IUsbInterface() {}

IUsbInterface::IUsbInterface(usb_interface_k buffer)
{
     _data = buffer;
}


bool IUsbInterface::operator==(const IUsbInterface& other) const
{
    return this->_data == other._data;
}
