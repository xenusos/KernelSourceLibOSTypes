/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ICDev
{
private: 
    cdev_k _data;

public: 
    ICDev();
    ICDev(cdev_k buffer);

    #include "Macros/VariableCDev.macros"
    #include "Macros/TypedCDev.macros"


    cdev_k InternalBuffer() { return _data; }
    bool operator==(const ICDev& other) const;
};

#include "Macros/0_cleanup.macros"
