/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IModuleUse.hpp>

#define CFG_DEFINE_PS_TYPE_NAME module_use
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IModuleUse

#include "0_init.macros"

#include <ITypes/Macros/VariableModuleUse.macros>
#include <ITypes/Macros/TypedModuleUse.macros>

IModuleUse::IModuleUse() {}

IModuleUse::IModuleUse(module_use_k buffer)
{
     _data = buffer;
}


bool IModuleUse::operator==(const IModuleUse& other) const
{
    return this->_data == other._data;
}
