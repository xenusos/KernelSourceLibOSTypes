/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ITaskDelayInfo.hpp>

#define CFG_DEFINE_PS_TYPE_NAME task_delay_info
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ITaskDelayInfo

#include "0_init.macros"

#include <ITypes/Macros/VariableTaskDelayInfo.macros>
#include <ITypes/Macros/TypedTaskDelayInfo.macros>

ITaskDelayInfo::ITaskDelayInfo() {}

ITaskDelayInfo::ITaskDelayInfo(task_delay_info_k buffer)
{
     _data = buffer;
}


bool ITaskDelayInfo::operator==(const ITaskDelayInfo& other) const
{
    return this->_data == other._data;
}
