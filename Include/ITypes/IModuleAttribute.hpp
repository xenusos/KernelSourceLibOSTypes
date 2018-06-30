/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IModuleAttribute
{
private: 
    module_attribute_k _data;

public: 
    IModuleAttribute();
    IModuleAttribute(module_attribute_k buffer);

    #include "Macros/VariableModuleAttribute.macros"
    #include "Macros/TypedModuleAttribute.macros"


    module_attribute_k InternalBuffer() { return _data; }
    bool operator==(const IModuleAttribute& other) const;
};

#include "Macros/0_cleanup.macros"
