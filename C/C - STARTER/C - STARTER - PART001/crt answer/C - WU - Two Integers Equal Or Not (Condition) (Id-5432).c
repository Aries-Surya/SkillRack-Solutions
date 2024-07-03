#include<stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Check if num1 is equal to num2
    if (num1 == num2) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
