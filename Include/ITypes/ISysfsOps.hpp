/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISysfsOps
{
private: 
    sysfs_ops_k _data;

public: 
    ISysfsOps();
    ISysfsOps(sysfs_ops_k buffer);

    #include "Macros/VariableSysfsOps.macros"
    #include "Macros/TypedSysfsOps.macros"


    sysfs_ops_k InternalBuffer() { return _data; }
    bool operator==(const ISysfsOps& other) const;
};

#include "Macros/0_cleanup.macros"
