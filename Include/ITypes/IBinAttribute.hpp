/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IBinAttribute
{
private: 
    bin_attribute_k _data;

public: 
    IBinAttribute();
    IBinAttribute(bin_attribute_k buffer);

    #include "Macros/VariableBinAttribute.macros"
    #include "Macros/TypedBinAttribute.macros"


    bin_attribute_k InternalBuffer() { return _data; }
    bool operator==(const IBinAttribute& other) const;
};

#include "Macros/0_cleanup.macros"
