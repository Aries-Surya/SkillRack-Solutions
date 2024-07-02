#include <stdio.h>

int main() {
    int R1, R2;
    
    // Read values of R1 and R2 from input
    scanf("%d %d", &R1, &R2);
    
    // Check if R1 and R2 are unequal
    if (R1 != R2) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
