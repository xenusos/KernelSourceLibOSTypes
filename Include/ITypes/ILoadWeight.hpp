/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ILoadWeight
{
private: 
    load_weight_k _data;

public: 
    ILoadWeight();
    ILoadWeight(load_weight_k buffer);

    #include "Macros/VariableLoadWeight.macros"
    #include "Macros/TypedLoadWeight.macros"


    load_weight_k InternalBuffer() { return _data; }
    bool operator==(const ILoadWeight& other) const;
};

#include "Macros/0_cleanup.macros"
