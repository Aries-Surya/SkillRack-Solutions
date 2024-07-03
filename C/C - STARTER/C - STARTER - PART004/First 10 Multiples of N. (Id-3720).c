#include <stdio.h>

int main() {
    int N;
    
    // Read the value of N
    scanf("%d", &N);
    
    // Print the first 10 multiples of N
    for (int i = 1; i <= 10; i++) {
        printf("%d ", N * i);
    }
    
    return 0;
}
