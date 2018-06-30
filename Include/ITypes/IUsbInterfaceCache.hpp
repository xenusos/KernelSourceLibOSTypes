/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbInterfaceCache
{
private: 
    usb_interface_cache_k _data;

public: 
    IUsbInterfaceCache();
    IUsbInterfaceCache(usb_interface_cache_k buffer);

    #include "Macros/VariableUsbInterfaceCache.macros"
    #include "Macros/TypedUsbInterfaceCache.macros"


    usb_interface_cache_k InternalBuffer() { return _data; }
    bool operator==(const IUsbInterfaceCache& other) const;
};

#include "Macros/0_cleanup.macros"
