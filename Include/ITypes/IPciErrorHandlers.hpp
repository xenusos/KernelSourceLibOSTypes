/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPciErrorHandlers
{
private: 
    pci_error_handlers_k _data;

public: 
    IPciErrorHandlers();
    IPciErrorHandlers(pci_error_handlers_k buffer);

    #include "Macros/VariablePciErrorHandlers.macros"
    #include "Macros/TypedPciErrorHandlers.macros"


    pci_error_handlers_k InternalBuffer() { return _data; }
    bool operator==(const IPciErrorHandlers& other) const;
};

#include "Macros/0_cleanup.macros"
