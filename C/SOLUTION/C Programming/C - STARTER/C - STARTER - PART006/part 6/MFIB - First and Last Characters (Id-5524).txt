#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    scanf("%s", str);

    int len = strlen(str);
    printf("%c%c\n", str[0], str[len - 1]);

    return 0;
}
