/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbBus
{
private: 
    usb_bus_k _data;

public: 
    IUsbBus();
    IUsbBus(usb_bus_k buffer);

    #include "Macros/VariableUsbBus.macros"
    #include "Macros/TypedUsbBus.macros"


    usb_bus_k InternalBuffer() { return _data; }
    bool operator==(const IUsbBus& other) const;
};

#include "Macros/0_cleanup.macros"
