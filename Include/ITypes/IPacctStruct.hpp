/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPacctStruct
{
private: 
    pacct_struct_k _data;

public: 
    IPacctStruct();
    IPacctStruct(pacct_struct_k buffer);

    #include "Macros/VariablePacctStruct.macros"
    #include "Macros/TypedPacctStruct.macros"


    pacct_struct_k InternalBuffer() { return _data; }
    bool operator==(const IPacctStruct& other) const;
};

#include "Macros/0_cleanup.macros"
