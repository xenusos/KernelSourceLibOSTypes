/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciBusRegion
{
private: 
    pci_bus_region_k _data;

public: 
    IPciBusRegion();
    IPciBusRegion(pci_bus_region_k buffer);

    #include "Macros/VariablePciBusRegion.macros"
    #include "Macros/TypedPciBusRegion.macros"


    pci_bus_region_k InternalBuffer() { return _data; }
    bool operator==(const IPciBusRegion& other) const;
};

#include "Macros/0_cleanup.macros"
