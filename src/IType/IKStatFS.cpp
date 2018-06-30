/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IKStatFS.hpp>

#define CFG_DEFINE_PS_TYPE_NAME kstatfs
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IKStatFS

#include "0_init.macros"

#include <ITypes/Macros/VariableKStatFS.macros>
#include <ITypes/Macros/TypedKStatFS.macros>

IKStatFS::IKStatFS() {}

IKStatFS::IKStatFS(kstatfs_k buffer)
{
     _data = buffer;
}


bool IKStatFS::operator==(const IKStatFS& other) const
{
    return this->_data == other._data;
}
