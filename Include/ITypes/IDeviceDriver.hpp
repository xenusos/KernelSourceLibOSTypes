/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDeviceDriver
{
private: 
    device_driver_k _data;

public: 
    IDeviceDriver();
    IDeviceDriver(device_driver_k buffer);

    #include "Macros/VariableDeviceDriver.macros"
    #include "Macros/TypedDeviceDriver.macros"


    device_driver_k InternalBuffer() { return _data; }
    bool operator==(const IDeviceDriver& other) const;
};

#include "Macros/0_cleanup.macros"
