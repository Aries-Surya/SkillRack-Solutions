#include <stdio.h>

int main() {
    int heads, legs;
    scanf("%d %d", &heads, &legs);

    int animals = (legs - (2 * heads)) / 2;
    int birds = heads - animals;

    printf("%d %d\n", birds, animals);

    return 0;
}
