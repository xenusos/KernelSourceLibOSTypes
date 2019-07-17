/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IClassAttribute
{
private: 
    class_attribute_k _data;

public: 
    IClassAttribute();
    IClassAttribute(class_attribute_k buffer);

    #include "Macros/VariableClassAttribute.macros"
    #include "Macros/TypedClassAttribute.macros"


    class_attribute_k InternalBuffer() { return _data; }
    bool operator==(const IClassAttribute& other) const;
};

#include "Macros/0_cleanup.macros"
