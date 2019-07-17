/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IMutex.hpp>

#define CFG_DEFINE_PS_TYPE_NAME mutex
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IMutex

#include "0_init.macros"

#include <ITypes/Macros/VariableMutex.macros>
#include <ITypes/Macros/TypedMutex.macros>

IMutex::IMutex() {}

IMutex::IMutex(mutex_k buffer)
{
     _data = buffer;
}


bool IMutex::operator==(const IMutex& other) const
{
    return this->_data == other._data;
}
