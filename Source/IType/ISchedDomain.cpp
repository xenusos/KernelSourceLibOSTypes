/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedDomain.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_domain
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedDomain

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedDomain.macros>
#include <ITypes/Macros/TypedSchedDomain.macros>

ISchedDomain::ISchedDomain() {}

ISchedDomain::ISchedDomain(sched_domain_k buffer)
{
     _data = buffer;
}


bool ISchedDomain::operator==(const ISchedDomain& other) const
{
    return this->_data == other._data;
}
