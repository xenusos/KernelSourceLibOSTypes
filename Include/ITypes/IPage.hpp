/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPage
{
private: 
    page_k _data;

public: 
    IPage();
    IPage(page_k buffer);

    #include "Macros/VariablePage.macros"
    #include "Macros/TypedPage.macros"


    page_k InternalBuffer() { return _data; }
    bool operator==(const IPage& other) const;
};

#include "Macros/0_cleanup.macros"
