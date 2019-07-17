/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciDev.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_dev
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciDev

#include "0_init.macros"

#include <ITypes/Macros/VariablePciDev.macros>
#include <ITypes/Macros/TypedPciDev.macros>

IPciDev::IPciDev() {}

IPciDev::IPciDev(pci_dev_k buffer)
{
     _data = buffer;
}


bool IPciDev::operator==(const IPciDev& other) const
{
    return this->_data == other._data;
}
