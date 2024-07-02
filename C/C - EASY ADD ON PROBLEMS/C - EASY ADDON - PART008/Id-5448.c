#include <stdio.h>

int main() {
    long long N;
    printf("Input:\n");
    scanf("%lld", &N);

    long long result = 0;
    long long multiplier = 1;

    while (N > 0) {
        long long digit = N % 10;  // Get the last digit
        digit = (digit + 2) % 10;  // Increment the digit by 2, ignoring carry
        result = result + digit * multiplier;
        multiplier *= 10;
        N /= 10;  // Move to the next digit
    }

    printf("Output:\n%lld\n", result);

    return 0;
}
