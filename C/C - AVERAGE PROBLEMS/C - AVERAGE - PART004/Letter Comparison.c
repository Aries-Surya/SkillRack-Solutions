#include <stdio.h>
#include <string.h>

int main() {
    char s1[101], s2[101];

    // Input strings
    fgets(s1, sizeof(s1), stdin);
    fgets(s2, sizeof(s2), stdin);

    // Remove newline characters from the strings
    s1[strcspn(s1, "\n")] = 0;
    s2[strcspn(s2, "\n")] = 0;

    int freq[26] = {0};

    // Calculate character frequencies in s1
    for(int i = 0; i < strlen(s1); i++) {
        if(s1[i] >= 'a' && s1[i] <= 'z') {
            freq[s1[i] - 'a']++;
        }
    }

    // Calculate character frequencies in s2
    for(int i = 0; i < strlen(s2); i++) {
        if(s2[i] >= 'a' && s2[i] <= 'z') {
            freq[s2[i] - 'a']--;
        }
    }

    // Check if frequencies are all zeros
    for(int i = 0; i < 26; i++) {
        if(freq[i] != 0) {
            printf("NO\n");
            return 0;
        }
    }

    printf("YES\n");

    return 0;
}
