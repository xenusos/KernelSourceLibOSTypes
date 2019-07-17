/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISuperOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME super_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISuperOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableSuperOperations.macros>
#include <ITypes/Macros/TypedSuperOperations.macros>

ISuperOperations::ISuperOperations() {}

ISuperOperations::ISuperOperations(super_operations_k buffer)
{
     _data = buffer;
}


bool ISuperOperations::operator==(const ISuperOperations& other) const
{
    return this->_data == other._data;
}
