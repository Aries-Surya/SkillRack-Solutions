#include<stdio.h>

int main(){
    int N1, N2, N3, N4;
    scanf("%d %d %d %d", &N1, &N2, &N3, &N4);
    if(N1 % 2 == N3 % 2 && N2 % 2 == N4 % 2 && N1 % 2 != N2 % 2){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}
