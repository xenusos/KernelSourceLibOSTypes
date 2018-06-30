/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IBinAttribute.hpp>

#define CFG_DEFINE_PS_TYPE_NAME bin_attribute
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IBinAttribute

#include "0_init.macros"

#include <ITypes/Macros/VariableBinAttribute.macros>
#include <ITypes/Macros/TypedBinAttribute.macros>

IBinAttribute::IBinAttribute() {}

IBinAttribute::IBinAttribute(bin_attribute_k buffer)
{
     _data = buffer;
}


bool IBinAttribute::operator==(const IBinAttribute& other) const
{
    return this->_data == other._data;
}
