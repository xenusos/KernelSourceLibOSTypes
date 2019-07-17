/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbInterfaceAssocDescriptor
{
private: 
    usb_interface_assoc_descriptor_k _data;

public: 
    IUsbInterfaceAssocDescriptor();
    IUsbInterfaceAssocDescriptor(usb_interface_assoc_descriptor_k buffer);

    #include "Macros/VariableUsbInterfaceAssocDescriptor.macros"
    #include "Macros/TypedUsbInterfaceAssocDescriptor.macros"


    usb_interface_assoc_descriptor_k InternalBuffer() { return _data; }
    bool operator==(const IUsbInterfaceAssocDescriptor& other) const;
};

#include "Macros/0_cleanup.macros"
