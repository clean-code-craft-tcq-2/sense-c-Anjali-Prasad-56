#include "stats.h"

//to compute min, max and average
struct Stats compute_statistics(const float* numberset, int setlength) {
    struct Stats s;
    s.average = 0;
    s.min = 0;
    s.max = 0;
    int LoopIndex;
        
    for(LoopIndex = 0; LoopIndex < setlength; LoopIndex++)
    {
        s.average += *(numberset + LoopIndex);
        if(LoopIndex == 0)
        {
            s.min = *(numberset + LoopIndex);
            s.max = *(numberset + LoopIndex);
        }
        else
        {
            if(s.min > *(numberset + LoopIndex))
            {
                s.min = *(numberset + LoopIndex);
            }
            
            if(s.max < *(numberset + LoopIndex) )
            {
                s.max = *(numberset + LoopIndex);
            }

        }
             
    }

    s.average /= setlength;
    
    return s;
}
