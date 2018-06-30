/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IKObject
{
private: 
    kobject_k _data;

public: 
    IKObject();
    IKObject(kobject_k buffer);

    #include "Macros/VariableKObject.macros"
    #include "Macros/TypedKObject.macros"


    kobject_k InternalBuffer() { return _data; }
    bool operator==(const IKObject& other) const;
};

#include "Macros/0_cleanup.macros"
