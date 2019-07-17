/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbSsEpCompDescriptor
{
private: 
    usb_ss_ep_comp_descriptor_k _data;

public: 
    IUsbSsEpCompDescriptor();
    IUsbSsEpCompDescriptor(usb_ss_ep_comp_descriptor_k buffer);

    #include "Macros/VariableUsbSsEpCompDescriptor.macros"
    #include "Macros/TypedUsbSsEpCompDescriptor.macros"


    usb_ss_ep_comp_descriptor_k InternalBuffer() { return _data; }
    bool operator==(const IUsbSsEpCompDescriptor& other) const;
};

#include "Macros/0_cleanup.macros"
