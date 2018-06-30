/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ICoreThread
{
private: 
    core_thread_k _data;

public: 
    ICoreThread();
    ICoreThread(core_thread_k buffer);

    #include "Macros/VariableCoreThread.macros"
    #include "Macros/TypedCoreThread.macros"


    core_thread_k InternalBuffer() { return _data; }
    bool operator==(const ICoreThread& other) const;
};

#include "Macros/0_cleanup.macros"
