#include<stdio.h>
#include <stdlib.h>

int main()
{
    int fullScaleCount=0, halfScaleCount=0;
    char ch;
    do
    {
        scanf("%c", &ch);
        if(ch == 'T')
        {
            fullScaleCount++;
        }
        else if(ch == 'S')
        {
            halfScaleCount++;
        }
    }
    while(ch != '\r' && ch != '\n');
    printf("%d", fullScaleCount + halfScaleCount/2);
    return 0;
}