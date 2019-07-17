/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbHostBos
{
private: 
    usb_host_bos_k _data;

public: 
    IUsbHostBos();
    IUsbHostBos(usb_host_bos_k buffer);

    #include "Macros/VariableUsbHostBos.macros"
    #include "Macros/TypedUsbHostBos.macros"


    usb_host_bos_k InternalBuffer() { return _data; }
    bool operator==(const IUsbHostBos& other) const;
};

#include "Macros/0_cleanup.macros"
