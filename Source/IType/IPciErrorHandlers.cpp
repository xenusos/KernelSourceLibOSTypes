/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPciErrorHandlers.hpp>

#define CFG_DEFINE_PS_TYPE_NAME pci_error_handlers
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPciErrorHandlers

#include "0_init.macros"

#include <ITypes/Macros/VariablePciErrorHandlers.macros>
#include <ITypes/Macros/TypedPciErrorHandlers.macros>

IPciErrorHandlers::IPciErrorHandlers() {}

IPciErrorHandlers::IPciErrorHandlers(pci_error_handlers_k buffer)
{
     _data = buffer;
}


bool IPciErrorHandlers::operator==(const IPciErrorHandlers& other) const
{
    return this->_data == other._data;
}
