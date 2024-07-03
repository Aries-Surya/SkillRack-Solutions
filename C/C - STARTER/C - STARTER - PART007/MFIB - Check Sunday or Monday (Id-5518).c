#include<stdio.h>

int main()
{
    char CH;
    scanf("%c", &CH);
    
    switch(CH)
    {
        case 'S':
        case 's':
            printf("Sunday");
            break;
        case 'M':
        case 'm':
            printf("Monday");
            break;
        default:
            printf("Invalid");
            break;
    }
    
    return 0;
}
