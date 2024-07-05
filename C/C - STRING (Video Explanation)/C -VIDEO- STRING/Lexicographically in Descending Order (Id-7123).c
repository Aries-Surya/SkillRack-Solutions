#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    char str[N][1001], temp[1001];
    for(int index = 0; index <= N-1; index++)
    {
        scanf("%s", str[index]);
    }
    for(int index = 0; index <= N-1; index++)
    {
        for(int cmpIndex = index+1; cmpIndex <= N-1; cmpIndex++)
        {
            if (strcmp(str[index], str[cmpIndex]) < 0)
            {
                strcpy(temp, str[index]);
                strcpy(str[index], str[cmpIndex]);
                strcpy(str[cmpIndex], temp);
            }
        }
        printf("%s\n", str[index]);
    }
    return 0;
}
