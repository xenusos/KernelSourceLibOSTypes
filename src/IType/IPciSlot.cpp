/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciSlot.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_slot
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciSlot

#include "0_init.macros"

#include <ITypes/Macros/VariablePciSlot.macros>
#include <ITypes/Macros/TypedPciSlot.macros>

IPciSlot::IPciSlot() {}

IPciSlot::IPciSlot(pci_slot_k buffer)
{
     _data = buffer;
}


bool IPciSlot::operator==(const IPciSlot& other) const
{
    return this->_data == other._data;
}
