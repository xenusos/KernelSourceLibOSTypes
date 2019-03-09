/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDevExtAttribute.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dev_ext_attribute
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDevExtAttribute

#include "0_init.macros"

#include <ITypes/Macros/VariableDevExtAttribute.macros>
#include <ITypes/Macros/TypedDevExtAttribute.macros>

IDevExtAttribute::IDevExtAttribute() {}

IDevExtAttribute::IDevExtAttribute(dev_ext_attribute_k buffer)
{
     _data = buffer;
}


bool IDevExtAttribute::operator==(const IDevExtAttribute& other) const
{
    return this->_data == other._data;
}
