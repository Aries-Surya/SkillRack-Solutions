#include <stdio.h>

int main() {
    char str[101]; // Increased size to accommodate '\0' at the end of string
    scanf("%s", str);

    // Print the character at the second position
    printf("%c\n", str[1]);

    return 0;
}
