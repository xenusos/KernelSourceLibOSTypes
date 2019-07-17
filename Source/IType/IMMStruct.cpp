/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IMMStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME mm_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IMMStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableMMStruct.macros>
#include <ITypes/Macros/TypedMMStruct.macros>

IMMStruct::IMMStruct() {}

IMMStruct::IMMStruct(mm_struct_k buffer)
{
     _data = buffer;
}


bool IMMStruct::operator==(const IMMStruct& other) const
{
    return this->_data == other._data;
}
