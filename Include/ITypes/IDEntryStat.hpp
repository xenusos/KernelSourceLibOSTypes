/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDEntryStat
{
private: 
    dentry_stat_k _data;

public: 
    IDEntryStat();
    IDEntryStat(dentry_stat_k buffer);

    #include "Macros/VariableDEntryStat.macros"
    #include "Macros/TypedDEntryStat.macros"


    dentry_stat_k InternalBuffer() { return _data; }
    bool operator==(const IDEntryStat& other) const;
};

#include "Macros/0_cleanup.macros"
