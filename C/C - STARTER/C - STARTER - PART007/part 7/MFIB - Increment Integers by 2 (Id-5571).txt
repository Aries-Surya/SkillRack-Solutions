#include<stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    for(int ctr = X; ctr <= Y; ctr += 2) {
        printf("%d ", ctr);
    }
    
    return 0;
}
