#include<stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Compare num1 and num2 to find the larger one
     if(num1 > num2) {
        printf("%d\n", num1);
    } else {
        printf("%d\n", num2);
    }

    return 0;
}
