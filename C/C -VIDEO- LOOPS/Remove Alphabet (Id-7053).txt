#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2;
    scanf("%c %c", &ch1, &ch2);
    ch1 = tolower(ch1);
    if(ch1 == 'u')
    {
        ch2 = toupper(ch2);
        char alpha = 'A';
        while(alpha <= 'Z')
        {
            if(alpha != ch2)
            {
                printf("%c ", alpha);
            }
            alpha++;
        }
    }
    else if(ch1 == 'l')
    {
        ch2 = tolower(ch2);
        char alpha = 'a';
        while(alpha <= 'z')
        {
            if(alpha != ch2)
            {
                printf("%c ", alpha);
            }
            alpha++;
        }
    }
    else
    {
        printf("INVALID");
    }
    return 0;
}