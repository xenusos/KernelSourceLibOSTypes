/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUpid.hpp>

#define CFG_DEFINE_PS_TYPE_NAME upid
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUpid

#include "0_init.macros"

#include <ITypes/Macros/VariableUpid.macros>
#include <ITypes/Macros/TypedUpid.macros>

IUpid::IUpid() {}

IUpid::IUpid(upid_k buffer)
{
     _data = buffer;
}


bool IUpid::operator==(const IUpid& other) const
{
    return this->_data == other._data;
}
