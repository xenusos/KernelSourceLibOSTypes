/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IModuleLayout.hpp>

#define CFG_DEFINE_PS_TYPE_NAME module_layout
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IModuleLayout

#include "0_init.macros"

#include <ITypes/Macros/VariableModuleLayout.macros>
#include <ITypes/Macros/TypedModuleLayout.macros>

IModuleLayout::IModuleLayout() {}

IModuleLayout::IModuleLayout(module_layout_k buffer)
{
     _data = buffer;
}


bool IModuleLayout::operator==(const IModuleLayout& other) const
{
    return this->_data == other._data;
}
