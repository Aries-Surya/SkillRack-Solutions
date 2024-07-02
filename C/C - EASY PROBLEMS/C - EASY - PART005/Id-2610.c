#include <stdio.h>
#include <string.h>

int main() {
    char S1[101], S2[101];
    scanf("%s%s", S1, S2);

    if (strcmp(S1, S2) < 0) {
        printf("%s%s", S1, S2);
    } else {
        printf("%s%s", S2, S1);
    }

    return 0;
}
