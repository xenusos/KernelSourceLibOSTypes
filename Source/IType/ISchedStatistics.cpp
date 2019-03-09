/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedStatistics.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_statistics
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedStatistics

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedStatistics.macros>
#include <ITypes/Macros/TypedSchedStatistics.macros>

ISchedStatistics::ISchedStatistics() {}

ISchedStatistics::ISchedStatistics(sched_statistics_k buffer)
{
     _data = buffer;
}


bool ISchedStatistics::operator==(const ISchedStatistics& other) const
{
    return this->_data == other._data;
}
