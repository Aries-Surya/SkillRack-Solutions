#include <stdio.h>

int main() {
    int L, B;
    
    // Read length L and breadth B from input
    scanf("%d %d", &L, &B);
    
    // Compute the area A
    int area = L * B;
    
    // Print the area
    printf("%d\n", area);
    
    return 0;
}
