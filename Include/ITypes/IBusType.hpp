/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IBusType
{
private: 
    bus_type_k _data;

public: 
    IBusType();
    IBusType(bus_type_k buffer);

    #include "Macros/VariableBusType.macros"
    #include "Macros/TypedBusType.macros"


    bus_type_k InternalBuffer() { return _data; }
    bool operator==(const IBusType& other) const;
};

#include "Macros/0_cleanup.macros"
