
#include<stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int index;
    for(index = 0; str[index] != '\0'; index++)
    {
        printf("%c", str[str[index] - 'a']);
    }
    return 0;
}
