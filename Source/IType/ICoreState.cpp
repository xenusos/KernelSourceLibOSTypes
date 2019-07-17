/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ICoreState.hpp>

#define CFG_DEFINE_PS_TYPE_NAME core_state
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ICoreState

#include "0_init.macros"

#include <ITypes/Macros/VariableCoreState.macros>
#include <ITypes/Macros/TypedCoreState.macros>

ICoreState::ICoreState() {}

ICoreState::ICoreState(core_state_k buffer)
{
     _data = buffer;
}


bool ICoreState::operator==(const ICoreState& other) const
{
    return this->_data == other._data;
}
