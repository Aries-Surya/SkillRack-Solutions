// 215
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char word[101];
    scanf("%s", word);

    int len = strlen(word);
    int count = 1;
    for (int i = 0; i < len; i++)
    {
        char curr = word[i];

        if (curr == 'F' || curr == 'T' || curr == 'L' || curr == 'D')
            count *= 2;
    }
    printf("%d", count);
}