/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IWaitQueueEntry
{
private: 
    wait_queue_entry_k _data;

public: 
    IWaitQueueEntry();
    IWaitQueueEntry(wait_queue_entry_k buffer);

    #include "Macros/VariableWaitQueueEntry.macros"
    #include "Macros/TypedWaitQueueEntry.macros"


    wait_queue_entry_k InternalBuffer() { return _data; }
    bool operator==(const IWaitQueueEntry& other) const;
};

#include "Macros/0_cleanup.macros"
