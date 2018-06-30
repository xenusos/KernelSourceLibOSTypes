/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFAsyncStruct
{
private: 
    fasync_struct_k _data;

public: 
    IFAsyncStruct();
    IFAsyncStruct(fasync_struct_k buffer);

    #include "Macros/VariableFAsyncStruct.macros"
    #include "Macros/TypedFAsyncStruct.macros"


    fasync_struct_k InternalBuffer() { return _data; }
    bool operator==(const IFAsyncStruct& other) const;
};

#include "Macros/0_cleanup.macros"
