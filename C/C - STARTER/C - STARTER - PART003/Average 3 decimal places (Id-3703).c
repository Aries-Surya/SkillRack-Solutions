#include <stdio.h>

int main() {
    double N1, N2, N3, N4;
    
    // Read the four double values from input
    scanf("%lf %lf %lf %lf", &N1, &N2, &N3, &N4);
    
    // Calculate the average
    double average = (N1 + N2 + N3 + N4) / 4.0;
    
    // Print the average with precision up to three decimal places
    printf("%.3lf\n", average);
    
    return 0;
}
