#include <stdio.h>
#include <string.h>

int main() {
    char S[1000];
    scanf("%s", S);
    int vowelPos = -1; // Initialize to -1, indicating no vowel found yet

    // Find the position of the first vowel
    for(int i = 0; i < strlen(S); i++) {
        if(S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u' ||
           S[i] == 'A' || S[i] == 'E' || S[i] == 'I' || S[i] == 'O' || S[i] == 'U') {
            vowelPos = i;
            break; // Found the first vowel, break out of loop
        }
    }

    // Reverse letters after the first vowel
    if (vowelPos != -1) {
        for(int i = vowelPos+1, j = strlen(S)-1; i < j; i++, j--) {
            char temp = S[i];
            S[i] = S[j];
            S[j] = temp;
        }
    }

    printf("%s", S);

    return 0;
}
