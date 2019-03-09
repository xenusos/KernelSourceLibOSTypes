/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISchedAttr.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sched_attr
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISchedAttr

#include "0_init.macros"

#include <ITypes/Macros/VariableSchedAttr.macros>
#include <ITypes/Macros/TypedSchedAttr.macros>

ISchedAttr::ISchedAttr() {}

ISchedAttr::ISchedAttr(sched_attr_k buffer)
{
     _data = buffer;
}


bool ISchedAttr::operator==(const ISchedAttr& other) const
{
    return this->_data == other._data;
}
