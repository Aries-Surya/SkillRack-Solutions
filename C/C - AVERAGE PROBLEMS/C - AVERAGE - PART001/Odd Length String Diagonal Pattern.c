#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    scanf("%s", str);
    int len = strlen(str);
    
    for(int i = 0; i < len; i++) {
        for(int j = 0; j < len; j++) {
            if(j == i || j == len - i - 1)
                printf("%c", str[j]);
            else
                printf(" ");
        }
        printf("\n");
    }
    
    return 0;
}
