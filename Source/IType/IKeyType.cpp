/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKeyType.hpp>

#define CFG_DEFINE_PS_TYPE_NAME key_type
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKeyType

#include "0_init.macros"

#include <ITypes/Macros/VariableKeyType.macros>
#include <ITypes/Macros/TypedKeyType.macros>

IKeyType::IKeyType() {}

IKeyType::IKeyType(key_type_k buffer)
{
     _data = buffer;
}


bool IKeyType::operator==(const IKeyType& other) const
{
    return this->_data == other._data;
}
