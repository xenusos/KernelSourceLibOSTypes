/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISBWriters.hpp>

#define CFG_DEFINE_PS_TYPE_NAME sb_writers
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISBWriters

#include "0_init.macros"

#include <ITypes/Macros/VariableSBWriters.macros>
#include <ITypes/Macros/TypedSBWriters.macros>

ISBWriters::ISBWriters() {}

ISBWriters::ISBWriters(sb_writers_k buffer)
{
     _data = buffer;
}


bool ISBWriters::operator==(const ISBWriters& other) const
{
    return this->_data == other._data;
}
