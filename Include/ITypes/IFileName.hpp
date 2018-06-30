/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IFileName
{
private: 
    filename_k _data;

public: 
    IFileName();
    IFileName(filename_k buffer);

    #include "Macros/VariableFileName.macros"
    #include "Macros/TypedFileName.macros"


    filename_k InternalBuffer() { return _data; }
    bool operator==(const IFileName& other) const;
};

#include "Macros/0_cleanup.macros"
