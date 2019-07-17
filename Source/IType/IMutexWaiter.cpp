/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IMutexWaiter.hpp>

#define CFG_DEFINE_PS_TYPE_NAME mutex_waiter
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IMutexWaiter

#include "0_init.macros"

#include <ITypes/Macros/VariableMutexWaiter.macros>
#include <ITypes/Macros/TypedMutexWaiter.macros>

IMutexWaiter::IMutexWaiter() {}

IMutexWaiter::IMutexWaiter(mutex_waiter_k buffer)
{
     _data = buffer;
}


bool IMutexWaiter::operator==(const IMutexWaiter& other) const
{
    return this->_data == other._data;
}
