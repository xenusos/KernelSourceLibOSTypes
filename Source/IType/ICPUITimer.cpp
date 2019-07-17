/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ICPUITimer.hpp>

#define CFG_DEFINE_PS_TYPE_NAME cpu_itimer
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ICPUITimer

#include "0_init.macros"

#include <ITypes/Macros/VariableCPUITimer.macros>
#include <ITypes/Macros/TypedCPUITimer.macros>

ICPUITimer::ICPUITimer() {}

ICPUITimer::ICPUITimer(cpu_itimer_k buffer)
{
     _data = buffer;
}


bool ICPUITimer::operator==(const ICPUITimer& other) const
{
    return this->_data == other._data;
}
