/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IModule.hpp>

#define CFG_DEFINE_PS_TYPE_NAME module
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IModule

#include "0_init.macros"

#include <ITypes/Macros/VariableModule.macros>
#include <ITypes/Macros/TypedModule.macros>

IModule::IModule() {}

IModule::IModule(module_k buffer)
{
     _data = buffer;
}


bool IModule::operator==(const IModule& other) const
{
    return this->_data == other._data;
}
