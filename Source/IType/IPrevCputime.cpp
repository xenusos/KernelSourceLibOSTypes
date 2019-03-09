/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPrevCputime.hpp>

#define CFG_DEFINE_PS_TYPE_NAME prev_cputime
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPrevCputime

#include "0_init.macros"

#include <ITypes/Macros/VariablePrevCputime.macros>
#include <ITypes/Macros/TypedPrevCputime.macros>

IPrevCputime::IPrevCputime() {}

IPrevCputime::IPrevCputime(prev_cputime_k buffer)
{
     _data = buffer;
}


bool IPrevCputime::operator==(const IPrevCputime& other) const
{
    return this->_data == other._data;
}
