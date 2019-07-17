/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUrb
{
private: 
    urb_k _data;

public: 
    IUrb();
    IUrb(urb_k buffer);

    #include "Macros/VariableUrb.macros"
    #include "Macros/TypedUrb.macros"


    urb_k InternalBuffer() { return _data; }
    bool operator==(const IUrb& other) const;
};

#include "Macros/0_cleanup.macros"
