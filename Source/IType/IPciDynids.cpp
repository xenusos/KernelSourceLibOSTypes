/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciDynids.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_dynids
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciDynids

#include "0_init.macros"

#include <ITypes/Macros/VariablePciDynids.macros>
#include <ITypes/Macros/TypedPciDynids.macros>

IPciDynids::IPciDynids() {}

IPciDynids::IPciDynids(pci_dynids_k buffer)
{
     _data = buffer;
}


bool IPciDynids::operator==(const IPciDynids& other) const
{
    return this->_data == other._data;
}
