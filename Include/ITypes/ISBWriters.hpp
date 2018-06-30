/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ISBWriters
{
private: 
    sb_writers_k _data;

public: 
    ISBWriters();
    ISBWriters(sb_writers_k buffer);

    #include "Macros/VariableSBWriters.macros"
    #include "Macros/TypedSBWriters.macros"


    sb_writers_k InternalBuffer() { return _data; }
    bool operator==(const ISBWriters& other) const;
};

#include "Macros/0_cleanup.macros"
