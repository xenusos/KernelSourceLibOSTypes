/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IBusAttribute
{
private: 
    bus_attribute_k _data;

public: 
    IBusAttribute();
    IBusAttribute(bus_attribute_k buffer);

    #include "Macros/VariableBusAttribute.macros"
    #include "Macros/TypedBusAttribute.macros"


    bus_attribute_k InternalBuffer() { return _data; }
    bool operator==(const IBusAttribute& other) const;
};

#include "Macros/0_cleanup.macros"
