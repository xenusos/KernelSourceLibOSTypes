/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciBus.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_bus
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciBus

#include "0_init.macros"

#include <ITypes/Macros/VariablePciBus.macros>
#include <ITypes/Macros/TypedPciBus.macros>

IPciBus::IPciBus() {}

IPciBus::IPciBus(pci_bus_k buffer)
{
     _data = buffer;
}


bool IPciBus::operator==(const IPciBus& other) const
{
    return this->_data == other._data;
}
