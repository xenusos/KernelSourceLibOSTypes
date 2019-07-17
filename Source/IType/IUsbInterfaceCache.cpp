/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbInterfaceCache.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_interface_cache
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbInterfaceCache

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbInterfaceCache.macros>
#include <ITypes/Macros/TypedUsbInterfaceCache.macros>

IUsbInterfaceCache::IUsbInterfaceCache() {}

IUsbInterfaceCache::IUsbInterfaceCache(usb_interface_cache_k buffer)
{
     _data = buffer;
}


bool IUsbInterfaceCache::operator==(const IUsbInterfaceCache& other) const
{
    return this->_data == other._data;
}
