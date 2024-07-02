#include <stdio.h>

int main() {
    char S[101];  // Allocate space for 100 characters plus the null terminator
    scanf("%100s", S);  // Limit the input to 100 characters to prevent overflow

    // Print the string from the second character
    printf("%s\n", S + 1);

    return 0;
}
