/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISighandStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sighand_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISighandStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableSighandStruct.macros>
#include <ITypes/Macros/TypedSighandStruct.macros>

ISighandStruct::ISighandStruct() {}

ISighandStruct::ISighandStruct(sighand_struct_k buffer)
{
     _data = buffer;
}


bool ISighandStruct::operator==(const ISighandStruct& other) const
{
    return this->_data == other._data;
}
