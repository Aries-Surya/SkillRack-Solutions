#include <stdio.h>
#include <string.h>

int main() {
    char S[101];
    
    // Input
    fgets(S, sizeof(S), stdin);
    
    int freq[256] = {0}; // Assuming ASCII characters
    
    for (int i = 0; S[i] != '\0'; i++) {
        if (freq[S[i]] == 1) {
            printf("%c", S[i]);
            return 0;
        }
        freq[S[i]]++;
    }
    return 0;
}
