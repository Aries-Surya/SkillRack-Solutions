#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int arr[N], index;

    for(index = 0; index < N; index++) {
        scanf("%d", &arr[index]);
    }

    // Print the first N-2 numbers
    for(index = 0; index < N - 2; index++) {
        printf("%d", arr[index]);
        if (index < N - 3) {
            printf(" ");  // Print a space after each number except the last one
        }
    }
    
    printf("\n");  // Print a newline character at the end

    return 0;
}
