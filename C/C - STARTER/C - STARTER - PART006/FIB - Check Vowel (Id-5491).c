#include <stdio.h>
#include <ctype.h>

int main()
{
    char CH;
    scanf("%c", &CH);
    CH = tolower(CH);
    switch(CH)
    {
    case 'a':
        printf("yes");
        break;
    case 'e':
        printf("yes");
        break;
    case 'i':
        printf("yes");
        break;
    case 'o':  // fill the code here
        printf("yes");
        break;
    case 'u':
        printf("yes");
        break;
    default:
        printf("no");
        break;
    }
    return 0;
}
