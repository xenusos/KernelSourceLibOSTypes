/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKey
{
private: 
    key_k _data;

public: 
    IKey();
    IKey(key_k buffer);

    #include "Macros/VariableKey.macros"
    #include "Macros/TypedKey.macros"


    key_k InternalBuffer() { return _data; }
    bool operator==(const IKey& other) const;
};

#include "Macros/0_cleanup.macros"
