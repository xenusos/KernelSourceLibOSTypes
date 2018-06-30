/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKeyRingIndexKey.hpp>

#define CFG_DEFINE_PS_TYPE_NAME keyring_index_key
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKeyRingIndexKey

#include "0_init.macros"

#include <ITypes/Macros/VariableKeyRingIndexKey.macros>
#include <ITypes/Macros/TypedKeyRingIndexKey.macros>

IKeyRingIndexKey::IKeyRingIndexKey() {}

IKeyRingIndexKey::IKeyRingIndexKey(keyring_index_key_k buffer)
{
     _data = buffer;
}


bool IKeyRingIndexKey::operator==(const IKeyRingIndexKey& other) const
{
    return this->_data == other._data;
}
