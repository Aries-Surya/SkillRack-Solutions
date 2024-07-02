#include<stdio.h>

int main(){
    int N;
    scanf("%d", &N);
    char matrix[N][N], str[2];
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            scanf("%s", str);
            matrix[row][col] = str[0];
            if(col == 0){
                printf("%c", matrix[row][col]);
            }
        }
    }
    for(int diagonalIndex= 1; diagonalIndex <= N-1; diagonalIndex++){
        printf("%c", matrix[diagonalIndex][diagonalIndex]);
    }
    for(int row = N-2; row >= 0; row--){
        printf("%c", matrix[row][N-1]);
    }
    return 0;
}