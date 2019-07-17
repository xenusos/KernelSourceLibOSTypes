/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbHostConfig.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_host_config
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbHostConfig

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbHostConfig.macros>
#include <ITypes/Macros/TypedUsbHostConfig.macros>

IUsbHostConfig::IUsbHostConfig() {}

IUsbHostConfig::IUsbHostConfig(usb_host_config_k buffer)
{
     _data = buffer;
}


bool IUsbHostConfig::operator==(const IUsbHostConfig& other) const
{
    return this->_data == other._data;
}
