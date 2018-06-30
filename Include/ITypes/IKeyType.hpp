/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKeyType
{
private: 
    key_type_k _data;

public: 
    IKeyType();
    IKeyType(key_type_k buffer);

    #include "Macros/VariableKeyType.macros"
    #include "Macros/TypedKeyType.macros"


    key_type_k InternalBuffer() { return _data; }
    bool operator==(const IKeyType& other) const;
};

#include "Macros/0_cleanup.macros"
