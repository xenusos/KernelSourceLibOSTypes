/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciDeviceId
{
private: 
    pci_device_id_k _data;

public: 
    IPciDeviceId();
    IPciDeviceId(pci_device_id_k buffer);

    #include "Macros/VariablePciDeviceId.macros"
    #include "Macros/TypedPciDeviceId.macros"


    pci_device_id_k InternalBuffer() { return _data; }
    bool operator==(const IPciDeviceId& other) const;
};

#include "Macros/0_cleanup.macros"
