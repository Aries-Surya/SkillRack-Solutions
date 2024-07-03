#include <stdio.h>

int main() {
    char str[101]; // Increased size to accommodate '\0' at the end of string
    scanf("%[^\n]", str); // Read the entire line until newline character '\n'

    printf("%s\n", str); // Print the string followed by a newline

    return 0;
}
