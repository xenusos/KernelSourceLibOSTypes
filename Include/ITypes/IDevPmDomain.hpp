/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IDevPmDomain
{
private: 
    dev_pm_domain_k _data;

public: 
    IDevPmDomain();
    IDevPmDomain(dev_pm_domain_k buffer);

    #include "Macros/VariableDevPmDomain.macros"
    #include "Macros/TypedDevPmDomain.macros"


    dev_pm_domain_k InternalBuffer() { return _data; }
    bool operator==(const IDevPmDomain& other) const;
};

#include "Macros/0_cleanup.macros"
