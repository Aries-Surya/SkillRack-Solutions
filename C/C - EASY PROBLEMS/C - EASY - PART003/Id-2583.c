#include <stdio.h>

int main() {
    char s1[101], s2[101];
    int commonCount = 0;

    // Read input strings
    scanf("%s", s1);
    scanf("%s", s2);

    // Initialize arrays for character frequency
    int freqS1[26] = {0};
    int freqS2[26] = {0};

    // Calculate frequency of characters in first string
    for (int i = 0; s1[i] != '\0'; i++) {
        freqS1[s1[i] - 'a']++;
    }

    // Calculate frequency of characters in second string
    for (int i = 0; s2[i] != '\0'; i++) {
        freqS2[s2[i] - 'a']++;
    }

    // Count common characters
    for (int i = 0; i < 26; i++) {
        commonCount += (freqS1[i] > 0 && freqS2[i] > 0);
    }

    // Print the count of common characters
    printf("%d", commonCount);

    return 0;
}
