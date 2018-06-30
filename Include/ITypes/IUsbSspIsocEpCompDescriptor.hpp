/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbSspIsocEpCompDescriptor
{
private: 
    usb_ssp_isoc_ep_comp_descriptor_k _data;

public: 
    IUsbSspIsocEpCompDescriptor();
    IUsbSspIsocEpCompDescriptor(usb_ssp_isoc_ep_comp_descriptor_k buffer);

    #include "Macros/VariableUsbSspIsocEpCompDescriptor.macros"
    #include "Macros/TypedUsbSspIsocEpCompDescriptor.macros"


    usb_ssp_isoc_ep_comp_descriptor_k InternalBuffer() { return _data; }
    bool operator==(const IUsbSspIsocEpCompDescriptor& other) const;
};

#include "Macros/0_cleanup.macros"
