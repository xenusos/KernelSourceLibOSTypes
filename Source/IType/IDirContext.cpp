/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDirContext.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dir_context
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDirContext

#include "0_init.macros"

#include <ITypes/Macros/VariableDirContext.macros>
#include <ITypes/Macros/TypedDirContext.macros>

IDirContext::IDirContext() {}

IDirContext::IDirContext(dir_context_k buffer)
{
     _data = buffer;
}


bool IDirContext::operator==(const IDirContext& other) const
{
    return this->_data == other._data;
}
