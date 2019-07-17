/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDEntryOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dentry_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDEntryOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableDEntryOperations.macros>
#include <ITypes/Macros/TypedDEntryOperations.macros>

IDEntryOperations::IDEntryOperations() {}

IDEntryOperations::IDEntryOperations(dentry_operations_k buffer)
{
     _data = buffer;
}


bool IDEntryOperations::operator==(const IDEntryOperations& other) const
{
    return this->_data == other._data;
}
