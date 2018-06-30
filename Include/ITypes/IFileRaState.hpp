/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFileRaState
{
private: 
    file_ra_state_k _data;

public: 
    IFileRaState();
    IFileRaState(file_ra_state_k buffer);

    #include "Macros/VariableFileRaState.macros"
    #include "Macros/TypedFileRaState.macros"


    file_ra_state_k InternalBuffer() { return _data; }
    bool operator==(const IFileRaState& other) const;
};

#include "Macros/0_cleanup.macros"
