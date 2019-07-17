/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFileOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME file_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFileOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableFileOperations.macros>
#include <ITypes/Macros/TypedFileOperations.macros>

IFileOperations::IFileOperations() {}

IFileOperations::IFileOperations(file_operations_k buffer)
{
     _data = buffer;
}


bool IFileOperations::operator==(const IFileOperations& other) const
{
    return this->_data == other._data;
}
