#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    for(int row = 1; row <= N; row++){
        for(int col = 1; col <= row; col++){
            printf("%d", col);
        }
        for(int hyphen = 1; hyphen <= N-row; hyphen++){
            printf("-");
        }
        for(int col = row; col >= 1; col--){
            printf("%d", col);
        }
        printf("\n");
    }
    return 0;
}
