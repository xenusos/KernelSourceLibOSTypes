/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IScatterList
{
private: 
    scatterlist_k _data;

public: 
    IScatterList();
    IScatterList(scatterlist_k buffer);

    #include "Macros/VariableScatterList.macros"
    #include "Macros/TypedScatterList.macros"


    scatterlist_k InternalBuffer() { return _data; }
    bool operator==(const IScatterList& other) const;
};

#include "Macros/0_cleanup.macros"
