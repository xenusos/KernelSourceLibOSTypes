/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IModuleVersionAttribute.hpp>

#define CFG_DEFINE_PS_TYPE_NAME module_version_attribute
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IModuleVersionAttribute

#include "0_init.macros"

#include <ITypes/Macros/VariableModuleVersionAttribute.macros>
#include <ITypes/Macros/TypedModuleVersionAttribute.macros>

IModuleVersionAttribute::IModuleVersionAttribute() {}

IModuleVersionAttribute::IModuleVersionAttribute(module_version_attribute_k buffer)
{
     _data = buffer;
}


bool IModuleVersionAttribute::operator==(const IModuleVersionAttribute& other) const
{
    return this->_data == other._data;
}
