/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDEntry.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dentry
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDEntry

#include "0_init.macros"

#include <ITypes/Macros/VariableDEntry.macros>
#include <ITypes/Macros/TypedDEntry.macros>

IDEntry::IDEntry() {}

IDEntry::IDEntry(dentry_k buffer)
{
     _data = buffer;
}


bool IDEntry::operator==(const IDEntry& other) const
{
    return this->_data == other._data;
}
