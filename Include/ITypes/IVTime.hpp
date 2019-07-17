/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IVTime
{
private: 
    vtime_k _data;

public: 
    IVTime();
    IVTime(vtime_k buffer);

    #include "Macros/VariableVTime.macros"
    #include "Macros/TypedVTime.macros"


    vtime_k InternalBuffer() { return _data; }
    bool operator==(const IVTime& other) const;
};

#include "Macros/0_cleanup.macros"
