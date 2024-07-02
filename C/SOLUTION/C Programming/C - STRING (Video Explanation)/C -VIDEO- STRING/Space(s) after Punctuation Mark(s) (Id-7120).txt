#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[101];
    scanf("%[^\n]", str);
    for(int index=0; str[index] != '\0'; index++)
    {
        printf("%c", str[index]);
        if(str[index] == ',' || str[index] == '.' || str[index] == '!'
                || str[index] == '?')
        {
            printf(" ");
        }
    }
    return 0;
}