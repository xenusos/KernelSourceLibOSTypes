/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciCapSavedState.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_cap_saved_state
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciCapSavedState

#include "0_init.macros"

#include <ITypes/Macros/VariablePciCapSavedState.macros>
#include <ITypes/Macros/TypedPciCapSavedState.macros>

IPciCapSavedState::IPciCapSavedState() {}

IPciCapSavedState::IPciCapSavedState(pci_cap_saved_state_k buffer)
{
     _data = buffer;
}


bool IPciCapSavedState::operator==(const IPciCapSavedState& other) const
{
    return this->_data == other._data;
}
