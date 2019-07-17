/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedDlEntity.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_dl_entity
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedDlEntity

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedDlEntity.macros>
#include <ITypes/Macros/TypedSchedDlEntity.macros>

ISchedDlEntity::ISchedDlEntity() {}

ISchedDlEntity::ISchedDlEntity(sched_dl_entity_k buffer)
{
     _data = buffer;
}


bool ISchedDlEntity::operator==(const ISchedDlEntity& other) const
{
    return this->_data == other._data;
}
