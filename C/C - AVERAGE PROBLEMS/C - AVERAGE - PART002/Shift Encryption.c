// 242
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char string[100];
    int x, y;
    fgets(string, sizeof(string), stdin);
    scanf("%d %d", &x, &y);

    int len = strlen(string);

    for (int i = 0; i < len - 1; i++)
    {
        char curr = string[i];
        if (curr >= '0' && curr <= '9')
        {
            printf("%d", curr - '0' + y);
        }
        else if (curr >= 'a' && curr <= 'z')
        {
            int ascii = curr + x;
            if (ascii > 'z')
                ascii = 'a' + (ascii - 'z' - 1);

            printf("%c", ascii);
        }
        else
            printf("%c", curr);
    }
}