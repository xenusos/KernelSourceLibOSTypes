/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IClass
{
private: 
    class_k _data;

public: 
    IClass();
    IClass(class_k buffer);

    #include "Macros/VariableClass.macros"
    #include "Macros/TypedClass.macros"


    class_k InternalBuffer() { return _data; }
    bool operator==(const IClass& other) const;
};

#include "Macros/0_cleanup.macros"
