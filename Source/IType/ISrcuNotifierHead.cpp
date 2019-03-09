/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISrcuNotifierHead.hpp>

#define CFG_DEFINE_PS_TYPE_NAME srcu_notifier_head
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISrcuNotifierHead

#include "0_init.macros"

#include <ITypes/Macros/VariableSrcuNotifierHead.macros>
#include <ITypes/Macros/TypedSrcuNotifierHead.macros>

ISrcuNotifierHead::ISrcuNotifierHead() {}

ISrcuNotifierHead::ISrcuNotifierHead(srcu_notifier_head_k buffer)
{
     _data = buffer;
}


bool ISrcuNotifierHead::operator==(const ISrcuNotifierHead& other) const
{
    return this->_data == other._data;
}
