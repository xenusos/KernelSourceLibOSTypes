/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFileLock
{
private: 
    file_lock_k _data;

public: 
    IFileLock();
    IFileLock(file_lock_k buffer);

    #include "Macros/VariableFileLock.macros"
    #include "Macros/TypedFileLock.macros"


    file_lock_k InternalBuffer() { return _data; }
    bool operator==(const IFileLock& other) const;
};

#include "Macros/0_cleanup.macros"
