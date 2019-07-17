/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISignalStruct
{
private: 
    signal_struct_k _data;

public: 
    ISignalStruct();
    ISignalStruct(signal_struct_k buffer);

    #include "Macros/VariableSignalStruct.macros"
    #include "Macros/TypedSignalStruct.macros"


    signal_struct_k InternalBuffer() { return _data; }
    bool operator==(const ISignalStruct& other) const;
};

#include "Macros/0_cleanup.macros"
