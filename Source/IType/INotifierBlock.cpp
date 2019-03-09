/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/INotifierBlock.hpp>

#define CFG_DEFINE_PS_TYPE_NAME notifier_block
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS INotifierBlock

#include "0_init.macros"

#include <ITypes/Macros/VariableNotifierBlock.macros>
#include <ITypes/Macros/TypedNotifierBlock.macros>

INotifierBlock::INotifierBlock() {}

INotifierBlock::INotifierBlock(notifier_block_k buffer)
{
     _data = buffer;
}


bool INotifierBlock::operator==(const INotifierBlock& other) const
{
    return this->_data == other._data;
}
