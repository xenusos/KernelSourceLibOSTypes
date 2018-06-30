/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFWNodeOperations
{
private: 
    fwnode_operations_k _data;

public: 
    IFWNodeOperations();
    IFWNodeOperations(fwnode_operations_k buffer);

    #include "Macros/VariableFWNodeOperations.macros"
    #include "Macros/TypedFWNodeOperations.macros"


    fwnode_operations_k InternalBuffer() { return _data; }
    bool operator==(const IFWNodeOperations& other) const;
};

#include "Macros/0_cleanup.macros"
