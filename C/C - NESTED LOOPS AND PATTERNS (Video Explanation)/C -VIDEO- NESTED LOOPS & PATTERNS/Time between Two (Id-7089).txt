#include <stdio.h>
#include <stdlib.h>

int main()
{
    int startHH, startMM, startSS;
    int endHH, endMM, endSS;
    scanf("%d:%d:%d\n", &startHH, &startMM, &startSS);
    scanf("%d:%d:%d", &endHH, &endMM, &endSS);
    int hCtr = startHH, mCtr = startMM, sCtr = startSS;
    int maxMin, maxSec;
    for(; hCtr<= endHH; hCtr++)
    {
        maxMin = (hCtr == endHH) ? endMM : 59;
        for(; mCtr <= maxMin; mCtr++)
        {
            maxSec = (hCtr == endHH && mCtr == endMM) ? endSS : 59;
            for(; sCtr <= maxSec; sCtr++)
            {
                printf("%02d:%02d:%02d\n", hCtr, mCtr, sCtr);
            }
            sCtr = 0;
        }
        mCtr = 0;
    }
    return 0;
}