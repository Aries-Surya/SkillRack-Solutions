#include <stdio.h>

int main() {
    int S;
    
    // Read the score S from input
    scanf("%d", &S);
    
    // Check the score range and print the corresponding message
    if (S >= 200) {
        printf("Virat Kohli scored double century\n");
    } else if (S >= 100) {
        printf("Virat Kohli scored century\n");
    } else if (S >= 50) {
        printf("Virat Kohli scored half century\n");
    }
    
    return 0;
}
