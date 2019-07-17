/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IResource
{
private: 
    resource_k _data;

public: 
    IResource();
    IResource(resource_k buffer);

    #include "Macros/VariableResource.macros"
    #include "Macros/TypedResource.macros"


    resource_k InternalBuffer() { return _data; }
    bool operator==(const IResource& other) const;
};

#include "Macros/0_cleanup.macros"
