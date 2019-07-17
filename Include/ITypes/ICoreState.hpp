/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ICoreState
{
private: 
    core_state_k _data;

public: 
    ICoreState();
    ICoreState(core_state_k buffer);

    #include "Macros/VariableCoreState.macros"
    #include "Macros/TypedCoreState.macros"


    core_state_k InternalBuffer() { return _data; }
    bool operator==(const ICoreState& other) const;
};

#include "Macros/0_cleanup.macros"
