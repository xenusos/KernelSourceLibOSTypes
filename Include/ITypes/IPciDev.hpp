/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciDev
{
private: 
    pci_dev_k _data;

public: 
    IPciDev();
    IPciDev(pci_dev_k buffer);

    #include "Macros/VariablePciDev.macros"
    #include "Macros/TypedPciDev.macros"


    pci_dev_k InternalBuffer() { return _data; }
    bool operator==(const IPciDev& other) const;
};

#include "Macros/0_cleanup.macros"
