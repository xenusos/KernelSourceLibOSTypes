/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbConfigDescriptor.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_config_descriptor
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbConfigDescriptor

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbConfigDescriptor.macros>
#include <ITypes/Macros/TypedUsbConfigDescriptor.macros>

IUsbConfigDescriptor::IUsbConfigDescriptor() {}

IUsbConfigDescriptor::IUsbConfigDescriptor(usb_config_descriptor_k buffer)
{
     _data = buffer;
}


bool IUsbConfigDescriptor::operator==(const IUsbConfigDescriptor& other) const
{
    return this->_data == other._data;
}
