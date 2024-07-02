#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int index=0;
    while(str[index] != '\0')
    {
        if(str[index] != 'a' && str[index] != 'e' &&
           str[index] != 'i' && str[index] != 'o' &&
           str[index] != 'u')
        {
            printf(".%c", str[index]);
        }
        index++;
    }

    return 0;
}