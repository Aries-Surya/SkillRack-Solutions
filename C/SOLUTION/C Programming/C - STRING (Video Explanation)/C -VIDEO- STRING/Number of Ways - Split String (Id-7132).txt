#include<stdio.h>

int main()
{
    char str[101];
    scanf("%s", str);
    int rightAlphaCount[26] = {0}, leftAlphaCount[26] = {0};
    int len = strlen(str), numberOfWays = 0, index;
    for(index = 0; index < len; index++)
    {
        rightAlphaCount[str[index] - 'a']++;
    }
    index = 1;
    while(index < len)
    {
        leftAlphaCount[str[index-1] - 'a']++;
        rightAlphaCount[str[index-1] - 'a']--;
        int flag = 1;
        for(int alphaIndex = 0; alphaIndex <= 25; alphaIndex++)
        {
            if(!((leftAlphaCount[alphaIndex] == 0 && rightAlphaCount[alphaIndex] == 0)  ||
                    (leftAlphaCount[alphaIndex] > 0 && rightAlphaCount[alphaIndex] > 0)))
            {
                flag = 0;
            }
        }
        if(flag)
        {
            numberOfWays++;
        }
        index++;
    }
    printf("%d", numberOfWays);
    return 0;
}