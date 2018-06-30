/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISighandStruct
{
private: 
    sighand_struct_k _data;

public: 
    ISighandStruct();
    ISighandStruct(sighand_struct_k buffer);

    #include "Macros/VariableSighandStruct.macros"
    #include "Macros/TypedSighandStruct.macros"


    sighand_struct_k InternalBuffer() { return _data; }
    bool operator==(const ISighandStruct& other) const;
};

#include "Macros/0_cleanup.macros"
