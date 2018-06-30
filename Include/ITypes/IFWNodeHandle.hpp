/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFWNodeHandle
{
private: 
    fwnode_handle_k _data;

public: 
    IFWNodeHandle();
    IFWNodeHandle(fwnode_handle_k buffer);

    #include "Macros/VariableFWNodeHandle.macros"
    #include "Macros/TypedFWNodeHandle.macros"


    fwnode_handle_k InternalBuffer() { return _data; }
    bool operator==(const IFWNodeHandle& other) const;
};

#include "Macros/0_cleanup.macros"
