#include <stdio.h>

int main() {
    int Q, A;
    
    // Read quantity Q and amount A from input
    scanf("%d %d", &Q, &A);
    
    // Check the conditions
    if (Q > 5 || A > 1000) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
    
    return 0;
}
