#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    fgets(S, sizeof(S), stdin);

    S[strcspn(S, "\n")] = '\0';

    int len = strlen(S);

    int middle = len / 2;
    
    // Check if the length of S is odd
    if (len % 2 == 1) {
        printf("%c%c%c\n", S[middle - 1], S[middle], S[middle + 1]);
    } else {
        printf("Invalid input. Length of S should be odd.\n");
    }

    return 0;
}
