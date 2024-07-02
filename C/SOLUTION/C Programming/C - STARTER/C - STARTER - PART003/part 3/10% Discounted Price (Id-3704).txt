#include <stdio.h>

int main() {
    double P, discounted_price;
    
    // Read the price P from input
    scanf("%lf", &P);
    
    // Calculate the discounted price
    discounted_price = P * 0.90; // 10% discount means 90% of the original price
    
    // Print the discounted price rounded to two decimal places
    printf("%.2lf\n", discounted_price);
    
    return 0;
}
