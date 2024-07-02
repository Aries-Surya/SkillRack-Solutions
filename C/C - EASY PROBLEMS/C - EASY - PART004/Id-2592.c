#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    int X;
    
    // Input
    fgets(S, sizeof(S), stdin);
    scanf("%d", &X);
    
    int len = strlen(S);
    
    for (int i = X - 1; i < len - 1; i += X) {
        printf("%c", S[i]);
    }
    
    return 0;
}

