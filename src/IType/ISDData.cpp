/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISDData.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sd_data
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISDData

#include "0_init.macros"

#include <ITypes/Macros/VariableSDData.macros>
#include <ITypes/Macros/TypedSDData.macros>

ISDData::ISDData() {}

ISDData::ISDData(sd_data_k buffer)
{
     _data = buffer;
}


bool ISDData::operator==(const ISDData& other) const
{
    return this->_data == other._data;
}
