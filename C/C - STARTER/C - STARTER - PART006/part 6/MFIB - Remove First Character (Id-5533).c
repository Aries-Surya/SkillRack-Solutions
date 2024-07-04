#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str); // Read the input string
    
    // Print the string starting from the second character onwards
    printf("%s\n", str + 1);
    
    return 0;
}
