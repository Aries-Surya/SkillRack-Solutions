#include<stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    
    // Print numbers from X to Y
    for (int i = X; i <= Y; i++) {
        printf("%d ", i);
    }
    printf("\n"); // Move to the next line for the second range
    
    // Print numbers from Y to Z
    for (int i = Y; i <= Z; i++) {
        printf("%d ", i);
    }
    printf("\n"); // Move to the next line
    
    return 0;
}
