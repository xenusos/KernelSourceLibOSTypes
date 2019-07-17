/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IClass.hpp>

#define CFG_DEFINE_PS_TYPE_NAME class
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IClass

#include "0_init.macros"

#include <ITypes/Macros/VariableClass.macros>
#include <ITypes/Macros/TypedClass.macros>

IClass::IClass() {}

IClass::IClass(class_k buffer)
{
     _data = buffer;
}


bool IClass::operator==(const IClass& other) const
{
    return this->_data == other._data;
}
