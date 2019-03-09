/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKeyConstruction.hpp>

#define CFG_DEFINE_PS_TYPE_NAME key_construction
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKeyConstruction

#include "0_init.macros"

#include <ITypes/Macros/VariableKeyConstruction.macros>
#include <ITypes/Macros/TypedKeyConstruction.macros>

IKeyConstruction::IKeyConstruction() {}

IKeyConstruction::IKeyConstruction(key_construction_k buffer)
{
     _data = buffer;
}


bool IKeyConstruction::operator==(const IKeyConstruction& other) const
{
    return this->_data == other._data;
}
