/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ISuperBlock.hpp>

#define CFG_DEFINE_PS_TYPE_NAME super_block
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ISuperBlock

#include "0_init.macros"

#include <ITypes/Macros/VariableSuperBlock.macros>
#include <ITypes/Macros/TypedSuperBlock.macros>

ISuperBlock::ISuperBlock() {}

ISuperBlock::ISuperBlock(super_block_k buffer)
{
     _data = buffer;
}


bool ISuperBlock::operator==(const ISuperBlock& other) const
{
    return this->_data == other._data;
}
