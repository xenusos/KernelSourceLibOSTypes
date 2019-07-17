/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDEntryOperations
{
private: 
    dentry_operations_k _data;

public: 
    IDEntryOperations();
    IDEntryOperations(dentry_operations_k buffer);

    #include "Macros/VariableDEntryOperations.macros"
    #include "Macros/TypedDEntryOperations.macros"


    dentry_operations_k InternalBuffer() { return _data; }
    bool operator==(const IDEntryOperations& other) const;
};

#include "Macros/0_cleanup.macros"
