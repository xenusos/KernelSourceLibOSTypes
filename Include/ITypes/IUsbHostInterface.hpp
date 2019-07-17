/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbHostInterface
{
private: 
    usb_host_interface_k _data;

public: 
    IUsbHostInterface();
    IUsbHostInterface(usb_host_interface_k buffer);

    #include "Macros/VariableUsbHostInterface.macros"
    #include "Macros/TypedUsbHostInterface.macros"


    usb_host_interface_k InternalBuffer() { return _data; }
    bool operator==(const IUsbHostInterface& other) const;
};

#include "Macros/0_cleanup.macros"
