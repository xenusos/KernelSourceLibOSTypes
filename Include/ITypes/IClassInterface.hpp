/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IClassInterface
{
private: 
    class_interface_k _data;

public: 
    IClassInterface();
    IClassInterface(class_interface_k buffer);

    #include "Macros/VariableClassInterface.macros"
    #include "Macros/TypedClassInterface.macros"


    class_interface_k InternalBuffer() { return _data; }
    bool operator==(const IClassInterface& other) const;
};

#include "Macros/0_cleanup.macros"
