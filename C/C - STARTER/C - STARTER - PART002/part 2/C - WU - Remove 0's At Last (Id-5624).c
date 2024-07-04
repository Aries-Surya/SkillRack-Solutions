#include <stdio.h>
int main()
{
    int num;
    scanf("%d", &num);

    // Loop to remove trailing zeros
    while (num % 10 == 0 && num != 0) {
        num /= 10;
    }

    printf("%d\n", num);
    return 0;
}
