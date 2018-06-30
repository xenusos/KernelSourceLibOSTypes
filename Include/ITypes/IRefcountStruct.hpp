/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IRefcountStruct
{
private: 
    refcount_struct_k _data;

public: 
    IRefcountStruct();
    IRefcountStruct(refcount_struct_k buffer);

    #include "Macros/VariableRefcountStruct.macros"
    #include "Macros/TypedRefcountStruct.macros"


    refcount_struct_k InternalBuffer() { return _data; }
    bool operator==(const IRefcountStruct& other) const;
};

#include "Macros/0_cleanup.macros"
