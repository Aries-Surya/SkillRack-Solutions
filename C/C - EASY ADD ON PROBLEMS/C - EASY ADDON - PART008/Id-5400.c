#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
    char *s1 = NULL;
    size_t buffer_size = 0;
    printf("Input:\n");
    getline(&s1, &buffer_size, stdin);
    size_t len = strlen(s1);
    if (s1[len - 1] == '\n') {
        s1[len - 1] = '\0';
        len--;
    }

    int i, j;
    int result_len = 0;
    char *result = (char *)malloc((len + 1) * sizeof(char));
    for (i = 0, j = len - 1; i <= j; i++, j--) {
        if (s1[i] == s1[j]) {
            result[result_len++] = s1[i];
        }
    }
    result[result_len] = '\0';

    printf("Output:\n%s\n", result);
    free(s1);
    free(result);

    return 0;
}
