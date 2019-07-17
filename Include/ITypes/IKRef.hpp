/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKRef
{
private: 
    kref_k _data;

public: 
    IKRef();
    IKRef(kref_k buffer);

    #include "Macros/VariableKRef.macros"
    #include "Macros/TypedKRef.macros"


    kref_k InternalBuffer() { return _data; }
    bool operator==(const IKRef& other) const;
};

#include "Macros/0_cleanup.macros"
