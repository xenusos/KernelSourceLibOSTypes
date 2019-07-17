/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKeyConstruction
{
private: 
    key_construction_k _data;

public: 
    IKeyConstruction();
    IKeyConstruction(key_construction_k buffer);

    #include "Macros/VariableKeyConstruction.macros"
    #include "Macros/TypedKeyConstruction.macros"


    key_construction_k InternalBuffer() { return _data; }
    bool operator==(const IKeyConstruction& other) const;
};

#include "Macros/0_cleanup.macros"
