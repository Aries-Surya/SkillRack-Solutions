// 225
#include <stdio.h>

int main() {
    char S[201];
    char A, B;
    int count = 0;

    // Read the input
    scanf("%s\n", S);
    scanf("%c\n", &A);
    scanf("%c", &B);

    // Traverse the string and check for occurrences
    for (int i = 0; S[i] != '\0'; i++) {
        if (S[i] == A && S[i+1] == B) {
            count++;
        }
    }

    // Print the count
    printf("%d\n", count);

    return 0;
}
