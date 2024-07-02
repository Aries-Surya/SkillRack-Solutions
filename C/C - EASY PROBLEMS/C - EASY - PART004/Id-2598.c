#include <stdio.h>
#include <ctype.h>

int main() {
    char S[501];
    fgets(S, sizeof(S), stdin);

    int i = 0;
    while (S[i] != '\0') {
        if (isalpha(S[i])) {
            S[i] = toupper(S[i]);
            while (isalpha(S[i])) {
                i++;
            }
        } else {
            i++;
        }
    }

    printf("%s", S);

    return 0;
}
