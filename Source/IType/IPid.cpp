/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPid.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pid
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPid

#include "0_init.macros"

#include <ITypes/Macros/VariablePid.macros>
#include <ITypes/Macros/TypedPid.macros>

IPid::IPid() {}

IPid::IPid(pid_k buffer)
{
     _data = buffer;
}


bool IPid::operator==(const IPid& other) const
{
    return this->_data == other._data;
}
