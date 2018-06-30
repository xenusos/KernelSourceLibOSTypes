/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDevExtAttribute
{
private: 
    dev_ext_attribute_k _data;

public: 
    IDevExtAttribute();
    IDevExtAttribute(dev_ext_attribute_k buffer);

    #include "Macros/VariableDevExtAttribute.macros"
    #include "Macros/TypedDevExtAttribute.macros"


    dev_ext_attribute_k InternalBuffer() { return _data; }
    bool operator==(const IDevExtAttribute& other) const;
};

#include "Macros/0_cleanup.macros"
