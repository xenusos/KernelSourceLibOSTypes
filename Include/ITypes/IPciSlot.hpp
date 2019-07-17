/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciSlot
{
private: 
    pci_slot_k _data;

public: 
    IPciSlot();
    IPciSlot(pci_slot_k buffer);

    #include "Macros/VariablePciSlot.macros"
    #include "Macros/TypedPciSlot.macros"


    pci_slot_k InternalBuffer() { return _data; }
    bool operator==(const IPciSlot& other) const;
};

#include "Macros/0_cleanup.macros"
