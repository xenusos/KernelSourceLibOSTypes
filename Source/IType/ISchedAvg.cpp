/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedAvg.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_avg
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedAvg

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedAvg.macros>
#include <ITypes/Macros/TypedSchedAvg.macros>

ISchedAvg::ISchedAvg() {}

ISchedAvg::ISchedAvg(sched_avg_k buffer)
{
     _data = buffer;
}


bool ISchedAvg::operator==(const ISchedAvg& other) const
{
    return this->_data == other._data;
}
