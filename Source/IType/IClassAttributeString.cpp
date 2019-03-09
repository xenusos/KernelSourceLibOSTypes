/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IClassAttributeString.hpp>

#define CFG_DEFINE_PS_TYPE_NAME class_attribute_string
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IClassAttributeString

#include "0_init.macros"

#include <ITypes/Macros/VariableClassAttributeString.macros>
#include <ITypes/Macros/TypedClassAttributeString.macros>

IClassAttributeString::IClassAttributeString() {}

IClassAttributeString::IClassAttributeString(class_attribute_string_k buffer)
{
     _data = buffer;
}


bool IClassAttributeString::operator==(const IClassAttributeString& other) const
{
    return this->_data == other._data;
}
