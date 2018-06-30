/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IVTime.hpp>

#define CFG_DEFINE_PS_TYPE_NAME vtime
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IVTime

#include "0_init.macros"

#include <ITypes/Macros/VariableVTime.macros>
#include <ITypes/Macros/TypedVTime.macros>

IVTime::IVTime() {}

IVTime::IVTime(vtime_k buffer)
{
     _data = buffer;
}


bool IVTime::operator==(const IVTime& other) const
{
    return this->_data == other._data;
}
