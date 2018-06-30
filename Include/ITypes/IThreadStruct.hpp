/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IThreadStruct
{
private: 
    thread_struct_k _data;

public: 
    IThreadStruct();
    IThreadStruct(thread_struct_k buffer);

    #include "Macros/VariableThreadStruct.macros"
    #include "Macros/TypedThreadStruct.macros"


    thread_struct_k InternalBuffer() { return _data; }
    bool operator==(const IThreadStruct& other) const;
};

#include "Macros/0_cleanup.macros"
