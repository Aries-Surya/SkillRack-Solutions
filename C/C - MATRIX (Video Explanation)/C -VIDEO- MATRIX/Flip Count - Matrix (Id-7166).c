#include<stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int matrix[N][N], flipCount = 0;
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            scanf("%d", &matrix[row][col]);
        }
    }
    for(int row = 0; row < N; row++){
        for(int col = 0; col < N; col++){
            if(matrix[row][col] != matrix[col][row]){
                flipCount++;
            }
        }
    }
    printf("%d", flipCount);
    return 0;
}