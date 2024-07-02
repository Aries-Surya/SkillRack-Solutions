#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    switch(ch) {
        case 'A'...'Z':
            printf("upper-case\n");
            break;
        case 'a'...'z':
            printf("lower-case\n");
            break;
        default:
            printf("Not an alphabet\n");
    }

    return 0;
}
