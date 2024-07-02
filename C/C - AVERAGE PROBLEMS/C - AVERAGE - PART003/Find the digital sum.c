// 214
#include <stdio.h>

int digitalSum(int num) {
    if (num < 10) {
        return num;
    }

    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }

    return digitalSum(sum);
}

int main() {
    int N;
    scanf("%d", &N);

    int sum = digitalSum(N);

    printf("%d\n", sum);

    return 0;
}
