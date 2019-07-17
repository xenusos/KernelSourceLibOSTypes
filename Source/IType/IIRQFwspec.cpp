/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IIRQFwspec.hpp>

#define CFG_DEFINE_PS_TYPE_NAME irq_fwspec
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IIRQFwspec

#include "0_init.macros"

#include <ITypes/Macros/VariableIRQFwspec.macros>
#include <ITypes/Macros/TypedIRQFwspec.macros>

IIRQFwspec::IIRQFwspec() {}

IIRQFwspec::IIRQFwspec(irq_fwspec_k buffer)
{
     _data = buffer;
}


bool IIRQFwspec::operator==(const IIRQFwspec& other) const
{
    return this->_data == other._data;
}
