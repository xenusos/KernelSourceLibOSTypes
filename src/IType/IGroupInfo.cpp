/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IGroupInfo.hpp>

#define CFG_DEFINE_PS_TYPE_NAME group_info
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IGroupInfo

#include "0_init.macros"

#include <ITypes/Macros/VariableGroupInfo.macros>
#include <ITypes/Macros/TypedGroupInfo.macros>

IGroupInfo::IGroupInfo() {}

IGroupInfo::IGroupInfo(group_info_k buffer)
{
     _data = buffer;
}


bool IGroupInfo::operator==(const IGroupInfo& other) const
{
    return this->_data == other._data;
}
