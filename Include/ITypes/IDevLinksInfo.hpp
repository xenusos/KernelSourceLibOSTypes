/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDevLinksInfo
{
private: 
    dev_links_info_k _data;

public: 
    IDevLinksInfo();
    IDevLinksInfo(dev_links_info_k buffer);

    #include "Macros/VariableDevLinksInfo.macros"
    #include "Macros/TypedDevLinksInfo.macros"


    dev_links_info_k InternalBuffer() { return _data; }
    bool operator==(const IDevLinksInfo& other) const;
};

#include "Macros/0_cleanup.macros"
