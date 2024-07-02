#include <stdio.h>

int main() {
    int A, B, C;
    
    // Read A, B, and C from input
    scanf("%d %d %d", &A, &B, &C);
    
    // Compute the value of the equation B^2 - 4AC
    int result = B * B - 4 * A * C;
    
    // Print the result
    printf("%d\n", result);
    
    return 0;
}
