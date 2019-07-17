/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ICred.hpp>

#define CFG_DEFINE_PS_TYPE_NAME cred
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ICred

#include "0_init.macros"

#include <ITypes/Macros/VariableCred.macros>
#include <ITypes/Macros/TypedCred.macros>

ICred::ICred() {}

ICred::ICred(cred_k buffer)
{
     _data = buffer;
}


bool ICred::operator==(const ICred& other) const
{
    return this->_data == other._data;
}
