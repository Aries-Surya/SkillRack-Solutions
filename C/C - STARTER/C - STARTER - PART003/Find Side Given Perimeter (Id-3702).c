#include <stdio.h>

int main() {
    int P;
    
    // Read the perimeter P from input
    scanf("%d", &P);
    
    // Calculate the side length S
    int S = P / 4;
    
    // Print the side length
    printf("%d\n", S);
    
    return 0;
}
