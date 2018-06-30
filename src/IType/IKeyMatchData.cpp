/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKeyMatchData.hpp>

#define CFG_DEFINE_PS_TYPE_NAME key_match_data
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKeyMatchData

#include "0_init.macros"

#include <ITypes/Macros/VariableKeyMatchData.macros>
#include <ITypes/Macros/TypedKeyMatchData.macros>

IKeyMatchData::IKeyMatchData() {}

IKeyMatchData::IKeyMatchData(key_match_data_k buffer)
{
     _data = buffer;
}


bool IKeyMatchData::operator==(const IKeyMatchData& other) const
{
    return this->_data == other._data;
}
