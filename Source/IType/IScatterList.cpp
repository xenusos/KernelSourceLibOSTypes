/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IScatterList.hpp>

#define CFG_DEFINE_PS_TYPE_NAME scatterlist
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IScatterList

#include "0_init.macros"

#include <ITypes/Macros/VariableScatterList.macros>
#include <ITypes/Macros/TypedScatterList.macros>

IScatterList::IScatterList() {}

IScatterList::IScatterList(scatterlist_k buffer)
{
     _data = buffer;
}


bool IScatterList::operator==(const IScatterList& other) const
{
    return this->_data == other._data;
}
