/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciOps
{
private: 
    pci_ops_k _data;

public: 
    IPciOps();
    IPciOps(pci_ops_k buffer);

    #include "Macros/VariablePciOps.macros"
    #include "Macros/TypedPciOps.macros"


    pci_ops_k InternalBuffer() { return _data; }
    bool operator==(const IPciOps& other) const;
};

#include "Macros/0_cleanup.macros"
