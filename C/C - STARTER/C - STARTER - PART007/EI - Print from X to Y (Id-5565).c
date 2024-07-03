#include<stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    // Ensure X is less than Y as per the problem statement
    if (X >= Y) {
        return 0; // If X is not less than Y, just exit the program.
    }
    
    // Iterate from X up to Y
    for(int i = X; i <= Y; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}
