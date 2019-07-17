/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISysfsOps.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sysfs_ops
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISysfsOps

#include "0_init.macros"

#include <ITypes/Macros/VariableSysfsOps.macros>
#include <ITypes/Macros/TypedSysfsOps.macros>

ISysfsOps::ISysfsOps() {}

ISysfsOps::ISysfsOps(sysfs_ops_k buffer)
{
     _data = buffer;
}


bool ISysfsOps::operator==(const ISysfsOps& other) const
{
    return this->_data == other._data;
}
