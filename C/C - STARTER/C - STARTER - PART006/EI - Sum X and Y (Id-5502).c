#include <stdio.h>

int main() {
    double X, Y;
    scanf("%lf %lf", &X, &Y);
    
    double sum = X + Y;
    
    printf("%.2lf\n", sum);
    
    return 0;
}
