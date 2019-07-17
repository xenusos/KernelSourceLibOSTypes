/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ICred
{
private: 
    cred_k _data;

public: 
    ICred();
    ICred(cred_k buffer);

    #include "Macros/VariableCred.macros"
    #include "Macros/TypedCred.macros"


    cred_k InternalBuffer() { return _data; }
    bool operator==(const ICred& other) const;
};

#include "Macros/0_cleanup.macros"
