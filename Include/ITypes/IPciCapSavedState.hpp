/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciCapSavedState
{
private: 
    pci_cap_saved_state_k _data;

public: 
    IPciCapSavedState();
    IPciCapSavedState(pci_cap_saved_state_k buffer);

    #include "Macros/VariablePciCapSavedState.macros"
    #include "Macros/TypedPciCapSavedState.macros"


    pci_cap_saved_state_k InternalBuffer() { return _data; }
    bool operator==(const IPciCapSavedState& other) const;
};

#include "Macros/0_cleanup.macros"
