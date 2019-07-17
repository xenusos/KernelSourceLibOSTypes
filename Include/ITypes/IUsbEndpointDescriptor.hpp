/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbEndpointDescriptor
{
private: 
    usb_endpoint_descriptor_k _data;

public: 
    IUsbEndpointDescriptor();
    IUsbEndpointDescriptor(usb_endpoint_descriptor_k buffer);

    #include "Macros/VariableUsbEndpointDescriptor.macros"
    #include "Macros/TypedUsbEndpointDescriptor.macros"


    usb_endpoint_descriptor_k InternalBuffer() { return _data; }
    bool operator==(const IUsbEndpointDescriptor& other) const;
};

#include "Macros/0_cleanup.macros"
