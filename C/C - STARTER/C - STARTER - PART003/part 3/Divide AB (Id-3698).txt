#include <stdio.h>

int main() {
    int A, B;
    
    // Read A and B from input
    scanf("%d %d", &A, &B);
    
    // Check if B is not zero to avoid division by zero
    if (B == 0) {
        printf("Division by zero is not allowed\n");
    } else {
        // Compute the integer division A / B
        int result = A / B;
        
        // Print the result
        printf("%d\n", result);
    }
    
    return 0;
}
