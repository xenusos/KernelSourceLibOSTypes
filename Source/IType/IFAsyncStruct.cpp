/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFAsyncStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME fasync_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFAsyncStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableFAsyncStruct.macros>
#include <ITypes/Macros/TypedFAsyncStruct.macros>

IFAsyncStruct::IFAsyncStruct() {}

IFAsyncStruct::IFAsyncStruct(fasync_struct_k buffer)
{
     _data = buffer;
}


bool IFAsyncStruct::operator==(const IFAsyncStruct& other) const
{
    return this->_data == other._data;
}
