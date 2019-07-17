/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IDmaMapOps.hpp>

#define CFG_DEFINE_PS_TYPE_NAME dma_map_ops
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IDmaMapOps

#include "0_init.macros"

#include <ITypes/Macros/VariableDmaMapOps.macros>
#include <ITypes/Macros/TypedDmaMapOps.macros>

IDmaMapOps::IDmaMapOps() {}

IDmaMapOps::IDmaMapOps(dma_map_ops_k buffer)
{
     _data = buffer;
}


bool IDmaMapOps::operator==(const IDmaMapOps& other) const
{
    return this->_data == other._data;
}
