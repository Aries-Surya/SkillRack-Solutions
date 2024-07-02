#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch1, ch2, ch3;
    scanf("%c %c %c", &ch1, &ch2, &ch3);
    if(ch1 > ch2)
    {
        char temp = ch1;
        ch1 = ch2;
        ch2 = temp;
    }
    if(ch3 >= ch1 && ch3 <= ch2)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
