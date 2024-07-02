#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    
    // Compute 2A and 2B
    int doubleA = 2 * A;
    int doubleB = 2 * B;
    
    // Compute the sum of 2A + 2B
    int sum = doubleA + doubleB;
    
    // Print the result
    printf("%d\n", sum);
    
    return 0;
}
