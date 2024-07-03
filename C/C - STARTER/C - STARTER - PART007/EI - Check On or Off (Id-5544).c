#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    switch (N) {
        case 0:
            printf("Off");
            break;
        case 1:
            printf("On");
            break;
        default:
            printf("Invalid");
    }

    return 0;
}
