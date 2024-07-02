#include<stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int index;
    for(index = 0; str[index] != '\0'; index++)
    {
        printf("%c", tolower(str[index]));
        if(isupper(str[index+1]))
        {
            printf(" ");
        }
    }
    return 0;
}