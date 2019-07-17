/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciHostBridge.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_host_bridge
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciHostBridge

#include "0_init.macros"

#include <ITypes/Macros/VariablePciHostBridge.macros>
#include <ITypes/Macros/TypedPciHostBridge.macros>

IPciHostBridge::IPciHostBridge() {}

IPciHostBridge::IPciHostBridge(pci_host_bridge_k buffer)
{
     _data = buffer;
}


bool IPciHostBridge::operator==(const IPciHostBridge& other) const
{
    return this->_data == other._data;
}
