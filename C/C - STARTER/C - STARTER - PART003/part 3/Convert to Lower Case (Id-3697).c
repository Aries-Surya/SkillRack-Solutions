#include <stdio.h>

int main() {
    char C;
    
    // Read the uppercase character C from input
    scanf("%c", &C);
    
    // Convert C to lowercase by adding 32 to its ASCII value
    char lower_case = C + 32;
    
    // Print the lowercase character
    printf("%c\n", lower_case);
    
    return 0;
}
