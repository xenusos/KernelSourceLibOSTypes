/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISpinlockT
{
private: 
    spinlock_t_k _data;

public: 
    ISpinlockT();
    ISpinlockT(spinlock_t_k buffer);

    #include "Macros/VariableSpinlockT.macros"
    #include "Macros/TypedSpinlockT.macros"


    spinlock_t_k InternalBuffer() { return _data; }
    bool operator==(const ISpinlockT& other) const;
};

#include "Macros/0_cleanup.macros"
