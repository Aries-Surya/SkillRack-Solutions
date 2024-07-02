#include <stdio.h>

int main() {
    float rupees;
    scanf("%f", &rupees);

    int paise = rupees * 100;

    printf("%d\n", paise);

    return 0;
}
