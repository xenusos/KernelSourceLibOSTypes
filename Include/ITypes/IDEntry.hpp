/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDEntry
{
private: 
    dentry_k _data;

public: 
    IDEntry();
    IDEntry(dentry_k buffer);

    #include "Macros/VariableDEntry.macros"
    #include "Macros/TypedDEntry.macros"


    dentry_k InternalBuffer() { return _data; }
    bool operator==(const IDEntry& other) const;
};

#include "Macros/0_cleanup.macros"
