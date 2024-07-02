#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int N;
    scanf("%s%d", S, &N);

    int len = strlen(S);
    char rotated[len + 1];

    for(int i = 0; i < len; i++) {
        rotated[(i + N) % len] = S[i];
    }

    rotated[len] = '\0';

    printf("%s", rotated);

    return 0;
}
