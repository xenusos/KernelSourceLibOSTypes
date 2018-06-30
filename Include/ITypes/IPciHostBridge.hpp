/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciHostBridge
{
private: 
    pci_host_bridge_k _data;

public: 
    IPciHostBridge();
    IPciHostBridge(pci_host_bridge_k buffer);

    #include "Macros/VariablePciHostBridge.macros"
    #include "Macros/TypedPciHostBridge.macros"


    pci_host_bridge_k InternalBuffer() { return _data; }
    bool operator==(const IPciHostBridge& other) const;
};

#include "Macros/0_cleanup.macros"
