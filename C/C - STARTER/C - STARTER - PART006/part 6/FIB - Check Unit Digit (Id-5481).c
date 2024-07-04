#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    
    // Get the unit digit of N
    int unitDigit = N % 10;

    // Check the unit digit using switch statement
    switch(unitDigit)
    {
    case 1:
        printf("YES");
        break;
    default:
        printf("NO");
    }
    return 0;
}
