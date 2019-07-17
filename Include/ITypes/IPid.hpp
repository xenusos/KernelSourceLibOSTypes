/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPid
{
private: 
    pid_k _data;

public: 
    IPid();
    IPid(pid_k buffer);

    #include "Macros/VariablePid.macros"
    #include "Macros/TypedPid.macros"


    pid_k InternalBuffer() { return _data; }
    bool operator==(const IPid& other) const;
};

#include "Macros/0_cleanup.macros"
