#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
        printf("YES\n");
    else
        printf("NO\n");

    return 0;
}
