/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IThreadInfo
{
private: 
    thread_info_k _data;

public: 
    IThreadInfo();
    IThreadInfo(thread_info_k buffer);

    #include "Macros/VariableThreadInfo.macros"
    #include "Macros/TypedThreadInfo.macros"


    thread_info_k InternalBuffer() { return _data; }
    bool operator==(const IThreadInfo& other) const;
};

#include "Macros/0_cleanup.macros"
