#include <stdio.h>

int main() {
    char B;
    scanf("%c", &B);
    if (B == 'G') printf("GOOGLE CHROME\n");
    else if (B == 'I') printf("INTERNET EXPLORER\n");
    else if (B == 'O') printf("OPERA\n");
    else if (B == 'M') printf("MOZILLA FIREFOX\n");
    else if (B == 'S') printf("SAFARI\n");
    else printf("UNKNOWN\n");
    return 0;
}
