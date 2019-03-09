/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbAnchor.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_anchor
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbAnchor

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbAnchor.macros>
#include <ITypes/Macros/TypedUsbAnchor.macros>

IUsbAnchor::IUsbAnchor() {}

IUsbAnchor::IUsbAnchor(usb_anchor_k buffer)
{
     _data = buffer;
}


bool IUsbAnchor::operator==(const IUsbAnchor& other) const
{
    return this->_data == other._data;
}
