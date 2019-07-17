/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson (See License.txt) 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISDData
{
private: 
    sd_data_k _data;

public: 
    ISDData();
    ISDData(sd_data_k buffer);

    #include "Macros/VariableSDData.macros"
    #include "Macros/TypedSDData.macros"


    sd_data_k InternalBuffer() { return _data; }
    bool operator==(const ISDData& other) const;
};

#include "Macros/0_cleanup.macros"
