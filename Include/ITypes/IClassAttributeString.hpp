/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IClassAttributeString
{
private: 
    class_attribute_string_k _data;

public: 
    IClassAttributeString();
    IClassAttributeString(class_attribute_string_k buffer);

    #include "Macros/VariableClassAttributeString.macros"
    #include "Macros/TypedClassAttributeString.macros"


    class_attribute_string_k InternalBuffer() { return _data; }
    bool operator==(const IClassAttributeString& other) const;
};

#include "Macros/0_cleanup.macros"
