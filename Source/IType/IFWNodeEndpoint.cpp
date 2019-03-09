/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IFWNodeEndpoint.hpp>

#define CFG_DEFINE_PS_TYPE_NAME fwnode_endpoint
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IFWNodeEndpoint

#include "0_init.macros"

#include <ITypes/Macros/VariableFWNodeEndpoint.macros>
#include <ITypes/Macros/TypedFWNodeEndpoint.macros>

IFWNodeEndpoint::IFWNodeEndpoint() {}

IFWNodeEndpoint::IFWNodeEndpoint(fwnode_endpoint_k buffer)
{
     _data = buffer;
}


bool IFWNodeEndpoint::operator==(const IFWNodeEndpoint& other) const
{
    return this->_data == other._data;
}
