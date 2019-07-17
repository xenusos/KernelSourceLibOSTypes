/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFileName.hpp>

#define CFG_DEFINE_PS_TYPE_NAME filename
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFileName

#include "0_init.macros"

#include <ITypes/Macros/VariableFileName.macros>
#include <ITypes/Macros/TypedFileName.macros>

IFileName::IFileName() {}

IFileName::IFileName(filename_k buffer)
{
     _data = buffer;
}


bool IFileName::operator==(const IFileName& other) const
{
    return this->_data == other._data;
}
