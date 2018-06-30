/*                                               
    Purpose:                                     
    Author: Reece W.                             
    License: All Rights Reserved J. Reece Wilson 
*/                                               
#pragma once
#include "Macros/0_init.macros"

class ICPUITimer
{
private: 
    cpu_itimer_k _data;

public: 
    ICPUITimer();
    ICPUITimer(cpu_itimer_k buffer);

    #include "Macros/VariableCPUITimer.macros"
    #include "Macros/TypedCPUITimer.macros"


    cpu_itimer_k InternalBuffer() { return _data; }
    bool operator==(const ICPUITimer& other) const;
};

#include "Macros/0_cleanup.macros"
