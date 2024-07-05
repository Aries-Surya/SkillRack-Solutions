#include<stdio.h>
#include<stdlib.h>
int main()
{
    char str[101];
    int len, nonRepeatingCount = 0, N, charCount[128]= {0};;
    scanf("%s", str);
    len = strlen(str);
    scanf("\n%d", &N);
    for(int index = 0; index < len; index++)
    {
        charCount[str[index]]++;
    }
    for(int index = 0; index < len; index++)
    {
        if(charCount[str[index]] == 1)
        {
            nonRepeatingCount++;
            if(nonRepeatingCount == N)
            {
                printf("%c", str[index]);
                return 0;
            }
        }
    }
}