#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    // Calculate unit digit
    int unitDigit = N % 10;
    
    // Print unit digit
    printf("%d\n", unitDigit);
    
    return 0;
}
