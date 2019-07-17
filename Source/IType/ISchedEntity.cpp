/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedEntity.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_entity
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedEntity

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedEntity.macros>
#include <ITypes/Macros/TypedSchedEntity.macros>

ISchedEntity::ISchedEntity() {}

ISchedEntity::ISchedEntity(sched_entity_k buffer)
{
     _data = buffer;
}


bool ISchedEntity::operator==(const ISchedEntity& other) const
{
    return this->_data == other._data;
}
