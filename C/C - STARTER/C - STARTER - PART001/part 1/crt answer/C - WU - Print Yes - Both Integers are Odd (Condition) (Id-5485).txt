#include<stdio.h>
int main()
{
    int A, B;
    
    // Read two integers from input
    scanf("%d %d", &A, &B);

    // Check if both A and B are odd
    if (A % 2 != 0 && B % 2 != 0) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
