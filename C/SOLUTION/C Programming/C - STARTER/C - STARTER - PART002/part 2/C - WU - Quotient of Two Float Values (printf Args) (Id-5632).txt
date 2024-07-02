#include <stdio.h>

int main() {
    float A, B;
    scanf("%f %f", &A, &B);

    if (B != 0) {
        float quotient = A / B;
        printf("%.2f\n", quotient);
    } else {
        printf("Division by zero error\n");
    }

    return 0;
}
