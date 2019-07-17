/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ILockManagerOperations
{
private: 
    lock_manager_operations_k _data;

public: 
    ILockManagerOperations();
    ILockManagerOperations(lock_manager_operations_k buffer);

    #include "Macros/VariableLockManagerOperations.macros"
    #include "Macros/TypedLockManagerOperations.macros"


    lock_manager_operations_k InternalBuffer() { return _data; }
    bool operator==(const ILockManagerOperations& other) const;
};

#include "Macros/0_cleanup.macros"
