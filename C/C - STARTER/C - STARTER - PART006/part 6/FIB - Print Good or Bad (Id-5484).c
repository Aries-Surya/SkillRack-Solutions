#include <stdio.h>
#include <ctype.h>

int main()
{
    char CH;
    scanf("%c", &CH);
    CH = tolower(CH);
    switch(CH)
    {
    case 'g':
        printf("Good");
        break;
    default:
        printf("Bad");
    }
    return 0;
}
