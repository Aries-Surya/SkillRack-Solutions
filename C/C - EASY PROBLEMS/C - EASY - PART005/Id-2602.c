#include <stdio.h>

int main()
{
    char S[201];
    char A, B;
    int count = 0;

    // Read the string S, characters A and B
    scanf("%s", S);
    scanf(" %c", &A);
    scanf(" %c", &B);

    // Loop through the characters in S
    for (int i = 0; S[i + 1] != '\0'; i++)
    {
        if (S[i] == A && S[i + 1] == B)
        {
            count++;
        }
    }

    // Print the count
    printf("%d", count);

    return 0;
}
