/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IModuleKobject.hpp>

#define CFG_DEFINE_PS_TYPE_NAME module_kobject
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IModuleKobject

#include "0_init.macros"

#include <ITypes/Macros/VariableModuleKobject.macros>
#include <ITypes/Macros/TypedModuleKobject.macros>

IModuleKobject::IModuleKobject() {}

IModuleKobject::IModuleKobject(module_kobject_k buffer)
{
     _data = buffer;
}


bool IModuleKobject::operator==(const IModuleKobject& other) const
{
    return this->_data == other._data;
}
