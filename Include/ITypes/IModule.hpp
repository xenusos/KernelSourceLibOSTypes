/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IModule
{
private: 
    module_k _data;

public: 
    IModule();
    IModule(module_k buffer);

    #include "Macros/VariableModule.macros"
    #include "Macros/TypedModule.macros"


    module_k InternalBuffer() { return _data; }
    bool operator==(const IModule& other) const;
};

#include "Macros/0_cleanup.macros"
