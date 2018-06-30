/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDirContext
{
private: 
    dir_context_k _data;

public: 
    IDirContext();
    IDirContext(dir_context_k buffer);

    #include "Macros/VariableDirContext.macros"
    #include "Macros/TypedDirContext.macros"


    dir_context_k InternalBuffer() { return _data; }
    bool operator==(const IDirContext& other) const;
};

#include "Macros/0_cleanup.macros"
