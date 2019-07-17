/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IUrb.hpp>

#define CFG_DEFINE_PS_TYPE_NAME urb
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IUrb

#include "0_init.macros"

#include <ITypes/Macros/VariableUrb.macros>
#include <ITypes/Macros/TypedUrb.macros>

IUrb::IUrb() {}

IUrb::IUrb(urb_k buffer)
{
     _data = buffer;
}


bool IUrb::operator==(const IUrb& other) const
{
    return this->_data == other._data;
}
