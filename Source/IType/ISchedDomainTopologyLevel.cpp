/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedDomainTopologyLevel.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_domain_topology_level
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedDomainTopologyLevel

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedDomainTopologyLevel.macros>
#include <ITypes/Macros/TypedSchedDomainTopologyLevel.macros>

ISchedDomainTopologyLevel::ISchedDomainTopologyLevel() {}

ISchedDomainTopologyLevel::ISchedDomainTopologyLevel(sched_domain_topology_level_k buffer)
{
     _data = buffer;
}


bool ISchedDomainTopologyLevel::operator==(const ISchedDomainTopologyLevel& other) const
{
    return this->_data == other._data;
}
