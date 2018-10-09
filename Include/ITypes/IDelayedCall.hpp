/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDelayedCall
{
private: 
    delayed_call_k _data;

public: 
    IDelayedCall();
    IDelayedCall(delayed_call_k buffer);

    #include "Macros/VariableDelayedCall.macros"
    #include "Macros/TypedDelayedCall.macros"


    delayed_call_k InternalBuffer() { return _data; }
    bool operator==(const IDelayedCall& other) const;
};

#include "Macros/0_cleanup.macros"
