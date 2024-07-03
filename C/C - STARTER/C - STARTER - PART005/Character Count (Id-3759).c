#include <stdio.h>

int main() {
    char S[1000];
    char C;
    fgets(S, sizeof(S), stdin);
    scanf("%c", &C);

    int count = 0;
    for (int i = 0; S[i] != '\0'; ++i) {
        if (S[i] == C) {
            count++;
        }
    }
    
    printf("%d\n", count);

    return 0;
}
