/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IResource.hpp>

#define CFG_DEFINE_PS_TYPE_NAME resource
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IResource

#include "0_init.macros"

#include <ITypes/Macros/VariableResource.macros>
#include <ITypes/Macros/TypedResource.macros>

IResource::IResource() {}

IResource::IResource(resource_k buffer)
{
     _data = buffer;
}


bool IResource::operator==(const IResource& other) const
{
    return this->_data == other._data;
}
