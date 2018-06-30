/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedDomainShared.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_domain_shared
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedDomainShared

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedDomainShared.macros>
#include <ITypes/Macros/TypedSchedDomainShared.macros>

ISchedDomainShared::ISchedDomainShared() {}

ISchedDomainShared::ISchedDomainShared(sched_domain_shared_k buffer)
{
     _data = buffer;
}


bool ISchedDomainShared::operator==(const ISchedDomainShared& other) const
{
    return this->_data == other._data;
}
