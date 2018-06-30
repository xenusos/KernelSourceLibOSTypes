/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IVFSMount
{
private: 
    vfsmount_k _data;

public: 
    IVFSMount();
    IVFSMount(vfsmount_k buffer);

    #include "Macros/VariableVFSMount.macros"
    #include "Macros/TypedVFSMount.macros"


    vfsmount_k InternalBuffer() { return _data; }
    bool operator==(const IVFSMount& other) const;
};

#include "Macros/0_cleanup.macros"
