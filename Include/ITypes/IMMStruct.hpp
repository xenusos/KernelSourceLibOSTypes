/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IMMStruct
{
private: 
    mm_struct_k _data;

public: 
    IMMStruct();
    IMMStruct(mm_struct_k buffer);

    #include "Macros/VariableMMStruct.macros"
    #include "Macros/TypedMMStruct.macros"


    mm_struct_k InternalBuffer() { return _data; }
    bool operator==(const IMMStruct& other) const;
};

#include "Macros/0_cleanup.macros"
