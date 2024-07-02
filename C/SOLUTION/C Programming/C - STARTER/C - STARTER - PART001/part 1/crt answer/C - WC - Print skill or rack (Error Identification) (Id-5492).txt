#include <stdio.h>

int main() {
    char input;

    // Read a single character input
    scanf("%c", &input);

    // Check if the input character is 's'
    if (input == 's') {
        printf("skill\n");
    } else {
        printf("rack\n");
    }

    return 0;
}
