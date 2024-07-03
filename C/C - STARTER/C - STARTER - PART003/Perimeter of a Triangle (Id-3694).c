#include <stdio.h>

int main() {
    int A, B, C;
    
    // Read sides A, B, and C from input
    scanf("%d %d %d", &A, &B, &C);
    
    // Compute the perimeter P
    int perimeter = A + B + C;
    
    // Print the perimeter
    printf("%d\n", perimeter);
    
    return 0;
}
