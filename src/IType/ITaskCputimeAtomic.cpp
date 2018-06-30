/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ITaskCputimeAtomic.hpp>

#define CFG_DEFINE_PS_TYPE_NAME task_cputime_atomic
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ITaskCputimeAtomic

#include "0_init.macros"

#include <ITypes/Macros/VariableTaskCputimeAtomic.macros>
#include <ITypes/Macros/TypedTaskCputimeAtomic.macros>

ITaskCputimeAtomic::ITaskCputimeAtomic() {}

ITaskCputimeAtomic::ITaskCputimeAtomic(task_cputime_atomic_k buffer)
{
     _data = buffer;
}


bool ITaskCputimeAtomic::operator==(const ITaskCputimeAtomic& other) const
{
    return this->_data == other._data;
}
