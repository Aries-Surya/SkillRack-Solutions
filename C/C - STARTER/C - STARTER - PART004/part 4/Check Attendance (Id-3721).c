#include <stdio.h>

int main() {
    int N;

    // Read the attendance in days
    scanf("%d", &N);

    // Check eligibility and print the result
    if (N >= 90) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
