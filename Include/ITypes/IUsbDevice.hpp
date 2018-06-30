/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbDevice
{
private: 
    usb_device_k _data;

public: 
    IUsbDevice();
    IUsbDevice(usb_device_k buffer);

    #include "Macros/VariableUsbDevice.macros"
    #include "Macros/TypedUsbDevice.macros"


    usb_device_k InternalBuffer() { return _data; }
    bool operator==(const IUsbDevice& other) const;
};

#include "Macros/0_cleanup.macros"
