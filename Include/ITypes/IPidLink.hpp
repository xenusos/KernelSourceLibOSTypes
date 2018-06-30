/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPidLink
{
private: 
    pid_link_k _data;

public: 
    IPidLink();
    IPidLink(pid_link_k buffer);

    #include "Macros/VariablePidLink.macros"
    #include "Macros/TypedPidLink.macros"


    pid_link_k InternalBuffer() { return _data; }
    bool operator==(const IPidLink& other) const;
};

#include "Macros/0_cleanup.macros"
