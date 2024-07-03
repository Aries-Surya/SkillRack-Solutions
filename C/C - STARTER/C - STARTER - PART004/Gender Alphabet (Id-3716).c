#include <stdio.h>

int main() {
    char C;
    
    // Read the character C from input
    scanf("%c", &C);
    
    // Check if the character is 'M' or 'F' and print the corresponding gender
    if (C == 'M') {
        printf("Male\n");
    } else if (C == 'F') {
        printf("Female\n");
    } else {
        printf("Invalid input\n");  // Optional: handle unexpected inputs
    }
    
    return 0;
}
