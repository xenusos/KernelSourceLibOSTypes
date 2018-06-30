/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IModuleVersionAttribute
{
private: 
    module_version_attribute_k _data;

public: 
    IModuleVersionAttribute();
    IModuleVersionAttribute(module_version_attribute_k buffer);

    #include "Macros/VariableModuleVersionAttribute.macros"
    #include "Macros/TypedModuleVersionAttribute.macros"


    module_version_attribute_k InternalBuffer() { return _data; }
    bool operator==(const IModuleVersionAttribute& other) const;
};

#include "Macros/0_cleanup.macros"
