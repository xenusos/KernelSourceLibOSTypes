/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#include <xenus_lazy.h>
#include <libtypes.hpp>

#include <ITypes/IPage.hpp>

#define CFG_DEFINE_PS_TYPE_NAME page
#define CFG_DEFINE_DATA _data
#define CFG_DEFINE_CLASS IPage

#include "0_init.macros"

#include <ITypes/Macros/VariablePage.macros>
#include <ITypes/Macros/TypedPage.macros>

IPage::IPage() {}

IPage::IPage(page_k buffer)
{
     _data = buffer;
}


bool IPage::operator==(const IPage& other) const
{
    return this->_data == other._data;
}
