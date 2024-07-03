#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Accepts input for N
    
    for (int i = 1; i <= N; i++) {
        printf("%d ", i); // Prints each integer from 1 to N followed by a space
    }
    
    return 0;
}
