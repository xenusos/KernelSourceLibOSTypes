/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbHostConfig
{
private: 
    usb_host_config_k _data;

public: 
    IUsbHostConfig();
    IUsbHostConfig(usb_host_config_k buffer);

    #include "Macros/VariableUsbHostConfig.macros"
    #include "Macros/TypedUsbHostConfig.macros"


    usb_host_config_k InternalBuffer() { return _data; }
    bool operator==(const IUsbHostConfig& other) const;
};

#include "Macros/0_cleanup.macros"
