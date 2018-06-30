/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFsStruct
{
private: 
    fs_struct_k _data;

public: 
    IFsStruct();
    IFsStruct(fs_struct_k buffer);

    #include "Macros/VariableFsStruct.macros"
    #include "Macros/TypedFsStruct.macros"


    fs_struct_k InternalBuffer() { return _data; }
    bool operator==(const IFsStruct& other) const;
};

#include "Macros/0_cleanup.macros"
