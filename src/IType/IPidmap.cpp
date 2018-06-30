/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPidmap.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pidmap
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPidmap

#include "0_init.macros"

#include <ITypes/Macros/VariablePidmap.macros>
#include <ITypes/Macros/TypedPidmap.macros>

IPidmap::IPidmap() {}

IPidmap::IPidmap(pidmap_k buffer)
{
     _data = buffer;
}


bool IPidmap::operator==(const IPidmap& other) const
{
    return this->_data == other._data;
}
