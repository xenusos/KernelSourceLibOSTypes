/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IClassAttribute.hpp>

#define CFG_DEFINE_PS_TYPE_NAME class_attribute
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IClassAttribute

#include "0_init.macros"

#include <ITypes/Macros/VariableClassAttribute.macros>
#include <ITypes/Macros/TypedClassAttribute.macros>

IClassAttribute::IClassAttribute() {}

IClassAttribute::IClassAttribute(class_attribute_k buffer)
{
     _data = buffer;
}


bool IClassAttribute::operator==(const IClassAttribute& other) const
{
    return this->_data == other._data;
}
