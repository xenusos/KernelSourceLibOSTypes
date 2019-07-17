/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDevPmDomain.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dev_pm_domain
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDevPmDomain

#include "0_init.macros"

#include <ITypes/Macros/VariableDevPmDomain.macros>
#include <ITypes/Macros/TypedDevPmDomain.macros>

IDevPmDomain::IDevPmDomain() {}

IDevPmDomain::IDevPmDomain(dev_pm_domain_k buffer)
{
     _data = buffer;
}


bool IDevPmDomain::operator==(const IDevPmDomain& other) const
{
    return this->_data == other._data;
}
