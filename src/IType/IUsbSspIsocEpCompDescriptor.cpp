/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbSspIsocEpCompDescriptor.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_ssp_isoc_ep_comp_descriptor
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbSspIsocEpCompDescriptor

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbSspIsocEpCompDescriptor.macros>
#include <ITypes/Macros/TypedUsbSspIsocEpCompDescriptor.macros>

IUsbSspIsocEpCompDescriptor::IUsbSspIsocEpCompDescriptor() {}

IUsbSspIsocEpCompDescriptor::IUsbSspIsocEpCompDescriptor(usb_ssp_isoc_ep_comp_descriptor_k buffer)
{
     _data = buffer;
}


bool IUsbSspIsocEpCompDescriptor::operator==(const IUsbSspIsocEpCompDescriptor& other) const
{
    return this->_data == other._data;
}
