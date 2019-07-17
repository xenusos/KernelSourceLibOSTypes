/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFsStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME fs_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFsStruct

#include "0_init.macros"

#include <ITypes/Macros/VariableFsStruct.macros>
#include <ITypes/Macros/TypedFsStruct.macros>

IFsStruct::IFsStruct() {}

IFsStruct::IFsStruct(fs_struct_k buffer)
{
     _data = buffer;
}


bool IFsStruct::operator==(const IFsStruct& other) const
{
    return this->_data == other._data;
}
