/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class IPrevCputime
{
private: 
    prev_cputime_k _data;

public: 
    IPrevCputime();
    IPrevCputime(prev_cputime_k buffer);

    #include "Macros/VariablePrevCputime.macros"
    #include "Macros/TypedPrevCputime.macros"


    prev_cputime_k InternalBuffer() { return _data; }
    bool operator==(const IPrevCputime& other) const;
};

#include "Macros/0_cleanup.macros"
