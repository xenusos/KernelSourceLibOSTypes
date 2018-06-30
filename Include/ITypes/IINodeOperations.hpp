/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IINodeOperations
{
private: 
    inode_operations_k _data;

public: 
    IINodeOperations();
    IINodeOperations(inode_operations_k buffer);

    #include "Macros/VariableINodeOperations.macros"
    #include "Macros/TypedINodeOperations.macros"


    inode_operations_k InternalBuffer() { return _data; }
    bool operator==(const IINodeOperations& other) const;
};

#include "Macros/0_cleanup.macros"
