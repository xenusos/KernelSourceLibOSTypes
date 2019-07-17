/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPidLink.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pid_link
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPidLink

#include "0_init.macros"

#include <ITypes/Macros/VariablePidLink.macros>
#include <ITypes/Macros/TypedPidLink.macros>

IPidLink::IPidLink() {}

IPidLink::IPidLink(pid_link_k buffer)
{
     _data = buffer;
}


bool IPidLink::operator==(const IPidLink& other) const
{
    return this->_data == other._data;
}
