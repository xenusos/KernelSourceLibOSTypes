/*
    Purpose: 
    Author: Reece W. 
    License: All Rights Reserved J. Reece Wilson (See License.txt)
*/  
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKStat.hpp>

#define CFG_DEFINE_PS_TYPE_NAME kstat
#define CFG_DEFINE_DATA _stat
#define CFG_DEFINE_CLASS IKStat

#include "0_init.macros"

#include <ITypes\Macros\VariableKStat.macros>
#include <ITypes\Macros\TypedKStat.macros>

IKStat::IKStat()
{

}

IKStat::IKStat(kstat_k stat)
{
	_stat = stat;
}

timespec * IKStat::GetAccessTime()
{
	return (timespec *)kstat_get_atime(_stat);
}

timespec * IKStat::GetModifiedTime()
{
	return (timespec *)kstat_get_mtime(_stat);
}

timespec * IKStat::GetChangedTime()
{
	return (timespec *)kstat_get_ctime(_stat);
}

timespec * IKStat::GetCreatedTime()
{
	return (timespec *)kstat_get_btime(_stat);
}

bool IKStat::operator==(const IKStat & other) const
{
	return this->_stat == other._stat;
}
