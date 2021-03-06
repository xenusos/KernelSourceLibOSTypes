/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKRef.hpp>

#define CFG_DEFINE_PS_TYPE_NAME kref
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKRef

#include "0_init.macros"

#include <ITypes/Macros/VariableKRef.macros>
#include <ITypes/Macros/TypedKRef.macros>

IKRef::IKRef() {}

IKRef::IKRef(kref_k buffer)
{
     _data = buffer;
}


bool IKRef::operator==(const IKRef& other) const
{
    return this->_data == other._data;
}
