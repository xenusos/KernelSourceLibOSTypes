/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKObject.hpp>

#define CFG_DEFINE_PS_TYPE_NAME kobject
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKObject

#include "0_init.macros"

#include <ITypes/Macros/VariableKObject.macros>
#include <ITypes/Macros/TypedKObject.macros>

IKObject::IKObject() {}

IKObject::IKObject(kobject_k buffer)
{
     _data = buffer;
}


bool IKObject::operator==(const IKObject& other) const
{
    return this->_data == other._data;
}
