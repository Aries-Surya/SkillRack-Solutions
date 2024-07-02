// 221

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char string[50];
    scanf("%s", string);

    int len = strlen(string);
    int spcl = 0, num = 0, upper = 0, lower = 0;

    for (int i = 0; i < string[i]; i++)
    {
        char curr = string[i];

        if (isalpha(curr))
        {
            if (isupper(curr))
                upper++;
            else
                lower++;
        }
        else if (isdigit(curr))
            num++;
        else if (curr == '#' || curr == '!' || curr == '_' || curr == '$' || curr == '@')
            spcl++;
    }

    if ((len >= 8 && len <= 25) && spcl >= 1 && upper >= 1 && lower >= 1 && num >= 2)
        printf("VALID");
    else
        printf("INVALID");
}