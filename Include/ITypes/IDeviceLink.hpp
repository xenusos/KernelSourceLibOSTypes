/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDeviceLink
{
private: 
    device_link_k _data;

public: 
    IDeviceLink();
    IDeviceLink(device_link_k buffer);

    #include "Macros/VariableDeviceLink.macros"
    #include "Macros/TypedDeviceLink.macros"


    device_link_k InternalBuffer() { return _data; }
    bool operator==(const IDeviceLink& other) const;
};

#include "Macros/0_cleanup.macros"
