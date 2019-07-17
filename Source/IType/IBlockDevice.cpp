/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IBlockDevice.hpp>

#define CFG_DEFINE_PS_TYPE_NAME block_device
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IBlockDevice

#include "0_init.macros"

#include <ITypes/Macros/VariableBlockDevice.macros>
#include <ITypes/Macros/TypedBlockDevice.macros>

IBlockDevice::IBlockDevice() {}

IBlockDevice::IBlockDevice(block_device_k buffer)
{
     _data = buffer;
}


bool IBlockDevice::operator==(const IBlockDevice& other) const
{
    return this->_data == other._data;
}
