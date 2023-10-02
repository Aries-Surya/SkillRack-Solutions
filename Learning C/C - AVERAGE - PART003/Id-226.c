#include <stdio.h>

int isPalindrome(int num) {
    int reversed = 0, original = num;
    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }
    return original == reversed;
}

int main() {
    int N;
    scanf("%d", &N);

    int nextNumber = N + 1;
    while (!isPalindrome(nextNumber)) {
        nextNumber++;
    }

    printf("%d\n", nextNumber);

    return 0;
}
