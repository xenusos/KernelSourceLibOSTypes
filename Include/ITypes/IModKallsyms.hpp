/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IModKallsyms
{
private: 
    mod_kallsyms_k _data;

public: 
    IModKallsyms();
    IModKallsyms(mod_kallsyms_k buffer);

    #include "Macros/VariableModKallsyms.macros"
    #include "Macros/TypedModKallsyms.macros"


    mod_kallsyms_k InternalBuffer() { return _data; }
    bool operator==(const IModKallsyms& other) const;
};

#include "Macros/0_cleanup.macros"
