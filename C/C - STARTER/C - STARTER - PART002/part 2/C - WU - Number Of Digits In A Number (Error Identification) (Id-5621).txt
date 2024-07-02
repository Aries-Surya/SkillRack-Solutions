#include <stdio.h>

int main() {
    int num, count = 0;  // Initialize count to 0
    scanf("%d", &num);

    if (num == 0) {
        count = 1;  // Special case for number 0
    } else {
        while (num != 0) {
            count++;
            num /= 10;
        }
    }

    printf("%d\n", count);
    return 0;
}
