/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPacctStruct.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pacct_struct
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPacctStruct

#include "0_init.macros"

#include <ITypes/Macros/VariablePacctStruct.macros>
#include <ITypes/Macros/TypedPacctStruct.macros>

IPacctStruct::IPacctStruct() {}

IPacctStruct::IPacctStruct(pacct_struct_k buffer)
{
     _data = buffer;
}


bool IPacctStruct::operator==(const IPacctStruct& other) const
{
    return this->_data == other._data;
}
