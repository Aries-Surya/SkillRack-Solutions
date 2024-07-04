#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);
    
    // Toggle the case
    if (ch >= 'a' && ch <= 'z') {
        ch = ch - 'a' + 'A';  // Convert lowercase to uppercase
    } else if (ch >= 'A' && ch <= 'Z') {
        ch = ch - 'A' + 'a';  // Convert uppercase to lowercase
    }
    
    printf("%c\n", ch);
    return 0;
}
