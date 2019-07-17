/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFWNodeHandle.hpp>

#define CFG_DEFINE_PS_TYPE_NAME fwnode_handle
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFWNodeHandle

#include "0_init.macros"

#include <ITypes/Macros/VariableFWNodeHandle.macros>
#include <ITypes/Macros/TypedFWNodeHandle.macros>

IFWNodeHandle::IFWNodeHandle() {}

IFWNodeHandle::IFWNodeHandle(fwnode_handle_k buffer)
{
     _data = buffer;
}


bool IFWNodeHandle::operator==(const IFWNodeHandle& other) const
{
    return this->_data == other._data;
}
