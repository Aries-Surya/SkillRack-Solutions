#include <stdio.h>

int main() {
    
    // Read the character L from input
    scanf("%c", &L);
    
    // Check the range of L and print the corresponding half
    if ((L >= 'A' && L <= 'M') || (L >= 'a' && L <= 'm')) {
        printf("1st half\n");
    } else if ((L >= 'N' && L <= 'Z') || (L >= 'n' && L <= 'z')) {
        printf("2nd half\n");
    }
    
    return 0;
}
char L;
    