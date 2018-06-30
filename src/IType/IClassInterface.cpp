/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IClassInterface.hpp>

#define CFG_DEFINE_PS_TYPE_NAME class_interface
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IClassInterface

#include "0_init.macros"

#include <ITypes/Macros/VariableClassInterface.macros>
#include <ITypes/Macros/TypedClassInterface.macros>

IClassInterface::IClassInterface() {}

IClassInterface::IClassInterface(class_interface_k buffer)
{
     _data = buffer;
}


bool IClassInterface::operator==(const IClassInterface& other) const
{
    return this->_data == other._data;
}
