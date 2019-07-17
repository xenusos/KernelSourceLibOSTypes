/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKey.hpp>

#define CFG_DEFINE_PS_TYPE_NAME key
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKey

#include "0_init.macros"

#include <ITypes/Macros/VariableKey.macros>
#include <ITypes/Macros/TypedKey.macros>

IKey::IKey() {}

IKey::IKey(key_k buffer)
{
     _data = buffer;
}


bool IKey::operator==(const IKey& other) const
{
    return this->_data == other._data;
}
