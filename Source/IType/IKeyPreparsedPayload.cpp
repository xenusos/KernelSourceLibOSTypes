/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKeyPreparsedPayload.hpp>

#define CFG_DEFINE_PS_TYPE_NAME key_preparsed_payload
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKeyPreparsedPayload

#include "0_init.macros"

#include <ITypes/Macros/VariableKeyPreparsedPayload.macros>
#include <ITypes/Macros/TypedKeyPreparsedPayload.macros>

IKeyPreparsedPayload::IKeyPreparsedPayload() {}

IKeyPreparsedPayload::IKeyPreparsedPayload(key_preparsed_payload_k buffer)
{
     _data = buffer;
}


bool IKeyPreparsedPayload::operator==(const IKeyPreparsedPayload& other) const
{
    return this->_data == other._data;
}
