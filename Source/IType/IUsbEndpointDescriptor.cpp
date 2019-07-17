/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbEndpointDescriptor.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_endpoint_descriptor
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbEndpointDescriptor

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbEndpointDescriptor.macros>
#include <ITypes/Macros/TypedUsbEndpointDescriptor.macros>

IUsbEndpointDescriptor::IUsbEndpointDescriptor() {}

IUsbEndpointDescriptor::IUsbEndpointDescriptor(usb_endpoint_descriptor_k buffer)
{
     _data = buffer;
}


bool IUsbEndpointDescriptor::operator==(const IUsbEndpointDescriptor& other) const
{
    return this->_data == other._data;
}
