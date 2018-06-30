/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ILockManagerOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME lock_manager_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ILockManagerOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableLockManagerOperations.macros>
#include <ITypes/Macros/TypedLockManagerOperations.macros>

ILockManagerOperations::ILockManagerOperations() {}

ILockManagerOperations::ILockManagerOperations(lock_manager_operations_k buffer)
{
     _data = buffer;
}


bool ILockManagerOperations::operator==(const ILockManagerOperations& other) const
{
    return this->_data == other._data;
}
