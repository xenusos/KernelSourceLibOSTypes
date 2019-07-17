/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IAtomicNotifierHead.hpp>

#define CFG_DEFINE_PS_TYPE_NAME atomic_notifier_head
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IAtomicNotifierHead

#include "0_init.macros"

#include <ITypes/Macros/VariableAtomicNotifierHead.macros>
#include <ITypes/Macros/TypedAtomicNotifierHead.macros>

IAtomicNotifierHead::IAtomicNotifierHead() {}

IAtomicNotifierHead::IAtomicNotifierHead(atomic_notifier_head_k buffer)
{
     _data = buffer;
}


bool IAtomicNotifierHead::operator==(const IAtomicNotifierHead& other) const
{
    return this->_data == other._data;
}
