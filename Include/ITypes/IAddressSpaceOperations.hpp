/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IAddressSpaceOperations
{
private: 
    address_space_operations_k _data;

public: 
    IAddressSpaceOperations();
    IAddressSpaceOperations(address_space_operations_k buffer);

    #include "Macros/VariableAddressSpaceOperations.macros"
    #include "Macros/TypedAddressSpaceOperations.macros"


    address_space_operations_k InternalBuffer() { return _data; }
    bool operator==(const IAddressSpaceOperations& other) const;
};

#include "Macros/0_cleanup.macros"
