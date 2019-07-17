/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbHostEndpoint.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_host_endpoint
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbHostEndpoint

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbHostEndpoint.macros>
#include <ITypes/Macros/TypedUsbHostEndpoint.macros>

IUsbHostEndpoint::IUsbHostEndpoint() {}

IUsbHostEndpoint::IUsbHostEndpoint(usb_host_endpoint_k buffer)
{
     _data = buffer;
}


bool IUsbHostEndpoint::operator==(const IUsbHostEndpoint& other) const
{
    return this->_data == other._data;
}
