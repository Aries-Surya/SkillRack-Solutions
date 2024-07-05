#include <stdio.h>
#include <stdlib.h>
int main()
{
    char str[1001];
    scanf("%s",str);
    int len=strlen(str), consSize, vowelSize, printed=0, vowels[len], consonants[len], vowelIndex=0, consIndex=0,index;
    for(index=0; str[index]!='\0'; index++)
    {
        if(str[index]=='a' || str[index]=='e'||str[index]=='i' || str[index]=='o'||str[index]=='u')
        {
            vowels[vowelIndex++]=str[index];
        }
        else
        {
            consonants[consIndex++]=str[index];
        }
    }
    consSize = consIndex;
    vowelSize = vowelIndex;
    consIndex = vowelIndex = 0;
    while(printed < len)
    {
        if(consIndex < consSize)
        {
            printf("%c",consonants[consIndex++]);
            printed++;
        }
        if(vowelIndex < vowelSize)
        {
            printf("%c",vowels[vowelIndex++]);
            printed++;
        }
    }
    return 0;
}