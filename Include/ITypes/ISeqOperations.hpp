/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISeqOperations
{
private: 
    seq_operations_k _data;

public: 
    ISeqOperations();
    ISeqOperations(seq_operations_k buffer);

    #include "Macros/VariableSeqOperations.macros"
    #include "Macros/TypedSeqOperations.macros"


    seq_operations_k InternalBuffer() { return _data; }
    bool operator==(const ISeqOperations& other) const;
};

#include "Macros/0_cleanup.macros"
