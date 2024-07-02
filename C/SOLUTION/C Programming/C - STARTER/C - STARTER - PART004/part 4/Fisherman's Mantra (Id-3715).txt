#include <stdio.h>
#include <math.h>

int main() {
    int F, N;
    
    // Read the number of fish F and number of chants N from input
    scanf("%d %d", &F, &N);
    
    // Calculate the final number of fish
    int T = F * (1 << N); // Using bitwise shift to calculate 2^N
    
    // Print the final number of fish
    printf("%d\n", T);
    
    return 0;
}
