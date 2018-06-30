/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbHostBos.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_host_bos
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbHostBos

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbHostBos.macros>
#include <ITypes/Macros/TypedUsbHostBos.macros>

IUsbHostBos::IUsbHostBos() {}

IUsbHostBos::IUsbHostBos(usb_host_bos_k buffer)
{
     _data = buffer;
}


bool IUsbHostBos::operator==(const IUsbHostBos& other) const
{
    return this->_data == other._data;
}
