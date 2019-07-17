/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IGroupInfo
{
private: 
    group_info_k _data;

public: 
    IGroupInfo();
    IGroupInfo(group_info_k buffer);

    #include "Macros/VariableGroupInfo.macros"
    #include "Macros/TypedGroupInfo.macros"


    group_info_k InternalBuffer() { return _data; }
    bool operator==(const IGroupInfo& other) const;
};

#include "Macros/0_cleanup.macros"
