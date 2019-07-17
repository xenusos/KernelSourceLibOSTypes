/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbConfigDescriptor
{
private: 
    usb_config_descriptor_k _data;

public: 
    IUsbConfigDescriptor();
    IUsbConfigDescriptor(usb_config_descriptor_k buffer);

    #include "Macros/VariableUsbConfigDescriptor.macros"
    #include "Macros/TypedUsbConfigDescriptor.macros"


    usb_config_descriptor_k InternalBuffer() { return _data; }
    bool operator==(const IUsbConfigDescriptor& other) const;
};

#include "Macros/0_cleanup.macros"
