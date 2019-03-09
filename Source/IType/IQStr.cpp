/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IQStr.hpp>

#define CFG_DEFINE_PS_TYPE_NAME qstr
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IQStr

#include "0_init.macros"

#include <ITypes/Macros/VariableQStr.macros>
#include <ITypes/Macros/TypedQStr.macros>

IQStr::IQStr() {}

IQStr::IQStr(qstr_k buffer)
{
     _data = buffer;
}


bool IQStr::operator==(const IQStr& other) const
{
    return this->_data == other._data;
}
