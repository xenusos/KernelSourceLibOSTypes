/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISpinlockT.hpp>

#define CFG_DEFINE_PS_TYPE_NAME spinlock_t
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISpinlockT

#include "0_init.macros"

#include <ITypes/Macros/VariableSpinlockT.macros>
#include <ITypes/Macros/TypedSpinlockT.macros>

ISpinlockT::ISpinlockT() {}

ISpinlockT::ISpinlockT(spinlock_t_k buffer)
{
     _data = buffer;
}


bool ISpinlockT::operator==(const ISpinlockT& other) const
{
    return this->_data == other._data;
}
