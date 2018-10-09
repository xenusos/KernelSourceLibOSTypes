/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPreemptNotifier.hpp>

#define CFG_DEFINE_PS_TYPE_NAME preempt_notifier
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPreemptNotifier

#include "0_init.macros"

#include <ITypes/Macros/VariablePreemptNotifier.macros>
#include <ITypes/Macros/TypedPreemptNotifier.macros>

IPreemptNotifier::IPreemptNotifier() {}

IPreemptNotifier::IPreemptNotifier(preempt_notifier_k buffer)
{
     _data = buffer;
}


bool IPreemptNotifier::operator==(const IPreemptNotifier& other) const
{
    return this->_data == other._data;
}
