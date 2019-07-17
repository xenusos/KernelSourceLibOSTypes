/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISeqOperations.hpp>

#define CFG_DEFINE_PS_TYPE_NAME seq_operations
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISeqOperations

#include "0_init.macros"

#include <ITypes/Macros/VariableSeqOperations.macros>
#include <ITypes/Macros/TypedSeqOperations.macros>

ISeqOperations::ISeqOperations() {}

ISeqOperations::ISeqOperations(seq_operations_k buffer)
{
     _data = buffer;
}


bool ISeqOperations::operator==(const ISeqOperations& other) const
{
    return this->_data == other._data;
}
