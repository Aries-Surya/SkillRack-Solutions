#include <stdio.h>

int main() {
    int Y;

    // Read the year
    scanf("%d", &Y);

    // Check if the year is a century year
    if (Y % 100 == 0) {
        printf("CENTURY YEAR\n");
    } else {
        printf("NOT A CENTURY YEAR\n");
    }

    return 0;
}
