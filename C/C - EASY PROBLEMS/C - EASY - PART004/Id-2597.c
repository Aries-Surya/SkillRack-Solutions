#include <stdio.h>

int main() {
    char S[1001];
    fgets(S, sizeof(S), stdin);
    
    int wordCount = 0;
    int isWord = 0;
    
    for(int i = 0; S[i] != '\0'; i++) {
        if(S[i] == ' ' || S[i] == '\n' || S[i] == '\t') {
            isWord = 0;
        } else if(isWord == 0) {
            isWord = 1;
            wordCount++;
        }
    }
    
    printf("%d\n", wordCount);
    
    return 0;
}
