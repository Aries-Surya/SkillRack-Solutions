#include<stdio.h>
#include <stdlib.h>

int main()
{
    int N, firstNum, num;
    scanf("%d %d", &N, &firstNum);
    do
    {
        scanf("%d", &num);
    }
    while(firstNum%2 == num%2);
    if(firstNum % 2 !=0)
    {
        printf("%d %d", firstNum, num);
    }
    else
    {
        printf("%d %d", num, firstNum);
    }
    return 0;
}