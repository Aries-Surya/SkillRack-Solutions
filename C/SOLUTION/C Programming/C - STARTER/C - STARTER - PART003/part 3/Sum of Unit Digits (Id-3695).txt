#include <stdio.h>

int main() {
    int N1, N2;
    
    // Read N1 and N2 from input
    scanf("%d %d", &N1, &N2);
    
    // Calculate unit digits
    int unit_digit_N1 = N1 % 10;
    int unit_digit_N2 = N2 % 10;
    
    // Calculate sum of unit digits
    int sum_unit_digits = unit_digit_N1 + unit_digit_N2;
    
    // Print the sum
    printf("%d\n", sum_unit_digits);
    
    return 0;
}
