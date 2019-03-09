/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFileLock.hpp>

#define CFG_DEFINE_PS_TYPE_NAME file_lock
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFileLock

#include "0_init.macros"

#include <ITypes/Macros/VariableFileLock.macros>
#include <ITypes/Macros/TypedFileLock.macros>

IFileLock::IFileLock() {}

IFileLock::IFileLock(file_lock_k buffer)
{
     _data = buffer;
}


bool IFileLock::operator==(const IFileLock& other) const
{
    return this->_data == other._data;
}
