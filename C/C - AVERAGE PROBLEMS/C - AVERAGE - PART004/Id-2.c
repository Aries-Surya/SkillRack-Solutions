#include <stdio.h>
#include <string.h>

void sortDescendingUnique(char str[]) {
    int count[26] = {0};
    char unique[26];
    int uniqueCount = 0;

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            count[str[i] - 'a']++;
            if (count[str[i] - 'a'] == 1) {
                unique[uniqueCount++] = str[i];
            }
        }
    }

    for (int i = uniqueCount - 1; i >= 0; i--) {
        printf("%c", unique[i]);
    }

    printf("\n");
}

int main() {
    char str[101];
    scanf("%s", str);

    sortDescendingUnique(str);

    return 0;
}
