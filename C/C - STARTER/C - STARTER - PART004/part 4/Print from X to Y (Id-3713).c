#include <stdio.h>

int main() {
    int X, Y;
    
    // Read the starting and ending values X and Y from input
    scanf("%d %d", &X, &Y);
    
    // Loop through the range from X to Y inclusive and print each number
    for (int i = X; i <= Y; i++) {
        printf("%d", i);
        if (i < Y) {
            printf(" ");
        }
    }
    
    printf("\n");
    return 0;
}
