/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISuperOperations
{
private: 
    super_operations_k _data;

public: 
    ISuperOperations();
    ISuperOperations(super_operations_k buffer);

    #include "Macros/VariableSuperOperations.macros"
    #include "Macros/TypedSuperOperations.macros"


    super_operations_k InternalBuffer() { return _data; }
    bool operator==(const ISuperOperations& other) const;
};

#include "Macros/0_cleanup.macros"
