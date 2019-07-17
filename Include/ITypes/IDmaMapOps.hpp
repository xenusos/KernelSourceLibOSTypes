/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDmaMapOps
{
private: 
    dma_map_ops_k _data;

public: 
    IDmaMapOps();
    IDmaMapOps(dma_map_ops_k buffer);

    #include "Macros/VariableDmaMapOps.macros"
    #include "Macros/TypedDmaMapOps.macros"


    dma_map_ops_k InternalBuffer() { return _data; }
    bool operator==(const IDmaMapOps& other) const;
};

#include "Macros/0_cleanup.macros"
