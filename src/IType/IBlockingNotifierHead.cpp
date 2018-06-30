/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IBlockingNotifierHead.hpp>

#define CFG_DEFINE_PS_TYPE_NAME blocking_notifier_head
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IBlockingNotifierHead

#include "0_init.macros"

#include <ITypes/Macros/VariableBlockingNotifierHead.macros>
#include <ITypes/Macros/TypedBlockingNotifierHead.macros>

IBlockingNotifierHead::IBlockingNotifierHead() {}

IBlockingNotifierHead::IBlockingNotifierHead(blocking_notifier_head_k buffer)
{
     _data = buffer;
}


bool IBlockingNotifierHead::operator==(const IBlockingNotifierHead& other) const
{
    return this->_data == other._data;
}
