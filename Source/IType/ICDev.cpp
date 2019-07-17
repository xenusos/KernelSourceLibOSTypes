/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/ICDev.hpp>

#define CFG_DEFINE_PS_TYPE_NAME cdev
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS ICDev

#include "0_init.macros"

#include <ITypes/Macros/VariableCDev.macros>
#include <ITypes/Macros/TypedCDev.macros>

ICDev::ICDev() {}

ICDev::ICDev(cdev_k buffer)
{
     _data = buffer;
}


bool ICDev::operator==(const ICDev& other) const
{
    return this->_data == other._data;
}
