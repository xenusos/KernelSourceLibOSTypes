/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IModuleKobject
{
private: 
    module_kobject_k _data;

public: 
    IModuleKobject();
    IModuleKobject(module_kobject_k buffer);

    #include "Macros/VariableModuleKobject.macros"
    #include "Macros/TypedModuleKobject.macros"


    module_kobject_k InternalBuffer() { return _data; }
    bool operator==(const IModuleKobject& other) const;
};

#include "Macros/0_cleanup.macros"
