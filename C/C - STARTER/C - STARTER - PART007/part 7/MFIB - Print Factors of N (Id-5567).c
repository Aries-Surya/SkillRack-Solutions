#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Iterate through numbers from 1 to N
    for(int ctr = 1; ctr <= N; ctr++) {
        // Check if i is a factor of N
        if (N % ctr == 0) {
            printf("%d ", ctr);
        }
    }
    
    return 0;
}
