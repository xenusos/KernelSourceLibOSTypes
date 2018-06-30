/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IVMRegion.hpp>

#define CFG_DEFINE_PS_TYPE_NAME vm_region
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IVMRegion

#include "0_init.macros"

#include <ITypes/Macros/VariableVMRegion.macros>
#include <ITypes/Macros/TypedVMRegion.macros>

IVMRegion::IVMRegion() {}

IVMRegion::IVMRegion(vm_region_k buffer)
{
     _data = buffer;
}


bool IVMRegion::operator==(const IVMRegion& other) const
{
    return this->_data == other._data;
}
