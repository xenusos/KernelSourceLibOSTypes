/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IIrqDomain.hpp>

#define CFG_DEFINE_PS_TYPE_NAME irq_domain
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IIrqDomain

#include "0_init.macros"

#include <ITypes/Macros/VariableIrqDomain.macros>
#include <ITypes/Macros/TypedIrqDomain.macros>

IIrqDomain::IIrqDomain() {}

IIrqDomain::IIrqDomain(irq_domain_k buffer)
{
     _data = buffer;
}


bool IIrqDomain::operator==(const IIrqDomain& other) const
{
    return this->_data == other._data;
}
