#include<stdio.h>

int main(){
    int X, Y, Z;
    scanf("%d %d %d", &X, &Y, &Z);
    if(X+Y > Z){
        printf("%d Loss", (X+Y) - Z);
    }
    else if(X+Y < Z){
        printf("%d Profit", Z - (X+Y));
    }
    else{
        printf("No Profit No Loss");
    }
    return 0;
}
