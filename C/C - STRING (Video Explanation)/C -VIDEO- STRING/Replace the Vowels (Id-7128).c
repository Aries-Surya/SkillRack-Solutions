#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str1[101], str2[101], vowels[101];
    scanf("%s %s", str1, str2);
    int index1, index2, vowelIndex = 0;
    for(index2 = 0; str2[index2] != '\0'; index2++)
    {
        if(str2[index2] == 'a' || str2[index2] == 'e' || str2[index2] == 'i' || str2[index2] == 'o' || str2[index2] == 'u')
        {
            vowels[vowelIndex] = str2[index2];
            vowelIndex++;
        }
    }
    int vowelLen = vowelIndex;
    vowelIndex = 0;
    for(index1 = 0; str1[index1] != '\0'; index1++)
    {
        if(str1[index1] == 'a' || str1[index1] == 'e' || str1[index1] == 'i' || str1[index1] == 'o' || str1[index1] == 'u')
        {
            if(vowelLen != 0)
            {
                printf("%c", vowels[vowelIndex]);
                if(vowelIndex + 1 != vowelLen)
                {
                    vowelIndex++;
                }
            }
            else
            {
                printf("a");
            }
        }
        else
        {
            printf("%c", str1[index1]);
        }
    }
    return 0;
}