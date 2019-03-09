/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDEntryStat.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dentry_stat
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDEntryStat

#include "0_init.macros"

#include <ITypes/Macros/VariableDEntryStat.macros>
#include <ITypes/Macros/TypedDEntryStat.macros>

IDEntryStat::IDEntryStat() {}

IDEntryStat::IDEntryStat(dentry_stat_k buffer)
{
     _data = buffer;
}


bool IDEntryStat::operator==(const IDEntryStat& other) const
{
    return this->_data == other._data;
}
