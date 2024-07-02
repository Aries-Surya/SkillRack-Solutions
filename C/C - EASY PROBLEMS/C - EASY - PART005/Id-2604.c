#include <stdio.h>

int main() {
    char str[101];
    scanf("%s", str);

    for(int i = 'z'; i >= 'a'; i--) {
        for(int j = 0; str[j] != '\0'; j++) {
            if(str[j] == i)
                printf("%c", i);
        }
    }

    return 0;
}
