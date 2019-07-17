/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciDynids
{
private: 
    pci_dynids_k _data;

public: 
    IPciDynids();
    IPciDynids(pci_dynids_k buffer);

    #include "Macros/VariablePciDynids.macros"
    #include "Macros/TypedPciDynids.macros"


    pci_dynids_k InternalBuffer() { return _data; }
    bool operator==(const IPciDynids& other) const;
};

#include "Macros/0_cleanup.macros"
