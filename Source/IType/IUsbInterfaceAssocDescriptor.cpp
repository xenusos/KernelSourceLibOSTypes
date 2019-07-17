/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUsbInterfaceAssocDescriptor.hpp>

#define CFG_DEFINE_PS_TYPE_NAME usb_interface_assoc_descriptor
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUsbInterfaceAssocDescriptor

#include "0_init.macros"

#include <ITypes/Macros/VariableUsbInterfaceAssocDescriptor.macros>
#include <ITypes/Macros/TypedUsbInterfaceAssocDescriptor.macros>

IUsbInterfaceAssocDescriptor::IUsbInterfaceAssocDescriptor() {}

IUsbInterfaceAssocDescriptor::IUsbInterfaceAssocDescriptor(usb_interface_assoc_descriptor_k buffer)
{
     _data = buffer;
}


bool IUsbInterfaceAssocDescriptor::operator==(const IUsbInterfaceAssocDescriptor& other) const
{
    return this->_data == other._data;
}
