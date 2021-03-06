/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKeyRingIndexKey
{
private: 
    keyring_index_key_k _data;

public: 
    IKeyRingIndexKey();
    IKeyRingIndexKey(keyring_index_key_k buffer);

    #include "Macros/VariableKeyRingIndexKey.macros"
    #include "Macros/TypedKeyRingIndexKey.macros"


    keyring_index_key_k InternalBuffer() { return _data; }
    bool operator==(const IKeyRingIndexKey& other) const;
};

#include "Macros/0_cleanup.macros"
