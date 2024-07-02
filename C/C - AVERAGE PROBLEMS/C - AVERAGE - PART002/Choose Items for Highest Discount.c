#include <stdio.h>
#include <limits.h>

int main() {
    int N;
    scanf("%d", &N);
    char lN[21];
    int p, d;
    char lDI[21];
    int lD = INT_MAX;
    for (int i = 0; i < N; i++) {
        scanf("%s %d %d", lN, &p, &d);

        int savings = (p * d) / 100;
        if (savings < lD) {
            lD = savings;
            strcpy(lDI, lN);
        }
    }

    printf("%s\n", lDI);

    return 0;
}
