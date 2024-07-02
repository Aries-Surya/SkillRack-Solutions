#include <stdio.h>

int main() {
    int N;
    
    // Read the number of rows N
    scanf("%d", &N);
    
    // Total number of elements to be printed
    int totalNumbers = N * N;
    
    // Print numbers from 1 to N*N with N numbers in each row
    for (int i = 1; i <= totalNumbers; i++) {
        printf("%d ", i);
        if (i % N == 0) {
            printf("\n");
        }
    }
    
    return 0;
}
