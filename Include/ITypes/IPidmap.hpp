/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPidmap
{
private: 
    pidmap_k _data;

public: 
    IPidmap();
    IPidmap(pidmap_k buffer);

    #include "Macros/VariablePidmap.macros"
    #include "Macros/TypedPidmap.macros"


    pidmap_k InternalBuffer() { return _data; }
    bool operator==(const IPidmap& other) const;
};

#include "Macros/0_cleanup.macros"
