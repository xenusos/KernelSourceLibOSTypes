/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson
*/  
#pragma once
#include "Macros\0_init.macros"

class IKStat
{
private:
	kstat_k _stat;

public:
	IKStat();
	IKStat(kstat_k stat);

#include "Macros\VariableKStat.macros"
#include "Macros\TypedKStat.macros"

	timespec * GetAccessTime();
	timespec * GetModifiedTime();
	timespec * GetChangedTime();
	timespec * GetCreatedTime();

	bool operator==(const IKStat& other) const;
};

#undef DEFINE_MEMBER
#undef DEFINE_TYPED_MEMBER
#undef DEFINE_MEMBER_2
#undef DEFINE_TYPED_MEMBER_2