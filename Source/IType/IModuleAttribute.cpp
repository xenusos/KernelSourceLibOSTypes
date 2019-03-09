/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IModuleAttribute.hpp>

#define CFG_DEFINE_PS_TYPE_NAME module_attribute
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IModuleAttribute

#include "0_init.macros"

#include <ITypes/Macros/VariableModuleAttribute.macros>
#include <ITypes/Macros/TypedModuleAttribute.macros>

IModuleAttribute::IModuleAttribute() {}

IModuleAttribute::IModuleAttribute(module_attribute_k buffer)
{
     _data = buffer;
}


bool IModuleAttribute::operator==(const IModuleAttribute& other) const
{
    return this->_data == other._data;
}
