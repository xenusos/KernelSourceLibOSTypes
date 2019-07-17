/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IThreadStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME thread_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IThreadStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableThreadStruct.macros>
#include <ITypes/Macros/TypedThreadStruct.macros>

IThreadStruct::IThreadStruct() {}

IThreadStruct::IThreadStruct(thread_struct_k buffer)
{
     _data = buffer;
}


bool IThreadStruct::operator==(const IThreadStruct& other) const
{
    return this->_data == other._data;
}
