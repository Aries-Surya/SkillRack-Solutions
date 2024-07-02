#include <stdio.h>

int main() {
    char S[101];
    fgets(S, sizeof(S), stdin);
    
    int last[256];
    for(int i = 0; i < 256; i++) {
        last[i] = -1; // Initialize last occurrence of characters with -1
    }

    char result = '\0';
    
    for(int i = 0; S[i] != '\0'; i++) {
        last[S[i]] = i; // Update the last occurrence of the character
    }

    for(int i = 0; S[i] != '\0'; i++) {
        if(last[S[i]] != i && last[S[i]] != -1) { // Check if it's not the first occurrence
            result = S[i];
            break;
        }
    }
    
    if(result != '\0') {
        printf("%c\n", result);
    } else {
        printf("No repeating character found.\n");
    }
    
    return 0;
}
