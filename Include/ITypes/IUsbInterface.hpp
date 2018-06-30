/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbInterface
{
private: 
    usb_interface_k _data;

public: 
    IUsbInterface();
    IUsbInterface(usb_interface_k buffer);

    #include "Macros/VariableUsbInterface.macros"
    #include "Macros/TypedUsbInterface.macros"


    usb_interface_k InternalBuffer() { return _data; }
    bool operator==(const IUsbInterface& other) const;
};

#include "Macros/0_cleanup.macros"
