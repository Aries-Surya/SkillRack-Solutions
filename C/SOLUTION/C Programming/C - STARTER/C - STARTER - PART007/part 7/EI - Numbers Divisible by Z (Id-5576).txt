#include<stdio.h>

int main() {
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);

    for (int i = X; i <= Y; i++) {
        if (i % Z == 0) {
            printf("%d ", i);
        }
    }

    return 0;
}
