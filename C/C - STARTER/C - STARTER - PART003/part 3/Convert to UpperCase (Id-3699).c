#include <stdio.h>

int main() {
    char C;
    
    // Read the character C from input
    scanf("%c", &C);
    
    // Check if C is a lowercase letter
    if (C >= 'a' && C <= 'z') {
        // Convert C to uppercase by subtracting 32 from its ASCII value
        C = C - 32;
    }
    
    // Print the resulting character
    printf("%c\n", C);
    
    return 0;
}
