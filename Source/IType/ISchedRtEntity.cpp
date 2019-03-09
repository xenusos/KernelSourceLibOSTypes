/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedRtEntity.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_rt_entity
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedRtEntity

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedRtEntity.macros>
#include <ITypes/Macros/TypedSchedRtEntity.macros>

ISchedRtEntity::ISchedRtEntity() {}

ISchedRtEntity::ISchedRtEntity(sched_rt_entity_k buffer)
{
     _data = buffer;
}


bool ISchedRtEntity::operator==(const ISchedRtEntity& other) const
{
    return this->_data == other._data;
}
