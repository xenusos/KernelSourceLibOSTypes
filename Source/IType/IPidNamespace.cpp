/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPidNamespace.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pid_namespace
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPidNamespace

#include "0_init.macros"

#include <ITypes/Macros/VariablePidNamespace.macros>
#include <ITypes/Macros/TypedPidNamespace.macros>

IPidNamespace::IPidNamespace() {}

IPidNamespace::IPidNamespace(pid_namespace_k buffer)
{
     _data = buffer;
}


bool IPidNamespace::operator==(const IPidNamespace& other) const
{
    return this->_data == other._data;
}
