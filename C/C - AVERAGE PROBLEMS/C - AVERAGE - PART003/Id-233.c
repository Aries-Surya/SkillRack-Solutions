#include <stdio.h>
#include <string.h>

int main()
{
    char S[101];
    int X, Y;
    scanf("%s", S);
    scanf("%d %d", &X, &Y);

    int len = strlen(S);

    // Adjust X and Y to be within the length of S
    X = (X - 1) % len;
    Y = (Y - 1) % len;

    if (S[X] == S[Y])
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}
