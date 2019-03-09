/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IClassDevIter.hpp>

#define CFG_DEFINE_PS_TYPE_NAME class_dev_iter
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IClassDevIter

#include "0_init.macros"

#include <ITypes/Macros/VariableClassDevIter.macros>
#include <ITypes/Macros/TypedClassDevIter.macros>

IClassDevIter::IClassDevIter() {}

IClassDevIter::IClassDevIter(class_dev_iter_k buffer)
{
     _data = buffer;
}


bool IClassDevIter::operator==(const IClassDevIter& other) const
{
    return this->_data == other._data;
}
