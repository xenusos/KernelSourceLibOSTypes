/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUserStruct
{
private: 
    user_struct_k _data;

public: 
    IUserStruct();
    IUserStruct(user_struct_k buffer);

    #include "Macros/VariableUserStruct.macros"
    #include "Macros/TypedUserStruct.macros"


    user_struct_k InternalBuffer() { return _data; }
    bool operator==(const IUserStruct& other) const;
};

#include "Macros/0_cleanup.macros"
