#include<stdio.h>

int main()
{
    char ch;
    scanf("%c", &ch);
    if(ch == 'a')
    {
        printf("z b");
    }
    else if(ch == 'z')
    {
        printf("y a");
    }
    else
    {
        printf("%c %c", ch - 1, ch + 1);
    }
    return 0;
}