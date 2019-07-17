/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDevPmOps
{
private: 
    dev_pm_ops_k _data;

public: 
    IDevPmOps();
    IDevPmOps(dev_pm_ops_k buffer);

    #include "Macros/VariableDevPmOps.macros"
    #include "Macros/TypedDevPmOps.macros"


    dev_pm_ops_k InternalBuffer() { return _data; }
    bool operator==(const IDevPmOps& other) const;
};

#include "Macros/0_cleanup.macros"
