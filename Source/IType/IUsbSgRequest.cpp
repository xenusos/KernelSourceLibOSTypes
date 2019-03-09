/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbSgRequest.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_sg_request
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbSgRequest

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbSgRequest.macros>
#include <ITypes/Macros/TypedUsbSgRequest.macros>

IUsbSgRequest::IUsbSgRequest() {}

IUsbSgRequest::IUsbSgRequest(usb_sg_request_k buffer)
{
     _data = buffer;
}


bool IUsbSgRequest::operator==(const IUsbSgRequest& other) const
{
    return this->_data == other._data;
}
