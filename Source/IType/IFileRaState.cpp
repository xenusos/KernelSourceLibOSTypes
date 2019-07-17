/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFileRaState.hpp>

#define CFG_DEFINE_PS_TYPE_NAME file_ra_state
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFileRaState

#include "0_init.macros"

#include <ITypes/Macros/VariableFileRaState.macros>
#include <ITypes/Macros/TypedFileRaState.macros>

IFileRaState::IFileRaState() {}

IFileRaState::IFileRaState(file_ra_state_k buffer)
{
     _data = buffer;
}


bool IFileRaState::operator==(const IFileRaState& other) const
{
    return this->_data == other._data;
}
