/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IMutexWaiter
{
private: 
    mutex_waiter_k _data;

public: 
    IMutexWaiter();
    IMutexWaiter(mutex_waiter_k buffer);

    #include "Macros/VariableMutexWaiter.macros"
    #include "Macros/TypedMutexWaiter.macros"


    mutex_waiter_k InternalBuffer() { return _data; }
    bool operator==(const IMutexWaiter& other) const;
};

#include "Macros/0_cleanup.macros"
