/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IRawNotifierHead.hpp>

#define CFG_DEFINE_PS_TYPE_NAME raw_notifier_head
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IRawNotifierHead

#include "0_init.macros"

#include <ITypes/Macros/VariableRawNotifierHead.macros>
#include <ITypes/Macros/TypedRawNotifierHead.macros>

IRawNotifierHead::IRawNotifierHead() {}

IRawNotifierHead::IRawNotifierHead(raw_notifier_head_k buffer)
{
     _data = buffer;
}


bool IRawNotifierHead::operator==(const IRawNotifierHead& other) const
{
    return this->_data == other._data;
}
