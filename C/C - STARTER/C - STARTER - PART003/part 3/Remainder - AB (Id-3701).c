#include <stdio.h>

int main() {
    int A, B;
    
    // Read the numbers A and B from input
    scanf("%d %d", &A, &B);
    
    // Compute the remainder when A is divided by B
    int remainder = A % B;
    
    // Print the remainder
    printf("%d\n", remainder);
    
    return 0;
}
