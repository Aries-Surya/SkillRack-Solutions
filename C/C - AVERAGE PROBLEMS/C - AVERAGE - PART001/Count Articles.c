#include <stdio.h>
#include <string.h>

int countArticles(char *str) {
    int count = 0;
    char *token = strtok(str, " ");

    while(token != NULL) {
        if(strcmp(token, "a") == 0 || strcmp(token, "an") == 0 || strcmp(token, "the") == 0) {
            count++;
        }
        token = strtok(NULL, " ");
    }

    return count;
}

int main() {
    char str[1000];
    fgets(str, 1000, stdin);

    int numArticles = countArticles(str);

    printf("%d\n", numArticles);

    return 0;
}
