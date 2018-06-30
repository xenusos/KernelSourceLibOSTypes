/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IMutex
{
private: 
    mutex_k _data;

public: 
    IMutex();
    IMutex(mutex_k buffer);

    #include "Macros/VariableMutex.macros"
    #include "Macros/TypedMutex.macros"


    mutex_k InternalBuffer() { return _data; }
    bool operator==(const IMutex& other) const;
};

#include "Macros/0_cleanup.macros"
