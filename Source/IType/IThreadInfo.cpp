/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IThreadInfo.hpp>

#define CFG_DEFINE_PS_TYPE_NAME thread_info
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IThreadInfo

#include "0_init.macros"

#include <ITypes/Macros/VariableThreadInfo.macros>
#include <ITypes/Macros/TypedThreadInfo.macros>

IThreadInfo::IThreadInfo() {}

IThreadInfo::IThreadInfo(thread_info_k buffer)
{
     _data = buffer;
}


bool IThreadInfo::operator==(const IThreadInfo& other) const
{
    return this->_data == other._data;
}
