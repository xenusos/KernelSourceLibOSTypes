/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKeyMatchData
{
private: 
    key_match_data_k _data;

public: 
    IKeyMatchData();
    IKeyMatchData(key_match_data_k buffer);

    #include "Macros/VariableKeyMatchData.macros"
    #include "Macros/TypedKeyMatchData.macros"


    key_match_data_k InternalBuffer() { return _data; }
    bool operator==(const IKeyMatchData& other) const;
};

#include "Macros/0_cleanup.macros"
