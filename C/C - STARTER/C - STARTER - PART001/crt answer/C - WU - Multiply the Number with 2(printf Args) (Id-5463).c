#include <stdio.h>

int main() {
    int N;

    // Prompt the user to enter an integer
    printf("Enter an integer: ");
    
    // Read the integer input
    scanf("%d", &N);

    // Multiply the integer by 2
    N = N * 2;

    // Print the result
    printf("Result: %d\n", N);

    return 0;
}
