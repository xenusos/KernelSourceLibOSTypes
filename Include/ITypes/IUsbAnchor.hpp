/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbAnchor
{
private: 
    usb_anchor_k _data;

public: 
    IUsbAnchor();
    IUsbAnchor(usb_anchor_k buffer);

    #include "Macros/VariableUsbAnchor.macros"
    #include "Macros/TypedUsbAnchor.macros"


    usb_anchor_k InternalBuffer() { return _data; }
    bool operator==(const IUsbAnchor& other) const;
};

#include "Macros/0_cleanup.macros"
