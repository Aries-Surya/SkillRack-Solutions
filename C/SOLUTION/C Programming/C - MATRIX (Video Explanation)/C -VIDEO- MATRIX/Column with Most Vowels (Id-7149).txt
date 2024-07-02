#include<stdio.h>
#include <stdlib.h>

int main()
{
    int R, C;
    int vowelCount, maxVowelCount=0, maxVowelCol = 0;
    scanf("%d %d", &R, &C);
    char matrix[R][C], str[2];
    for(int row=0; row<R;row++){
        for(int col=0;col<C;col++){
            scanf("%s", str);
            matrix[row][col] = str[0];
        }
    }
    for(int col=0;col<C;col++){
        vowelCount = 0;
        for(int row=0; row<R;row++){
            char ch = matrix[row][col];
            if(ch == 'a' || ch == 'e' || ch == 'i' ||
               ch == 'o' || ch == 'u'){
                vowelCount++;
            }
        }
        if(vowelCount > maxVowelCount){
            maxVowelCount = vowelCount;
            maxVowelCol = col;
        }
    }
    for(int row=0; row<R;row++){
        printf("%c\n", matrix[row][maxVowelCol]);
    }
    return 0;
}


