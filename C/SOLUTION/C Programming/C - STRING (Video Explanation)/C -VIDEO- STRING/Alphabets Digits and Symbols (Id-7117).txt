#include<stdio.h>
#include <stdlib.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    for(int index=0; str[index] != '\0'; index++){
        if(isalpha(str[index])){
            printf("%c", str[index]);
        }
    }
    for(int index=0; str[index] != '\0'; index++){
        if(isdigit(str[index])){
            printf("%c", str[index]);
        }
    }
    for(int index=0; str[index] != '\0'; index++){
        if(isalpha(str[index]) == 0 && isdigit(str[index]) == 0){
            printf("%c", str[index]);
        }
    }
    return 0;
}