/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDevice
{
private: 
    device_k _data;

public: 
    IDevice();
    IDevice(device_k buffer);

    #include "Macros/VariableDevice.macros"
    #include "Macros/TypedDevice.macros"


    device_k InternalBuffer() { return _data; }
    bool operator==(const IDevice& other) const;
};

#include "Macros/0_cleanup.macros"
