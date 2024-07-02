#include <stdio.h>

int main() {
    int a, b, c, result;
    char op;
    
    // Read the expression
    scanf("%d%c%d=%d", &a, &op, &b, &c);

    // Check all possible operators
    if (a + b == c) {
        op = '+';
    } else if (a - b == c) {
        op = '-';
    } else if (a * b == c) {
        op = '*';
    } else if (a / b == c) {
        op = '/';
    }

    // Print the correct operator
    printf("%c", op);

    return 0;
}
