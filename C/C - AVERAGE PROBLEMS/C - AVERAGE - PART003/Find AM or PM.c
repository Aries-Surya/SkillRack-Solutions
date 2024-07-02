// 204

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int hour, min;
    scanf("%d:%d", &hour, &min);
    
    if(hour > 24 || min > 60) {
        printf("INVALIDINPUT");
        return 0;
    }
    
    
    if(hour >= 12) printf("PM");
    else printf("AM");
}