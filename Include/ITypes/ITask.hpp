/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson
*/  
#pragma once
#include "Macros\0_init.macros"

class ITask
{
private:
	task_k _task;

public:
	ITask();
	ITask(task_k task);

	// Generated getters/setters start:

	#include "Macros\VariableTask.macros"
	#include "Macros\TypedTask.macros"

	//not really the style i'd perfer to use here, but it fits in well with the gnerated stubs 
	task_k GetLastWakee(); 
		  
	task_k GetRealParent();
	task_k GetParent();
		   
	cred_k GetRealCred();
	cred_k GetCred();

	// Real functions start: 

	uint32_t GetAddressLimit();
	void SetAddressLimitUnsafe(uint32_t fs);
	uint32_t SwapAddressLimit(uint32_t fs); // exchange function

	bool operator==(const ITask& other) const;
};


#undef DEFINE_MEMBER
#undef DEFINE_TYPED_MEMBER
#undef DEFINE_MEMBER_2
#undef DEFINE_TYPED_MEMBER_2

#define ICurrentVar ITaskStruct task(current);
#define ICurrent ITaskStruct(current)