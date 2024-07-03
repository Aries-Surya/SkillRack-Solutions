#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the input is within valid range ('b' to 'z' for lowercase and 'B' to 'Z' for uppercase)
    if ((ch >= 'b' && ch <= 'z') || (ch >= 'B' && ch <= 'Z')) {
        printf("Previous alphabet: %c\n", ch - 1);
    } else {
        printf("Invalid input\n"); // Handle invalid input
    }

    return 0;
}
