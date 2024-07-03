#include<stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Determine the number of digits using a switch statement
    switch(N) {
        case 1 ... 9:  // Covers integers from 1 to 9 (one-digit numbers)
            printf("one digit");
            break;
        case 10 ... 99:  // Covers integers from 10 to 99 (two-digit numbers)
            printf("two digits");
            break;
        default:
            printf("invalid");
            break;
    }

    return 0;
}
