#include<stdio.h>

int main(){
    int N, len;
    scanf("%d", &N);
    char str[101];
    for(int ctr = 1; ctr <= N; ctr++){
        scanf("%s", str);
        len = strlen(str);
        if(len % 2 != 0){
            printf("%c\n", str[len/2]);
        }
        else{
            printf("%c%c\n", str[len/2 - 1], str[len/2]);
        }
    }
    return 0;
}