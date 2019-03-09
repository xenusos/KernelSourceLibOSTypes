/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbSsEpCompDescriptor.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_ss_ep_comp_descriptor
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbSsEpCompDescriptor

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbSsEpCompDescriptor.macros>
#include <ITypes/Macros/TypedUsbSsEpCompDescriptor.macros>

IUsbSsEpCompDescriptor::IUsbSsEpCompDescriptor() {}

IUsbSsEpCompDescriptor::IUsbSsEpCompDescriptor(usb_ss_ep_comp_descriptor_k buffer)
{
     _data = buffer;
}


bool IUsbSsEpCompDescriptor::operator==(const IUsbSsEpCompDescriptor& other) const
{
    return this->_data == other._data;
}
