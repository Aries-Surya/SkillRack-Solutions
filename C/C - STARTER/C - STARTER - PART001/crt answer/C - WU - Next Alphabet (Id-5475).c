#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is a lowercase letter
    if (ch >= 'a' && ch < 'z') {
        ch = ch + 1; // Move to the next character in ASCII sequence
    }
    // Check if the character is an uppercase letter
    else if (ch >= 'A' && ch < 'Z') {
        ch = ch + 1; // Move to the next character in ASCII sequence
    }
    // For 'z', wrap around to 'a'
    else if (ch == 'z') {
        ch = 'a';
    }
    // For 'Z', wrap around to 'A'
    else if (ch == 'Z') {
        ch = 'A';
    }

    printf("%c\n", ch);

    return 0;
}
