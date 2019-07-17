/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbHostInterface.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_host_interface
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbHostInterface

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbHostInterface.macros>
#include <ITypes/Macros/TypedUsbHostInterface.macros>

IUsbHostInterface::IUsbHostInterface() {}

IUsbHostInterface::IUsbHostInterface(usb_host_interface_k buffer)
{
     _data = buffer;
}


bool IUsbHostInterface::operator==(const IUsbHostInterface& other) const
{
    return this->_data == other._data;
}
