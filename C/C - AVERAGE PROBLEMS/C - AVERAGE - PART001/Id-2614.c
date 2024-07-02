#include <stdio.h>
#include <string.h>
#include <limits.h>

#define MAX_LEN 200

int minDistance(char *S, char *W1, char *W2) {
    char words[MAX_LEN][MAX_LEN];
    int distances[MAX_LEN];
    int wordCount = 0;
    
    // Tokenize the input string and store words in an array
    char *token = strtok(S, " ");
    while (token != NULL) {
        strcpy(words[wordCount], token);
        token = strtok(NULL, " ");
        wordCount++;
    }

    int minDist = INT_MAX;

    // Calculate the distances between occurrences of W1 and W2
    for (int i = 0; i < wordCount; i++) {
        if (strcmp(words[i], W1) == 0) {
            for (int j = 0; j < wordCount; j++) {
                if (strcmp(words[j], W2) == 0) {
                    int dist = (j > i) ? (j - i) : (i - j);
                    if (dist < minDist) {
                        minDist = dist;
                    }
                }
            }
        }
    }

    return (minDist == INT_MAX) ? -1 : minDist - 1;
}

int main() {
    char S[MAX_LEN];
    char W1[MAX_LEN];
    char W2[MAX_LEN];

    // Read input strings
    fgets(S, sizeof(S), stdin);
    fgets(W1, sizeof(W1), stdin);
    fgets(W2, sizeof(W2), stdin);

    // Remove newline characters
    S[strcspn(S, "\n")] = '\0';
    W1[strcspn(W1, "\n")] = '\0';
    W2[strcspn(W2, "\n")] = '\0';

    int distance = minDistance(S, W1, W2);
    printf("%d\n", distance+1);

    return 0;
}
