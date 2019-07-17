/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciDriver
{
private: 
    pci_driver_k _data;

public: 
    IPciDriver();
    IPciDriver(pci_driver_k buffer);

    #include "Macros/VariablePciDriver.macros"
    #include "Macros/TypedPciDriver.macros"


    pci_driver_k InternalBuffer() { return _data; }
    bool operator==(const IPciDriver& other) const;
};

#include "Macros/0_cleanup.macros"
