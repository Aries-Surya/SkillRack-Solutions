#include <stdio.h>
#include <string.h>

int main() {
    char S[1000];
    fgets(S, sizeof(S), stdin);  // Read input string
    S[strcspn(S, "\n")] = '\0';  // Remove newline character if present

    int len = strlen(S);
    if (len > 2) {
        // Remove first and last characters
        for (int i = 1; i < len - 1; ++i) {
            printf("%c", S[i]);
        }
        printf("\n");
    }
    
    return 0;
}
