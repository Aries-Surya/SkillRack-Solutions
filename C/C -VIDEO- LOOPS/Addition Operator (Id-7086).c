
#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int ctr = 1; ctr < N; ctr++){
        printf("%d+%d\n", ctr, N-ctr);
    }
    return 0;
}



 

