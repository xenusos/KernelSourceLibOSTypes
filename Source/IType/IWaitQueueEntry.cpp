/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IWaitQueueEntry.hpp>

#define CFG_DEFINE_PS_TYPE_NAME wait_queue_entry
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IWaitQueueEntry

#include "0_init.macros"

#include <ITypes/Macros/VariableWaitQueueEntry.macros>
#include <ITypes/Macros/TypedWaitQueueEntry.macros>

IWaitQueueEntry::IWaitQueueEntry() {}

IWaitQueueEntry::IWaitQueueEntry(wait_queue_entry_k buffer)
{
     _data = buffer;
}


bool IWaitQueueEntry::operator==(const IWaitQueueEntry& other) const
{
    return this->_data == other._data;
}
