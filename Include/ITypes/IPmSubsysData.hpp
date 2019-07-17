/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPmSubsysData
{
private: 
    pm_subsys_data_k _data;

public: 
    IPmSubsysData();
    IPmSubsysData(pm_subsys_data_k buffer);

    #include "Macros/VariablePmSubsysData.macros"
    #include "Macros/TypedPmSubsysData.macros"


    pm_subsys_data_k InternalBuffer() { return _data; }
    bool operator==(const IPmSubsysData& other) const;
};

#include "Macros/0_cleanup.macros"
