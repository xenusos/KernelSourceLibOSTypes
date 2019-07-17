/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDeviceAttribute
{
private: 
    device_attribute_k _data;

public: 
    IDeviceAttribute();
    IDeviceAttribute(device_attribute_k buffer);

    #include "Macros/VariableDeviceAttribute.macros"
    #include "Macros/TypedDeviceAttribute.macros"


    device_attribute_k InternalBuffer() { return _data; }
    bool operator==(const IDeviceAttribute& other) const;
};

#include "Macros/0_cleanup.macros"
