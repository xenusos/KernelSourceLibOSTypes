/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IAttributeGroup.hpp>

#define CFG_DEFINE_PS_TYPE_NAME attribute_group
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IAttributeGroup

#include "0_init.macros"

#include <ITypes/Macros/VariableAttributeGroup.macros>
#include <ITypes/Macros/TypedAttributeGroup.macros>

IAttributeGroup::IAttributeGroup() {}

IAttributeGroup::IAttributeGroup(attribute_group_k buffer)
{
     _data = buffer;
}


bool IAttributeGroup::operator==(const IAttributeGroup& other) const
{
    return this->_data == other._data;
}
