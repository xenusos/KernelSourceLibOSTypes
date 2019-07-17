/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKeyPreparsedPayload
{
private: 
    key_preparsed_payload_k _data;

public: 
    IKeyPreparsedPayload();
    IKeyPreparsedPayload(key_preparsed_payload_k buffer);

    #include "Macros/VariableKeyPreparsedPayload.macros"
    #include "Macros/TypedKeyPreparsedPayload.macros"


    key_preparsed_payload_k InternalBuffer() { return _data; }
    bool operator==(const IKeyPreparsedPayload& other) const;
};

#include "Macros/0_cleanup.macros"
