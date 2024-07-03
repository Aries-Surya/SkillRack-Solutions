#include<stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    // Ensure X is less than Y as per the problem statement
    if (X >= Y) {
        return 0; // If X is not less than Y, just exit the program.
    }
    
    // Iterate from Y down to X
    for(int i = Y; i >= X; i--)
    {
        if(i % 10 == 0)
        {
            printf("%d ", i);
        }
    }
    
    return 0;
}



dai change i = ctr