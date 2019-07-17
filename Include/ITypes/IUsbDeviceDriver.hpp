/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbDeviceDriver
{
private: 
    usb_device_driver_k _data;

public: 
    IUsbDeviceDriver();
    IUsbDeviceDriver(usb_device_driver_k buffer);

    #include "Macros/VariableUsbDeviceDriver.macros"
    #include "Macros/TypedUsbDeviceDriver.macros"


    usb_device_driver_k InternalBuffer() { return _data; }
    bool operator==(const IUsbDeviceDriver& other) const;
};

#include "Macros/0_cleanup.macros"
