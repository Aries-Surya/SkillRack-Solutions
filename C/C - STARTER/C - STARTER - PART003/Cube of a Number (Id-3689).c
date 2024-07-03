#include <stdio.h>

int main() {
    int N;
    
    // Read the number N from input
    scanf("%d", &N);
    
    // Compute the cube of N
    int cube = N * N * N;  // Alternatively, you can use pow(N, 3) from math.h library
    
    // Print the cube
    printf("%d\n", cube);
    
    return 0;
}
