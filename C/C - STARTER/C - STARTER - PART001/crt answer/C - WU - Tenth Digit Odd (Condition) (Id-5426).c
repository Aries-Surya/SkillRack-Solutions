#include<stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    // Get the tenth digit (digit at the tens place)
    int tenth_digit = (num / 10) % 10;

    // Check if the tenth digit is odd
    if (tenth_digit % 2 != 0) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
