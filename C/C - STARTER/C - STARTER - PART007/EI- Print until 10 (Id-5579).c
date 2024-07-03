#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    
    int num;
    for (int i = 0; i < N; i++) {
        scanf("%d", &num);
        if (num == 10) {
            break;
        }
        printf("%d ", num);
    }
    printf("\n");
    
    return 0;
}
