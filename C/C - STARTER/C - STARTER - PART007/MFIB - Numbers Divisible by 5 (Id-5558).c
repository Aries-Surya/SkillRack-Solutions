#include<stdio.h>

int main() {
    int X, Y;
    scanf("%d %d", &X, &Y);
    
    for(int ctr = X; ctr <= Y; ctr++)
    {
        if(ctr % 5 == 0)
        {
            printf("%d ", ctr);
        }
    }
    
    return 0;
}
