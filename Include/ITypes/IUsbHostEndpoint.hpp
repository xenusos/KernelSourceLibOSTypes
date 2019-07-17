/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbHostEndpoint
{
private: 
    usb_host_endpoint_k _data;

public: 
    IUsbHostEndpoint();
    IUsbHostEndpoint(usb_host_endpoint_k buffer);

    #include "Macros/VariableUsbHostEndpoint.macros"
    #include "Macros/TypedUsbHostEndpoint.macros"


    usb_host_endpoint_k InternalBuffer() { return _data; }
    bool operator==(const IUsbHostEndpoint& other) const;
};

#include "Macros/0_cleanup.macros"
