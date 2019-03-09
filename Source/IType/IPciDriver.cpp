/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciDriver.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_driver
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciDriver

#include "0_init.macros"

#include <ITypes/Macros/VariablePciDriver.macros>
#include <ITypes/Macros/TypedPciDriver.macros>

IPciDriver::IPciDriver() {}

IPciDriver::IPciDriver(pci_driver_k buffer)
{
     _data = buffer;
}


bool IPciDriver::operator==(const IPciDriver& other) const
{
    return this->_data == other._data;
}
