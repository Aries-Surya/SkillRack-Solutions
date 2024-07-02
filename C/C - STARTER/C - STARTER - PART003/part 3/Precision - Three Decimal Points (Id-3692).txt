#include <stdio.h>

int main() {
    double N;
    
    // Read the decimal value N from input
    scanf("%lf", &N);
    
    // Print N with precision up to 3 decimal places
    printf("%.3lf\n", N);
    
    return 0;
}
