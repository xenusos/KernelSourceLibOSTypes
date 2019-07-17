/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFWNodeEndpoint
{
private: 
    fwnode_endpoint_k _data;

public: 
    IFWNodeEndpoint();
    IFWNodeEndpoint(fwnode_endpoint_k buffer);

    #include "Macros/VariableFWNodeEndpoint.macros"
    #include "Macros/TypedFWNodeEndpoint.macros"


    fwnode_endpoint_k InternalBuffer() { return _data; }
    bool operator==(const IFWNodeEndpoint& other) const;
};

#include "Macros/0_cleanup.macros"
