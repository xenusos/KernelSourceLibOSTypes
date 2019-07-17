/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDeviceType
{
private: 
    device_type_k _data;

public: 
    IDeviceType();
    IDeviceType(device_type_k buffer);

    #include "Macros/VariableDeviceType.macros"
    #include "Macros/TypedDeviceType.macros"


    device_type_k InternalBuffer() { return _data; }
    bool operator==(const IDeviceType& other) const;
};

#include "Macros/0_cleanup.macros"
