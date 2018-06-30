/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFOwnStruct
{
private: 
    fown_struct_k _data;

public: 
    IFOwnStruct();
    IFOwnStruct(fown_struct_k buffer);

    #include "Macros/VariableFOwnStruct.macros"
    #include "Macros/TypedFOwnStruct.macros"


    fown_struct_k InternalBuffer() { return _data; }
    bool operator==(const IFOwnStruct& other) const;
};

#include "Macros/0_cleanup.macros"
