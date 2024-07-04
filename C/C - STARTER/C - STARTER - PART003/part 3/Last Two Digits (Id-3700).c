#include <stdio.h>

int main() {
    int N;
    
    // Read the number N from input
    scanf("%d", &N);
    
    // Compute the last two digits of N using modulus operator
    int last_two_digits = N % 100;
    
    // Print the last two digits
    printf("%02d\n", last_two_digits);
    
    return 0;
}
