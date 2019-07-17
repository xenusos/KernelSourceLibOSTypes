/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ICoreThread.hpp>

#define CFG_DEFINE_PS_TYPE_NAME core_thread
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ICoreThread

#include "0_init.macros"

#include <ITypes/Macros/VariableCoreThread.macros>
#include <ITypes/Macros/TypedCoreThread.macros>

ICoreThread::ICoreThread() {}

ICoreThread::ICoreThread(core_thread_k buffer)
{
     _data = buffer;
}


bool ICoreThread::operator==(const ICoreThread& other) const
{
    return this->_data == other._data;
}
