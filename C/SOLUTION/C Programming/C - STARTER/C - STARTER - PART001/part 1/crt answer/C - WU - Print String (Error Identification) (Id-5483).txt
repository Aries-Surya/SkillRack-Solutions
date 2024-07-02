#include <stdio.h>

int main() {
    char str[100]; // Declare an array to store the string

    // Prompt user to enter a string


    // Read the string input using fgets
    fgets(str, sizeof(str), stdin);

    // Remove newline character if present
    if (str[strlen(str) - 1] == '\n') {
        str[strlen(str) - 1] = '\0';
    }

    // Print the string
    printf(" %s\n", str);

    return 0;
}
