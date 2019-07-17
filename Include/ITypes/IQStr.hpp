/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IQStr
{
private: 
    qstr_k _data;

public: 
    IQStr();
    IQStr(qstr_k buffer);

    #include "Macros/VariableQStr.macros"
    #include "Macros/TypedQStr.macros"


    qstr_k InternalBuffer() { return _data; }
    bool operator==(const IQStr& other) const;
};

#include "Macros/0_cleanup.macros"
