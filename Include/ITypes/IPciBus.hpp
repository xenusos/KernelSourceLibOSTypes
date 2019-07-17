/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciBus
{
private: 
    pci_bus_k _data;

public: 
    IPciBus();
    IPciBus(pci_bus_k buffer);

    #include "Macros/VariablePciBus.macros"
    #include "Macros/TypedPciBus.macros"


    pci_bus_k InternalBuffer() { return _data; }
    bool operator==(const IPciBus& other) const;
};

#include "Macros/0_cleanup.macros"
