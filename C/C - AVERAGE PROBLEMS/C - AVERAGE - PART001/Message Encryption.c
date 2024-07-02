#include <stdio.h>
#include <string.h>

void decryptMessage(char *message, int columns) {
    int len = strlen(message);
    int rows = len / columns;
    char decrypted[rows][columns];
    int k = 0;

    for (int i = 0; i < rows; i++) {
        if (i % 2 == 0) {
            for (int j = 0; j < columns; j++) {
                decrypted[i][j] = message[k++];
            }
        } else {
            for (int j = columns - 1; j >= 0; j--) {
                decrypted[i][j] = message[k++];
            }
        }
    }

    for (int j = 0; j < columns; j++) {
        for (int i = 0; i < rows; i++) {
            printf("%c", decrypted[i][j]);
        }
    }
    printf("\n");
}

int main() {
    char message[201];
    int columns;
    scanf("%s", message);
    scanf("%d", &columns);
    decryptMessage(message, columns);
    return 0;
}
