#include <stdio.h>

int main() {
    int N;
    
    // Read the number N from input
    scanf("%d", &N);
    
    // Compute the unit digit of N using modulus operator
    int unit_digit = N % 10;
    
    // Print the unit digit
    printf("%d\n", unit_digit);
    
    return 0;
}
