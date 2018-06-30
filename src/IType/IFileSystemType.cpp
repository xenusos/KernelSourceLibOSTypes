/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFileSystemType.hpp>

#define CFG_DEFINE_PS_TYPE_NAME file_system_type
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFileSystemType

#include "0_init.macros"

#include <ITypes/Macros/VariableFileSystemType.macros>
#include <ITypes/Macros/TypedFileSystemType.macros>

IFileSystemType::IFileSystemType() {}

IFileSystemType::IFileSystemType(file_system_type_k buffer)
{
     _data = buffer;
}


bool IFileSystemType::operator==(const IFileSystemType& other) const
{
    return this->_data == other._data;
}
