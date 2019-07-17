/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbIsoPacketDescriptor.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_iso_packet_descriptor
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbIsoPacketDescriptor

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbIsoPacketDescriptor.macros>
#include <ITypes/Macros/TypedUsbIsoPacketDescriptor.macros>

IUsbIsoPacketDescriptor::IUsbIsoPacketDescriptor() {}

IUsbIsoPacketDescriptor::IUsbIsoPacketDescriptor(usb_iso_packet_descriptor_k buffer)
{
     _data = buffer;
}


bool IUsbIsoPacketDescriptor::operator==(const IUsbIsoPacketDescriptor& other) const
{
    return this->_data == other._data;
}
