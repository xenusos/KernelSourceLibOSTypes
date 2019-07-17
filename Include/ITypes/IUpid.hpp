/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUpid
{
private: 
    upid_k _data;

public: 
    IUpid();
    IUpid(upid_k buffer);

    #include "Macros/VariableUpid.macros"
    #include "Macros/TypedUpid.macros"


    upid_k InternalBuffer() { return _data; }
    bool operator==(const IUpid& other) const;
};

#include "Macros/0_cleanup.macros"
