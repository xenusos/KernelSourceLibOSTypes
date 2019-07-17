/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPidNamespace
{
private: 
    pid_namespace_k _data;

public: 
    IPidNamespace();
    IPidNamespace(pid_namespace_k buffer);

    #include "Macros/VariablePidNamespace.macros"
    #include "Macros/TypedPidNamespace.macros"


    pid_namespace_k InternalBuffer() { return _data; }
    bool operator==(const IPidNamespace& other) const;
};

#include "Macros/0_cleanup.macros"
