/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDevLinksInfo.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dev_links_info
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDevLinksInfo

#include "0_init.macros"

#include <ITypes/Macros/VariableDevLinksInfo.macros>
#include <ITypes/Macros/TypedDevLinksInfo.macros>

IDevLinksInfo::IDevLinksInfo() {}

IDevLinksInfo::IDevLinksInfo(dev_links_info_k buffer)
{
     _data = buffer;
}


bool IDevLinksInfo::operator==(const IDevLinksInfo& other) const
{
    return this->_data == other._data;
}
