/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IAttributeGroup
{
private: 
    attribute_group_k _data;

public: 
    IAttributeGroup();
    IAttributeGroup(attribute_group_k buffer);

    #include "Macros/VariableAttributeGroup.macros"
    #include "Macros/TypedAttributeGroup.macros"


    attribute_group_k InternalBuffer() { return _data; }
    bool operator==(const IAttributeGroup& other) const;
};

#include "Macros/0_cleanup.macros"
