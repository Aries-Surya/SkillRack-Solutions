#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Iterate through numbers from 1 to N
    for(int i = 1; i <= N; i++) {
        // Check if i is a factor of N
        if (N % i == 0) {
            printf("%d ", i);
        }
    }
    
    return 0;
}
dai change i = ctr