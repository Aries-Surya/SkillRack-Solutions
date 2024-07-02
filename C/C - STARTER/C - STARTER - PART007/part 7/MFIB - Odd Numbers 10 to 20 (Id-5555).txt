#include<stdio.h>

int main() {
    int ctr;
    for(ctr = 10; ctr <= 20; ctr++)
    {
        if(ctr % 2 != 0)
        {
            printf("%d ", ctr);
        }
    }
    return 0;
}
