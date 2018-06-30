/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IModuleUse
{
private: 
    module_use_k _data;

public: 
    IModuleUse();
    IModuleUse(module_use_k buffer);

    #include "Macros/VariableModuleUse.macros"
    #include "Macros/TypedModuleUse.macros"


    module_use_k InternalBuffer() { return _data; }
    bool operator==(const IModuleUse& other) const;
};

#include "Macros/0_cleanup.macros"
