/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ILoadWeight.hpp>

#define CFG_DEFINE_PS_TYPE_NAME load_weight
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ILoadWeight

#include "0_init.macros"

#include <ITypes/Macros/VariableLoadWeight.macros>
#include <ITypes/Macros/TypedLoadWeight.macros>

ILoadWeight::ILoadWeight() {}

ILoadWeight::ILoadWeight(load_weight_k buffer)
{
     _data = buffer;
}


bool ILoadWeight::operator==(const ILoadWeight& other) const
{
    return this->_data == other._data;
}
