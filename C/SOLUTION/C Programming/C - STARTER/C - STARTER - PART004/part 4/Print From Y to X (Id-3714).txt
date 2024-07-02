#include <stdio.h>

int main() {
    int X, Y;
    
    // Read the starting and ending values X and Y from input
    scanf("%d %d", &X, &Y);
    
    // Loop through the range from Y to X in reverse order and print each number
    for (int i = Y; i >= X; i--) {
        printf("%d", i);
        if (i > X) {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}
