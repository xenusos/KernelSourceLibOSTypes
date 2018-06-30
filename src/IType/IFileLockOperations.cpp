/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFileLockOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME file_lock_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFileLockOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableFileLockOperations.macros>
#include <ITypes/Macros/TypedFileLockOperations.macros>

IFileLockOperations::IFileLockOperations() {}

IFileLockOperations::IFileLockOperations(file_lock_operations_k buffer)
{
     _data = buffer;
}


bool IFileLockOperations::operator==(const IFileLockOperations& other) const
{
    return this->_data == other._data;
}
