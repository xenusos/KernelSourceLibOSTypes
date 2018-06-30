/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IAddressSpace
{
private: 
    address_space_k _data;

public: 
    IAddressSpace();
    IAddressSpace(address_space_k buffer);

    #include "Macros/VariableAddressSpace.macros"
    #include "Macros/TypedAddressSpace.macros"


    address_space_k InternalBuffer() { return _data; }
    bool operator==(const IAddressSpace& other) const;
};

#include "Macros/0_cleanup.macros"
