#include <stdio.h>

int main() {
    int first, second, third;
    scanf("%d %d %d", &first, &second, &third);

    int S = first + second;
    int difference = S - third;

    printf("%d\n", difference);

    return 0;
}
