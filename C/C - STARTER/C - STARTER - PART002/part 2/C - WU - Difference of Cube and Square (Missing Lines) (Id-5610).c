#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int square = num * num;
    int cube = num * num * num;
    int difference = cube - square;

    printf("%d\n", difference);

    return 0;
}
