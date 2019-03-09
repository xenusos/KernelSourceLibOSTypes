/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISignalStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME signal_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISignalStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableSignalStruct.macros>
#include <ITypes/Macros/TypedSignalStruct.macros>

ISignalStruct::ISignalStruct() {}

ISignalStruct::ISignalStruct(signal_struct_k buffer)
{
     _data = buffer;
}


bool ISignalStruct::operator==(const ISignalStruct& other) const
{
    return this->_data == other._data;
}
