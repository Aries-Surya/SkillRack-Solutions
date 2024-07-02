#include <stdio.h>
#include <string.h>

int main() {
    int N;
    scanf("%d", &N);

    char matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf(" %c", &matrix[i][j]);
        }
    }

    char searchStr[101]; // Assuming the maximum length of the search string is 100
    scanf("%s", searchStr);

    for (int i = 0; i < N; i++) {
        int found = 0;
        for (int j = 0; j < N; j++) {
            if (strncmp(&matrix[i][j], searchStr, strlen(searchStr)) == 0) {
                found = 1;
                break;
            }
        }
        if (found) {
            printf("%d\n", i + 1);
        }
    }

    return 0;
}