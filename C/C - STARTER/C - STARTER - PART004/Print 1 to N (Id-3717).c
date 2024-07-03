#include <stdio.h>

int main() {
    int N;
    
    // Read the integer N from input
    scanf("%d", &N);
    
    // Loop from 1 to N and print each value
    for (int i = 1; i <= N; i++) {
        printf("%d", i);
        if (i < N) {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}
