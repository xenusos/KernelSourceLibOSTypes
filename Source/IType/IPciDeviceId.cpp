/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciDeviceId.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_device_id
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciDeviceId

#include "0_init.macros"

#include <ITypes/Macros/VariablePciDeviceId.macros>
#include <ITypes/Macros/TypedPciDeviceId.macros>

IPciDeviceId::IPciDeviceId() {}

IPciDeviceId::IPciDeviceId(pci_device_id_k buffer)
{
     _data = buffer;
}


bool IPciDeviceId::operator==(const IPciDeviceId& other) const
{
    return this->_data == other._data;
}
