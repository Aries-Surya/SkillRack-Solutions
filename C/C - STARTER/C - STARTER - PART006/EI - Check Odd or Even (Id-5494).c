#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    if (N % 2 == 0) {
        printf("even");
    } else {
        printf("odd");
    }
    
    return 0;
}
