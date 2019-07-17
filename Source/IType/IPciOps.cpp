/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciOps.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_ops
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciOps

#include "0_init.macros"

#include <ITypes/Macros/VariablePciOps.macros>
#include <ITypes/Macros/TypedPciOps.macros>

IPciOps::IPciOps() {}

IPciOps::IPciOps(pci_ops_k buffer)
{
     _data = buffer;
}


bool IPciOps::operator==(const IPciOps& other) const
{
    return this->_data == other._data;
}
