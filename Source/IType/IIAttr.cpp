/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IIAttr.hpp>

#define CFG_DEFINE_PS_TYPE_NAME iattr
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IIAttr

#include "0_init.macros"

#include <ITypes/Macros/VariableIAttr.macros>
#include <ITypes/Macros/TypedIAttr.macros>

IIAttr::IIAttr() {}

IIAttr::IIAttr(iattr_k buffer)
{
     _data = buffer;
}


bool IIAttr::operator==(const IIAttr& other) const
{
    return this->_data == other._data;
}
