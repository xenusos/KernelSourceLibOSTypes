/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ILockManager
{
private: 
    lock_manager_k _data;

public: 
    ILockManager();
    ILockManager(lock_manager_k buffer);

    #include "Macros/VariableLockManager.macros"
    #include "Macros/TypedLockManager.macros"


    lock_manager_k InternalBuffer() { return _data; }
    bool operator==(const ILockManager& other) const;
};

#include "Macros/0_cleanup.macros"
