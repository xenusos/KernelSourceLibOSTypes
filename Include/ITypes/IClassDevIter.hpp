/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IClassDevIter
{
private: 
    class_dev_iter_k _data;

public: 
    IClassDevIter();
    IClassDevIter(class_dev_iter_k buffer);

    #include "Macros/VariableClassDevIter.macros"
    #include "Macros/TypedClassDevIter.macros"


    class_dev_iter_k InternalBuffer() { return _data; }
    bool operator==(const IClassDevIter& other) const;
};

#include "Macros/0_cleanup.macros"
