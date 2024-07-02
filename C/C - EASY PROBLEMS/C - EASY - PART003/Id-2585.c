#include <stdio.h>

int main() {
    char s[101];
    scanf("%s", s);

    int i = 0;
    while (s[i] != '\0') {
        int count = 0;
        while (s[i] >= '0' && s[i] <= '9') {
            count = count * 10 + (s[i] - '0');
            i++;
        }
        char ch = s[i];
        for (int j = 0; j < count; j++) {
            printf("%c", ch);
        }
        i++;
    }

    return 0;
}
