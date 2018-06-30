/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDevPmOps.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dev_pm_ops
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDevPmOps

#include "0_init.macros"

#include <ITypes/Macros/VariableDevPmOps.macros>
#include <ITypes/Macros/TypedDevPmOps.macros>

IDevPmOps::IDevPmOps() {}

IDevPmOps::IDevPmOps(dev_pm_ops_k buffer)
{
     _data = buffer;
}


bool IDevPmOps::operator==(const IDevPmOps& other) const
{
    return this->_data == other._data;
}
