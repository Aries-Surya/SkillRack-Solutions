#include<stdio.h>

int main()
{
    int num;
    scanf("%d", &num);
    if(num % 6 == 0)
    {
        if(num % 4 == 0 || num % 8 == 0)
        {
            printf("Yes");
        }
        else
        {
            printf("No");
        }
    }
    else
    {
        printf("No");
    }
    return 0;
}
