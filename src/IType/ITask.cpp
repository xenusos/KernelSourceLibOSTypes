/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson
*/  
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ITask.hpp>

#define CFG_DEFINE_PS_TYPE_NAME task
#define CFG_DEFINE_DATA _task
#define CFG_DEFINE_CLASS ITask

#include "0_init.macros"

#include <ITypes\Macros\VariableTask.macros>
#include <ITypes\Macros\TypedTask.macros>


ITask::ITask()
{

}

ITask::ITask(task_k task)
{
	_task = task;
}


task_k ITask::GetLastWakee()
{
	return (task_k*)task_get_last_wakee_uint64(_task);
}

task_k ITask::GetRealParent()
{
	return (task_k*)task_get_last_wakee_uint64(_task);
}

task_k ITask::GetParent()
{
	return (task_k*)task_get_last_wakee_uint64(_task);
}

cred_k ITask::GetRealCred()
{
	return (cred_k*)task_get_last_wakee_uint64(_task);
}

cred_k ITask::GetCred()
{
	return (cred_k)task_get_last_wakee_uint64(_task);
}

uint32_t ITask::GetAddressLimit()
{
	return -1;
}

void ITask::SetAddressLimitUnsafe(uint32_t fs)
{

}

uint32_t ITask::SwapAddressLimit(uint32_t fs)
{
	return -1;
}

bool ITask::operator==(const ITask& other) const
{
	return this->_task == other._task;
}