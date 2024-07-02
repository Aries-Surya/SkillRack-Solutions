#include<stdio.h>
#include<stdlib.h>
int main()
{
    int N, len;
    scanf("%d", &N);
    char str[101];
    for(int ctr = 1; ctr <=  N; ctr++)
    {
        scanf("%s", str);
        len = strlen(str);
        if(len - 1 > 10)
        {
            printf("%c%d%c\n", str[0], len - 2, str[len-1]);
        }
        else
        {
            printf("%s\n", str);
        }
    }
    return 0;
}