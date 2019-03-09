/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDelayedCall.hpp>

#define CFG_DEFINE_PS_TYPE_NAME delayed_call
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDelayedCall

#include "0_init.macros"

#include <ITypes/Macros/VariableDelayedCall.macros>
#include <ITypes/Macros/TypedDelayedCall.macros>

IDelayedCall::IDelayedCall() {}

IDelayedCall::IDelayedCall(delayed_call_k buffer)
{
     _data = buffer;
}


bool IDelayedCall::operator==(const IDelayedCall& other) const
{
    return this->_data == other._data;
}
