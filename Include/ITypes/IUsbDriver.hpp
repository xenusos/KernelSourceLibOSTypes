/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbDriver
{
private: 
    usb_driver_k _data;

public: 
    IUsbDriver();
    IUsbDriver(usb_driver_k buffer);

    #include "Macros/VariableUsbDriver.macros"
    #include "Macros/TypedUsbDriver.macros"


    usb_driver_k InternalBuffer() { return _data; }
    bool operator==(const IUsbDriver& other) const;
};

#include "Macros/0_cleanup.macros"
