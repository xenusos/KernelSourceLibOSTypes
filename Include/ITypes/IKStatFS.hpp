/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKStatFS
{
private: 
    kstatfs_k _data;

public: 
    IKStatFS();
    IKStatFS(kstatfs_k buffer);

    #include "Macros/VariableKStatFS.macros"
    #include "Macros/TypedKStatFS.macros"


    kstatfs_k InternalBuffer() { return _data; }
    bool operator==(const IKStatFS& other) const;
};

#include "Macros/0_cleanup.macros"
