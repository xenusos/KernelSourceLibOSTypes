/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IModuleLayout
{
private: 
    module_layout_k _data;

public: 
    IModuleLayout();
    IModuleLayout(module_layout_k buffer);

    #include "Macros/VariableModuleLayout.macros"
    #include "Macros/TypedModuleLayout.macros"


    module_layout_k InternalBuffer() { return _data; }
    bool operator==(const IModuleLayout& other) const;
};

#include "Macros/0_cleanup.macros"
