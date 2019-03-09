/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IModKallsyms.hpp>

#define CFG_DEFINE_PS_TYPE_NAME mod_kallsyms
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IModKallsyms

#include "0_init.macros"

#include <ITypes/Macros/VariableModKallsyms.macros>
#include <ITypes/Macros/TypedModKallsyms.macros>

IModKallsyms::IModKallsyms() {}

IModKallsyms::IModKallsyms(mod_kallsyms_k buffer)
{
     _data = buffer;
}


bool IModKallsyms::operator==(const IModKallsyms& other) const
{
    return this->_data == other._data;
}
