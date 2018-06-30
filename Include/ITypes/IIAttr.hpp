/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IIAttr
{
private: 
    iattr_k _data;

public: 
    IIAttr();
    IIAttr(iattr_k buffer);

    #include "Macros/VariableIAttr.macros"
    #include "Macros/TypedIAttr.macros"


    iattr_k InternalBuffer() { return _data; }
    bool operator==(const IIAttr& other) const;
};

#include "Macros/0_cleanup.macros"
