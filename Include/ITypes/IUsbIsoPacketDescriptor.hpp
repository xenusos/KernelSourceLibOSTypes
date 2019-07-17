/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbIsoPacketDescriptor
{
private: 
    usb_iso_packet_descriptor_k _data;

public: 
    IUsbIsoPacketDescriptor();
    IUsbIsoPacketDescriptor(usb_iso_packet_descriptor_k buffer);

    #include "Macros/VariableUsbIsoPacketDescriptor.macros"
    #include "Macros/TypedUsbIsoPacketDescriptor.macros"


    usb_iso_packet_descriptor_k InternalBuffer() { return _data; }
    bool operator==(const IUsbIsoPacketDescriptor& other) const;
};

#include "Macros/0_cleanup.macros"
