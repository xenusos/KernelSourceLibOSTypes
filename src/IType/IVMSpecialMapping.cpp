/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IVMSpecialMapping.hpp>

#define CFG_DEFINE_PS_TYPE_NAME vm_special_mapping
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IVMSpecialMapping

#include "0_init.macros"

#include <ITypes/Macros/VariableVMSpecialMapping.macros>
#include <ITypes/Macros/TypedVMSpecialMapping.macros>

IVMSpecialMapping::IVMSpecialMapping() {}

IVMSpecialMapping::IVMSpecialMapping(vm_special_mapping_k buffer)
{
     _data = buffer;
}


bool IVMSpecialMapping::operator==(const IVMSpecialMapping& other) const
{
    return this->_data == other._data;
}
