/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IVFSMount.hpp>

#define CFG_DEFINE_PS_TYPE_NAME vfsmount
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IVFSMount

#include "0_init.macros"

#include <ITypes/Macros/VariableVFSMount.macros>
#include <ITypes/Macros/TypedVFSMount.macros>

IVFSMount::IVFSMount() {}

IVFSMount::IVFSMount(vfsmount_k buffer)
{
     _data = buffer;
}


bool IVFSMount::operator==(const IVFSMount& other) const
{
    return this->_data == other._data;
}
