/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUserStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME user_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUserStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableUserStruct.macros>
#include <ITypes/Macros/TypedUserStruct.macros>

IUserStruct::IUserStruct() {}

IUserStruct::IUserStruct(user_struct_k buffer)
{
     _data = buffer;
}


bool IUserStruct::operator==(const IUserStruct& other) const
{
    return this->_data == other._data;
}
