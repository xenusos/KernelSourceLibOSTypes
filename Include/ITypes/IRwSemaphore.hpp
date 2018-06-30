/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IRwSemaphore
{
private: 
    rw_semaphore_k _data;

public: 
    IRwSemaphore();
    IRwSemaphore(rw_semaphore_k buffer);

    #include "Macros/VariableRwSemaphore.macros"
    #include "Macros/TypedRwSemaphore.macros"


    rw_semaphore_k InternalBuffer() { return _data; }
    bool operator==(const IRwSemaphore& other) const;
};

#include "Macros/0_cleanup.macros"
