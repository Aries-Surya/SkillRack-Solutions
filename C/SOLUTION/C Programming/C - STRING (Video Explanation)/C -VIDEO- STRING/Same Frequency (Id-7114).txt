#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[1001];
    scanf("%s",str);
    int alphaCount[26]={0}, count;
    for(int index=0;str[index]!='\0';index++)
    {
        alphaCount[str[index]-'a']++;
    }
    count=alphaCount[str[0]-'a'];
    for(int index=0;index<26;index++)
    {
        if(alphaCount[index]>0 && count!=alphaCount[index])
        {
            printf("NO");
            return 0;
        }
    }
    printf("YES");
    return 0;
}