/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFileLockOperations
{
private: 
    file_lock_operations_k _data;

public: 
    IFileLockOperations();
    IFileLockOperations(file_lock_operations_k buffer);

    #include "Macros/VariableFileLockOperations.macros"
    #include "Macros/TypedFileLockOperations.macros"


    file_lock_operations_k InternalBuffer() { return _data; }
    bool operator==(const IFileLockOperations& other) const;
};

#include "Macros/0_cleanup.macros"
