/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciBusRegion.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_bus_region
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciBusRegion

#include "0_init.macros"

#include <ITypes/Macros/VariablePciBusRegion.macros>
#include <ITypes/Macros/TypedPciBusRegion.macros>

IPciBusRegion::IPciBusRegion() {}

IPciBusRegion::IPciBusRegion(pci_bus_region_k buffer)
{
     _data = buffer;
}


bool IPciBusRegion::operator==(const IPciBusRegion& other) const
{
    return this->_data == other._data;
}
