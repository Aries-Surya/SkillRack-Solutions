#include <stdio.h>

int main() {
    int firstInnings, secondInnings;

    // Read the scores of the first and second innings
    scanf("%d", &firstInnings);
    scanf("%d", &secondInnings);

    // Check the conditions
    if (firstInnings > 300 && secondInnings > 400) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
