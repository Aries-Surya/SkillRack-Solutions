#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    scanf("%d", &N);
    char str[1001];
    for(int ctr = 1; ctr <= N; ctr++)
    {
        scanf("%s", str);
        int len = strlen(str), index = 0;
        int firstConsIndex = -1, lastConsIndex = -1;
        while(index < len && (str[index] == 'a' || str[index] == 'e'|| str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u'))
        {
            index++;
        }
        firstConsIndex = index;
        index = len-1;
        while(index >= 0 && (str[index] == 'a' || str[index] == 'e'|| str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u'))
        {
            index--;
        }
        lastConsIndex = index;
        for(index = 0; index < len; index++)
        {
            if(index > firstConsIndex && index < lastConsIndex)
            {
                if(!(str[index] == 'a' || str[index] == 'e'|| str[index] == 'i'|| str[index] == 'o'|| str[index] == 'u'))
                {
                    printf("%c", str[index]);
                }
            }
            else
            {
                printf("%c", str[index]);
            }
        }
        printf("\n");
    }
    return 0;
}