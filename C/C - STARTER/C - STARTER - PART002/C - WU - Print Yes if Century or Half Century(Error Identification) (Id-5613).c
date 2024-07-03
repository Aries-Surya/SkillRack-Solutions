#include <stdio.h>

int main() {
    int runs;
    scanf("%d", &runs);

    if (runs == 100 || runs == 50) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}
