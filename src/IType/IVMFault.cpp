/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IVMFault.hpp>

#define CFG_DEFINE_PS_TYPE_NAME vm_fault
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IVMFault

#include "0_init.macros"

#include <ITypes/Macros/VariableVMFault.macros>
#include <ITypes/Macros/TypedVMFault.macros>

IVMFault::IVMFault() {}

IVMFault::IVMFault(vm_fault_k buffer)
{
     _data = buffer;
}


bool IVMFault::operator==(const IVMFault& other) const
{
    return this->_data == other._data;
}
