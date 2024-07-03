#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    int position = ch - 'a' + 1;
    printf("%d\n", position);

    return 0;
}
