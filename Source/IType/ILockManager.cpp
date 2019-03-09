/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ILockManager.hpp>

#define CFG_DEFINE_PS_TYPE_NAME lock_manager
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ILockManager

#include "0_init.macros"

#include <ITypes/Macros/VariableLockManager.macros>
#include <ITypes/Macros/TypedLockManager.macros>

ILockManager::ILockManager() {}

ILockManager::ILockManager(lock_manager_k buffer)
{
     _data = buffer;
}


bool ILockManager::operator==(const ILockManager& other) const
{
    return this->_data == other._data;
}
