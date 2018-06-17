/**
This is the operator overloading pages
I overloaded the >, <, >=, and <= operators
This was done so I could compare the AQI values specifically to one another
without having to chang the authors code
*/ 
#include "lab.h"
bool operator >=(const AQIData& lhs, const AQIData& rhs)
{
    return(lhs.AQI >= rhs.AQI);
}

bool operator <=(const AQIData& lhs, const AQIData& rhs)
{
    return(lhs.AQI <= rhs.AQI);
}

bool operator >(const AQIData& lhs, const AQIData& rhs)
{
    return(lhs.AQI > rhs.AQI);
}

bool operator <(const AQIData& lhs, const AQIData& rhs)
{
    return(lhs.AQI < rhs.AQI);
}
