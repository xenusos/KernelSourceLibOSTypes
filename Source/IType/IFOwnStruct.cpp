/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFOwnStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME fown_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFOwnStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableFOwnStruct.macros>
#include <ITypes/Macros/TypedFOwnStruct.macros>

IFOwnStruct::IFOwnStruct() {}

IFOwnStruct::IFOwnStruct(fown_struct_k buffer)
{
     _data = buffer;
}


bool IFOwnStruct::operator==(const IFOwnStruct& other) const
{
    return this->_data == other._data;
}
