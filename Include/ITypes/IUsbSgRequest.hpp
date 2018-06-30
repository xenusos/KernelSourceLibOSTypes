/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IUsbSgRequest
{
private: 
    usb_sg_request_k _data;

public: 
    IUsbSgRequest();
    IUsbSgRequest(usb_sg_request_k buffer);

    #include "Macros/VariableUsbSgRequest.macros"
    #include "Macros/TypedUsbSgRequest.macros"


    usb_sg_request_k InternalBuffer() { return _data; }
    bool operator==(const IUsbSgRequest& other) const;
};

#include "Macros/0_cleanup.macros"
