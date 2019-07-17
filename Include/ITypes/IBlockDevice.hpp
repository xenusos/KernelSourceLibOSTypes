/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IBlockDevice
{
private: 
    block_device_k _data;

public: 
    IBlockDevice();
    IBlockDevice(block_device_k buffer);

    #include "Macros/VariableBlockDevice.macros"
    #include "Macros/TypedBlockDevice.macros"


    block_device_k InternalBuffer() { return _data; }
    bool operator==(const IBlockDevice& other) const;
};

#include "Macros/0_cleanup.macros"
