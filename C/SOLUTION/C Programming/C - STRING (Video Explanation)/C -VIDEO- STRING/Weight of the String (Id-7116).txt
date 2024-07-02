#include<stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int index = 0, weight = 0;
    while(str[index] != '\0')
    {
        char ch = tolower(str[index]);
        weight += (ch - 'a' + 1);
        index++;
    }
    printf("%d", weight);
    return 0;
}